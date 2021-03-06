/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS text-mode setup
 * FILE:            base/setup/usetup/devinst.c
 * PURPOSE:         Device installation
 * PROGRAMMER:      Herv� Poussineau (hpoussin@reactos.org)
 */

#include <usetup.h>

#define NDEBUG
#include <debug.h>

#define INITGUID
#include <guiddef.h>
#include <libs/umpnpmgr/sysguid.h>

BOOLEAN
ResetDevice(
    IN LPCWSTR DeviceId)
{
    PLUGPLAY_CONTROL_RESET_DEVICE_DATA ResetDeviceData;
    NTSTATUS Status;

    RtlInitUnicodeString(&ResetDeviceData.DeviceInstance, DeviceId);
    Status = NtPlugPlayControl(PlugPlayControlResetDevice, &ResetDeviceData, sizeof(PLUGPLAY_CONTROL_RESET_DEVICE_DATA));
    if (!NT_SUCCESS(Status))
    {
        DPRINT1("NtPlugPlayControl() failed with status 0x%08x\n", Status);
        return FALSE;
    }
    return TRUE;
}

BOOLEAN
InstallDriver(
    IN HINF hInf,
    IN HANDLE hServices,
    IN HANDLE hDeviceKey,
    IN LPCWSTR DeviceId,
    IN LPCWSTR HardwareId)
{
    UNICODE_STRING PathPrefix = RTL_CONSTANT_STRING(L"System32\\DRIVERS\\");
    UNICODE_STRING ServiceU = RTL_CONSTANT_STRING(L"Service");
    UNICODE_STRING ErrorControlU = RTL_CONSTANT_STRING(L"ErrorControl");
    UNICODE_STRING ImagePathU = RTL_CONSTANT_STRING(L"ImagePath");
    UNICODE_STRING StartU = RTL_CONSTANT_STRING(L"Start");
    UNICODE_STRING TypeU = RTL_CONSTANT_STRING(L"Type");
    UNICODE_STRING UpperFiltersU = RTL_CONSTANT_STRING(L"UpperFilters");
    PWSTR keyboardClass = L"kbdclass\0";

    UNICODE_STRING StringU;
    OBJECT_ATTRIBUTES ObjectAttributes;
    HANDLE hService;
    INFCONTEXT Context;
    PCWSTR Driver, ClassGuid, ImagePath;
    PWSTR FullImagePath;
    ULONG dwValue;
    ULONG Disposition;
    NTSTATUS Status;
    BOOLEAN deviceInstalled = FALSE;

    /* Check if we know the hardware */
    if (!SpInfFindFirstLine(hInf, L"HardwareIdsDatabase", HardwareId, &Context))
        return FALSE;
    if (!INF_GetDataField(&Context, 1, &Driver))
        return FALSE;

    /* Get associated class GUID (if any) */
    if (!INF_GetDataField(&Context, 2, &ClassGuid))
        ClassGuid = NULL;

    /* Find associated driver name */
    /* FIXME: check in other sections too! */
    if (!SpInfFindFirstLine(hInf, L"BootBusExtenders.Load", Driver, &Context)
     && !SpInfFindFirstLine(hInf, L"BusExtenders.Load", Driver, &Context)
     && !SpInfFindFirstLine(hInf, L"SCSI.Load", Driver, &Context)
     && !SpInfFindFirstLine(hInf, L"InputDevicesSupport.Load", Driver, &Context)
     && !SpInfFindFirstLine(hInf, L"Keyboard.Load", Driver, &Context))
    {
        INF_FreeData(ClassGuid);
        INF_FreeData(Driver);
        return FALSE;
    }

    if (!INF_GetDataField(&Context, 1, &ImagePath))
    {
        INF_FreeData(ClassGuid);
        INF_FreeData(Driver);
        return FALSE;
    }

    /* Prepare full driver path */
    dwValue = PathPrefix.MaximumLength + wcslen(ImagePath) * sizeof(WCHAR);
    FullImagePath = (PWSTR)RtlAllocateHeap(ProcessHeap, 0, dwValue);
    if (!FullImagePath)
    {
        DPRINT1("RtlAllocateHeap() failed\n");
        INF_FreeData(ImagePath);
        INF_FreeData(ClassGuid);
        INF_FreeData(Driver);
        return FALSE;
    }
    RtlCopyMemory(FullImagePath, PathPrefix.Buffer, PathPrefix.MaximumLength);
    ConcatPaths(FullImagePath, dwValue / sizeof(WCHAR), 1, ImagePath);

    DPRINT1("Using driver '%S' for device '%S'\n", ImagePath, DeviceId);

    /* Create service key */
    RtlInitUnicodeString(&StringU, Driver);
    InitializeObjectAttributes(&ObjectAttributes, &StringU, OBJ_CASE_INSENSITIVE, hServices, NULL);
    Status = NtCreateKey(&hService, KEY_SET_VALUE, &ObjectAttributes, 0, NULL, REG_OPTION_NON_VOLATILE, &Disposition);
    if (!NT_SUCCESS(Status))
    {
        DPRINT1("NtCreateKey('%wZ') failed with status 0x%08x\n", &StringU, Status);
        RtlFreeHeap(ProcessHeap, 0, FullImagePath);
        INF_FreeData(ImagePath);
        INF_FreeData(ClassGuid);
        INF_FreeData(Driver);
        return FALSE;
    }

    /* Fill service key */
    if (Disposition == REG_CREATED_NEW_KEY)
    {
        dwValue = 0;
        NtSetValueKey(hService,
                      &ErrorControlU,
                      0,
                      REG_DWORD,
                      &dwValue,
                      sizeof(dwValue));

        dwValue = 0;
        NtSetValueKey(hService,
                      &StartU,
                      0,
                      REG_DWORD,
                      &dwValue,
                      sizeof(dwValue));

        dwValue = SERVICE_KERNEL_DRIVER;
        NtSetValueKey(hService,
                      &TypeU,
                      0,
                      REG_DWORD,
                      &dwValue,
                      sizeof(dwValue));
    }
    /* HACK: don't put any path in registry */
    NtSetValueKey(hService,
                  &ImagePathU,
                  0,
                  REG_SZ,
                  (PVOID)ImagePath,
                  (wcslen(ImagePath) + 1) * sizeof(WCHAR));

    INF_FreeData(ImagePath);

    if (ClassGuid &&_wcsicmp(ClassGuid, L"{4D36E96B-E325-11CE-BFC1-08002BE10318}") == 0)
    {
        DPRINT1("Installing keyboard class driver for '%S'\n", DeviceId);
        NtSetValueKey(hDeviceKey,
                      &UpperFiltersU,
                      0,
                      REG_MULTI_SZ,
                      keyboardClass,
                      (wcslen(keyboardClass) + 2) * sizeof(WCHAR));
    }

    INF_FreeData(ClassGuid);

    /* Associate device with the service we just filled */
    Status = NtSetValueKey(hDeviceKey,
                           &ServiceU,
                           0,
                           REG_SZ,
                           (PVOID)Driver,
                           (wcslen(Driver) + 1) * sizeof(WCHAR));
    if (NT_SUCCESS(Status))
    {
        /* Restart the device, so it will use the driver we registered */
        deviceInstalled = ResetDevice(DeviceId);
    }

    INF_FreeData(Driver);

    /* HACK: Update driver path */
    NtSetValueKey(hService,
                  &ImagePathU,
                  0,
                  REG_SZ,
                  FullImagePath,
                  (wcslen(FullImagePath) + 1) * sizeof(WCHAR));
    RtlFreeHeap(ProcessHeap, 0, FullImagePath);

    NtClose(hService);

    return deviceInstalled;
}

VOID
InstallDevice(
    IN HINF hInf,
    IN HANDLE hEnum,
    IN HANDLE hServices,
    IN LPCWSTR DeviceId)
{
    UNICODE_STRING HardwareIDU = RTL_CONSTANT_STRING(L"HardwareID");
    UNICODE_STRING CompatibleIDsU = RTL_CONSTANT_STRING(L"CompatibleIDs");

    UNICODE_STRING DeviceIdU;
    OBJECT_ATTRIBUTES ObjectAttributes;
    LPCWSTR HardwareID;
    PKEY_VALUE_PARTIAL_INFORMATION pPartialInformation = NULL;
    HANDLE hDeviceKey;
    ULONG ulRequired;
    BOOLEAN bDriverInstalled = FALSE;
    NTSTATUS Status;

    RtlInitUnicodeString(&DeviceIdU, DeviceId);
    InitializeObjectAttributes(&ObjectAttributes, &DeviceIdU, OBJ_CASE_INSENSITIVE, hEnum, NULL);
    Status = NtOpenKey(&hDeviceKey, KEY_QUERY_VALUE | KEY_SET_VALUE, &ObjectAttributes);
    if (!NT_SUCCESS(Status))
    {
        DPRINT("Unable to open subkey '%S'\n", DeviceId);
        return;
    }

    Status = NtQueryValueKey(
        hDeviceKey,
        &HardwareIDU,
        KeyValuePartialInformation,
        NULL,
        0,
        &ulRequired);
    if (Status == STATUS_BUFFER_TOO_SMALL)
    {
        pPartialInformation = (PKEY_VALUE_PARTIAL_INFORMATION)RtlAllocateHeap(ProcessHeap, 0, ulRequired);
        if (!pPartialInformation)
        {
            DPRINT1("RtlAllocateHeap() failed\n");
            NtClose(hDeviceKey);
            return;
        }
        Status = NtQueryValueKey(
            hDeviceKey,
            &HardwareIDU,
            KeyValuePartialInformation,
            pPartialInformation,
            ulRequired,
            &ulRequired);
    }
    if (Status == STATUS_OBJECT_NAME_NOT_FOUND)
    {
        /* Nothing to do */
    }
    else if (!NT_SUCCESS(Status))
    {
        DPRINT1("NtQueryValueKey() failed with status 0x%08x\n", Status);
        if (pPartialInformation)
            RtlFreeHeap(ProcessHeap, 0, pPartialInformation);
        NtClose(hDeviceKey);
        return;
    }
    else if (pPartialInformation)
    {
        for (HardwareID = (LPCWSTR)pPartialInformation->Data;
             (PUCHAR)HardwareID < pPartialInformation->Data + pPartialInformation->DataLength
                 && *HardwareID
                 && !bDriverInstalled;
            HardwareID += wcslen(HardwareID) + 1)
        {
            bDriverInstalled = InstallDriver(hInf, hServices,hDeviceKey, DeviceId, HardwareID);
        }
    }

    if (!bDriverInstalled)
    {
        if (pPartialInformation)
        {
            RtlFreeHeap(ProcessHeap, 0, pPartialInformation);
            pPartialInformation = NULL;
        }
        Status = NtQueryValueKey(
            hDeviceKey,
            &CompatibleIDsU,
            KeyValuePartialInformation,
            NULL,
            0,
            &ulRequired);
        if (Status == STATUS_BUFFER_TOO_SMALL)
        {
            pPartialInformation = (PKEY_VALUE_PARTIAL_INFORMATION)RtlAllocateHeap(ProcessHeap, 0, ulRequired);
            if (!pPartialInformation)
            {
                DPRINT("RtlAllocateHeap() failed\n");
                NtClose(hDeviceKey);
                return;
            }
            Status = NtQueryValueKey(
                hDeviceKey,
                &CompatibleIDsU,
                KeyValuePartialInformation,
                pPartialInformation,
                ulRequired,
                &ulRequired);
        }
        if (Status == STATUS_OBJECT_NAME_NOT_FOUND)
        {
            /* Nothing to do */
        }
        else if (!NT_SUCCESS(Status))
        {
            if (pPartialInformation)
                RtlFreeHeap(ProcessHeap, 0, pPartialInformation);
            NtClose(hDeviceKey);
            DPRINT1("NtQueryValueKey() failed with status 0x%08x\n", Status);
            return;
        }
        else if (pPartialInformation)
        {
            for (HardwareID = (LPCWSTR)pPartialInformation->Data;
                 (PUCHAR)HardwareID < pPartialInformation->Data + pPartialInformation->DataLength
                     && *HardwareID
                     && !bDriverInstalled;
                HardwareID += wcslen(HardwareID) + 1)
            {
                bDriverInstalled = InstallDriver(hInf, hServices,hDeviceKey, DeviceId, HardwareID);
            }
        }
    }
    if (!bDriverInstalled)
        DPRINT("No driver available for %S\n", DeviceId);

    RtlFreeHeap(ProcessHeap, 0, pPartialInformation);
    NtClose(hDeviceKey);
}

NTSTATUS
EventThread(IN LPVOID lpParameter)
{
    UNICODE_STRING EnumU = RTL_CONSTANT_STRING(L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Enum");
    UNICODE_STRING ServicesU = RTL_CONSTANT_STRING(L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Services");

    PPLUGPLAY_EVENT_BLOCK PnpEvent, NewPnpEvent;
    OBJECT_ATTRIBUTES ObjectAttributes;
    ULONG PnpEventSize;
    HINF hInf;
    HANDLE hEnum, hServices;
    NTSTATUS Status;

    hInf = *(HINF*)lpParameter;

    InitializeObjectAttributes(&ObjectAttributes, &EnumU, OBJ_CASE_INSENSITIVE, NULL, NULL);
    Status = NtOpenKey(&hEnum, KEY_QUERY_VALUE, &ObjectAttributes);
    if (!NT_SUCCESS(Status))
    {
        DPRINT1("NtOpenKey('%wZ') failed with status 0x%08lx\n", &EnumU, Status);
        return Status;
    }

    InitializeObjectAttributes(&ObjectAttributes, &ServicesU, OBJ_CASE_INSENSITIVE, NULL, NULL);
    Status = NtCreateKey(&hServices, KEY_ALL_ACCESS, &ObjectAttributes, 0, NULL, REG_OPTION_NON_VOLATILE, NULL);
    if (!NT_SUCCESS(Status))
    {
        DPRINT1("NtCreateKey('%wZ') failed with status 0x%08lx\n", &ServicesU, Status);
        NtClose(hEnum);
        return Status;
    }

    PnpEventSize = 0x1000;
    PnpEvent = RtlAllocateHeap(ProcessHeap, 0, PnpEventSize);
    if (PnpEvent == NULL)
    {
        Status = STATUS_NO_MEMORY;
        goto Quit;
    }

    for (;;)
    {
        DPRINT("Calling NtGetPlugPlayEvent()\n");

        /* Wait for the next PnP event */
        Status = NtGetPlugPlayEvent(0, 0, PnpEvent, PnpEventSize);

        /* Resize the buffer for the PnP event if it's too small */
        if (Status == STATUS_BUFFER_TOO_SMALL)
        {
            PnpEventSize += 0x400;
            NewPnpEvent = RtlReAllocateHeap(ProcessHeap, 0, PnpEvent, PnpEventSize);
            if (NewPnpEvent == NULL)
            {
                Status = STATUS_NO_MEMORY;
                goto Quit;
            }
            PnpEvent = NewPnpEvent;
            continue;
        }

        if (!NT_SUCCESS(Status))
        {
            DPRINT("NtPlugPlayEvent() failed (Status %lx)\n", Status);
            break;
        }

        /* Process the PnP event */
        DPRINT("Received PnP Event\n");
        if (IsEqualIID(&PnpEvent->EventGuid, (REFGUID)&GUID_DEVICE_ENUMERATED))
        {
            DPRINT("Device arrival event: %S\n", PnpEvent->TargetDevice.DeviceIds);
            InstallDevice(hInf, hEnum, hServices, PnpEvent->TargetDevice.DeviceIds);
        }
        else
        {
            DPRINT("Unknown event\n");
        }

        /* Dequeue the current PnP event and signal the next one */
        NtPlugPlayControl(PlugPlayControlUserResponse, NULL, 0);
    }

    Status = STATUS_SUCCESS;

Quit:
    if (PnpEvent)
        RtlFreeHeap(ProcessHeap, 0, PnpEvent);

    NtClose(hServices);
    NtClose(hEnum);

    return Status;
}

DWORD WINAPI
PnpEventThread(IN LPVOID lpParameter)
{
    NTSTATUS Status;
    Status = EventThread(lpParameter);
    NtTerminateThread(NtCurrentThread(), Status);
    return 0;
}
