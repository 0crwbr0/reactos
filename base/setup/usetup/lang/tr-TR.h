/* TRANSLATORS: 2013-2015 Erdem Ersoy (eersoy93) (erdemersoy [at] live [dot] com), 2018 Ercan Ersoy (ercanersoy) (ercanersoy [at] ercanersoy [dot] net) */

#pragma once

static MUI_ENTRY trTRLanguagePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Dil Se�imi",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  L�tfen kurulum s�reci i�in kullan�lacak dili se�iniz.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Ard�ndan ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Bu dil, kurulacak sistemin �n tan�ml� dili olacakt�r.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRWelcomePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS Kur'a ho� geldiniz.",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "Kurulumun bu b�l�m�, ReactOS ��letim Sistemi'ni bilgisayar�n�za",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "kopyalar ve kurulumun ikinci b�l�m�n� haz�rlar.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  ReactOS'u y�klemek ya da y�kseltmek i�in ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  ReactOS'u onarmak veya y�kseltmek i�in R'ye bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  ReactOS Lisans Terimleri'ni ve �artlar�'n� g�r�nt�lemek i�in L'ye bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  ReactOS'u kurmadan ��kmak i�in F3'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "Daha �ok bilgi i�in l�tfen u�ray�n�z:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "http://www.reactos.org",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        0,
        0,
        "ENTER = S�rd�r  R = Onar veya Y�kselt  L = Lisans  F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRIntroPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS S�r�m Durumu",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "ReactOS alfa a�amas�ndad�r, �zellikleri tamamlanmam�� anlam�na gelmektedir",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "ve a��r geli�tirme alt�ndad�r. Yaln�zca de�erlendirme ve s�nama ama�lar�yla",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "kullan�m� �nerilmektedir ve g�nl�k kullan�m i�letim sisteminiz de�ildir.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "E�er, ReactOS'u ger�ek donan�m �zerinde �al��t�rmay� deneyecekseniz",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "verilerinizi yedekleyin veya bir ikinci bilgisayar�n�zda s�nay�n.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  ReactOS Kur'a s�rd�rmek i�in ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  ReactOS'u kurmaks�z�n ��kmak i�in F3'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRLicensePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        6,
        "Lisanslama:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        8,
        "ReactOS Sistemi, GNU GPL'yle X11, BSD ve GNU LPGL",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        9,
        "lisanslar� gibi ba�ka uygun lisanslardan kod i�eren",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "b�l�mlerin �artlar� alt�nda lisanslanm��t�r.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "Bu y�zden ReactOS sisteminin b�l�m� olan t�m yaz�l�mlar, korunan",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "�zg�n lisanslar�yla birlikte GNU GPL alt�nda yay�mlan�r.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "Bu yaz�l�m, yerel ve uluslararas� yasa uygulanabilir kullan�m",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "�zerine hi�bir g�vence ve k�s�tlamayla gelmez. ReactOS'un",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        16,
        "lisanslanmas� yaln�zca ���nc� yanlara da��tmay� kapsar.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "E�er birtak�m nedenlerden dolay� ReactOS ile GNU Genel",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "Kamu Lisans�'n�n bir kopyas�n� almad�ysan�z l�tfen u�ray�n�z:",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "http://www.gnu.org/licenses/licenses.html",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        21,
        "G�vence:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        23,
        "Bu �zg�r yaz�l�md�r, kopylama �artlar� i�in kayna�a bak�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        24,
        "Burada hi�bir g�vence YOKTUR, SATILAB�L�RL�K veya",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "BEL�RL� B�R AMACA UYGUNLUK i�in bile.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Geri D�n",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRDevicePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "A�a��daki liste �imdiki ayg�t ayarlar�n� g�sterir.",
        TEXT_STYLE_NORMAL
    },
    {
        24,
        11,
        "Bilgisayar:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        12,
        "G�r�nt�:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        13,
        "Klavye:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        14,
        "Klavye D�zeni:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        16,
        "Do�rula:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        25,
        16,
        "Bu ayg�t ayarlar�n� do�rula.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        19,
        "Ayg�t ayarlar�n�, bir se�enek se�mek i�in Yukar� veya A�a��",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        20,
        "tu�lar�na basarak de�i�tirebilirsiniz. Sonra ba�ka ayarlar se�mek i�in",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        21,
        "ENTER tu�una bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "T�m ayarlar uygun oldu�unda ""Bu ayg�t ayarlar�n� do�rula.""y�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "se�iniz ve ENTER tu�una bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRRepairPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS Kur, bir �n geli�me evresindedir. Daha t�m�yle kullan��l�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "bir kurulum uygulamas�n�n t�m i�levlerini desteklemez.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "Onarma i�levleri daha bitirilmemi�tir.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  ��letim sistemini y�kseltmek i�in U'ya bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Kurtarma Konsolu i�in R'ye bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Ana sayfaya geri d�nmek i�in ESC'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Bilgisayar�n�z� yeniden ba�latmak i�in ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ESC = Ana Sayfa  U = Y�kselt  R = Kurtarma  ENTER = Yeniden Ba�lat",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRUpgradePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS Kur, a�a��da listelenen bir mevcut ReactOS kurulumunu",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "y�kseltebilir ya da ReactOS kurulumu zarar g�rm��se Kur program� onu",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "onarmay� deneyebilir.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "Onar�m i�levleri hen�z tamamlanmam��t�r.",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        15,
        "\x07  Bir i�letim sistemi se�mek i�in YUKARI'ya ya da A�A�I'ya bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Se�ilmi� i�letim sistemi kurulumunu y�kseltmek i�in U'ya bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Bir yeni kuruluma s�rd�rmek i�in ESC'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  ReactOS kurmaks�z�n ��kmak i�in F3'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "U = Y�kselt   ESC = Y�kseltme   F3 = ��k��",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRComputerPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Kurulum yap�lacak bilgisayar�n t�r�n� se�mek isteyebilirsiniz.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  �stenen bilgisyar t�r�n� se�mek i�in YUKARI'ya veya A�A�I'ya bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Ard�ndan ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Bilgisayar t�r�n� de�i�tirmeden bir �nceki sayfaya",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   d�nmek i�in ESC tu�una bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   ESC = �ptal   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRFlushPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "Dizge, �imdi diskinize saklanm�� t�m veriyi do�ruluyor.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "Bu bir dakika s�rebilir.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "Bitti�inde bilgisayar�n�z kendili�inden yeniden ba�layacakt�r.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "�n bellek temizleniyor...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRQuitPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "ReactOS, t�m�yle kurulmad�.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "A: s�r�c�s�nden disketi ve t�m CD s�r�c�lerinden",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "CD-ROM'lar� ��kart�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "Bilgisayar�n�z� yeniden ba�latmak i�in ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "L�tfen bekleyiniz...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRDisplayPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Kurulum yap�lacak g�r�nt�n�n t�r�n� se�mek isteyebilirsiniz.",
        TEXT_STYLE_NORMAL
    },
    {   8,
        10,
        "\x07  �stenen g�r�nt� t�r�n� se�mek i�in YUKARI'ya veya A�A�I'ya bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Ard�ndan ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  G�r�nt� t�r�n� de�i�tirmeden bir �nceki sayfaya",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   d�nmek i�in ESC tu�una bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   ESC = �ptal   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRSuccessPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "ReactOS'un ana bile�enleri ba�ar�l� olarak kuruldu.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "A: s�r�c�s�nden disketi ve t�m CD s�r�c�lerinden",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "CD-ROM'lar� ��kart�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "Bilgisayar�n�z� yeniden ba�latmak i�in ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Bilgisayar� Yeniden Ba�lat",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRBootPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Kur, bilgisayar�n�z�n sabit diskine �ny�kleyiciyi kuramad�.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "L�tfen A: s�r�c�s�ne bi�imlendirilmi� bir disket tak�n�z",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "ve ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }

};

static MUI_ENTRY trTRSelectPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "A�a��daki liste, var olan b�l�mleri ve yeni b�l�mler i�in",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "kullan�lmayan disk bo�lu�unu g�sterir.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "\x07  Bir liste girdisini se�mek i�in YUKARI'ya ya da A�A�I'ya bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Se�ili b�l�me ReactOS'u y�klemek i�in ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Bir ana b�l�m olu�turmak i�in P'ye bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Bir geni�letilmi� b�l�m olu�turmak i�in E'ye bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Mant�ksal bir b�l�m olu�turmak i�in L'ye bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Var olan bir b�l�m silmek i�in D'ye bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "L�tfen bekleyiniz...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRConfirmDeleteSystemPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Kur'a sistem b�l�m�n� silmeyi sordunuz.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "Sistem b�l�mleri; tan�lama programlar�, donan�m yap�land�rma",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        11,
        "programlar�, ReactOS gibi bir i�letim sistemini ba�latmak i�in programlar",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "veya donan�m �reticisi taraf�ndan sa�lanan ba�ka programlar i�erebilir.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Yaln�zca, b�l�mde b�yle programlar�n olmad���ndan emin oldu�unuzda ya da",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "onlar� silmek istedi�inizden emin oldu�unuzda bir sistem b�l�m�n� siliniz.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "B�l�m� sildi�inizde ReactOS Kur'u bitirene dek bilgisayar� sabit diskten",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        17,
        "�ny�kleyemeyebilirsiniz.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "\x07  Sistem b�l�m�n� silmek i�in ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "Sonra b�l�m� silmeyi onaylamak i�in yeniden sorulacaks�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        24,
        "\x07  Bir �nceki sayfaya d�nmek i�in ESC'e bas�n�z. B�l�m silinmeyecek.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r  ESC = �ptal",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRFormatPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "B�l�m Bi�imlendirme",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "Kur, �imdi b�l�m� bi�imlendirecek. S�rd�rmek i�in ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        TEXT_STYLE_NORMAL
    }
};

static MUI_ENTRY trTRInstallDirectoryEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Kur, se�ili b�l�me ReactOS dosyalar�n� y�kler. ReactOS'un",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "y�klenmesini istedi�iniz bir dizin se�iniz.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "�nerilen dizini de�i�tirmek i�in, karakterleri silmek i�in BACKSPACE'e",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "bas�n�z ve ard�ndan ReactOS'un y�klenmesini istedi�iniz dizini yaz�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRFileCopyEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        0,
        12,
        "ReactOS Kur, ReactOS kurulum dizininize dosyalar� kopyalarken",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        13,
        " l�tfen bekleyiniz.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        14,
        "Bu, bitirmek i�in birka� dakika s�rebilir.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        50,
        0,
        "\xB3 L�tfen bekleyiniz...",
        TEXT_TYPE_STATUS
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRBootLoaderEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Kur, �ny�kleyiciyi kuruyor.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "�ny�kleyiciyi sabit diskin �zerine kur. (MBR ve VBR)",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "�ny�kleyiciyi sabit diskin �zerine kur. (Yaln�zca VBR)",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "�ny�kleyiciyi bir diskete kur.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "�ny�kleyici kurulumunu ge�.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRKeyboardSettingsEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Kurulum yap�lacak klavyenin t�r�n� se�mek isteyebilirsiniz.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  �stenen klavye t�r�n� se�mek i�in YUKARI'ya veya A�A�I'ya bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Ard�ndan ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Klavye t�r�n� de�i�tirmeden bir �nceki sayfaya",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   d�nmek i�in ESC tu�una bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   ESC = �ptal   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRLayoutSettingsEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "L�tfen �ntan�ml� olarak kurulacak bir d�zen se�iniz.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  �stenen klavye d�zenini se�mek i�in YUKARI'ya veya A�A�I'ya bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Ard�ndan ENTER'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  G�r�nt� t�r�n� de�i�tirmeden bir �nceki sayfaya",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   d�nmek i�in ESC d��mesine bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = S�rd�r   ESC = �ptal   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY trTRPrepareCopyEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Kur, ReactOS dosyalar�n� kopyalamak i�in bilgisayar�n�z� haz�rl�yor.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Dosya kopylalama listesi olu�turuluyor...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY trTRSelectFSEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        17,
        "A�a��daki listeden bir dosya sistemi se�iniz.",
        0
    },
    {
        8,
        19,
        "\x07  Bir dosya sistemi se�mek i�in YUKARI'ya veya A�A�I'ya bas�n�z.",
        0
    },
    {
        8,
        21,
        "\x07  B�l�m� bi�imlendirmek i�in ENTER'e bas�n�z.",
        0
    },
    {
        8,
        23,
        "\x07  Ba�ka bir b�l�m se�mek i�in ESC'e bas�n�z.",
        0
    },
    {
        0,
        0,
        "ENTER = S�rd�r   ESC = �ptal   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },

    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRDeletePartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "B�l�m� silmeyi se�tiniz.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "\x07  B�l�m� silmek i�in D'ye bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        11,
        19,
        "UYARI: Bu b�l�mdeki t�m veriler yitirilecektir!",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  �ptal etmek i�in ESC'e bas�n�z.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "D = B�l�m Sil   ESC = �ptal   F3 = ��k",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY trTRRegistryEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Kur ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Kur, sistem yap�land�rmas�n� g�ncelle�tiriyor.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Kay�t y���nlar� olu�turuluyor...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

MUI_ERROR trTRErrorEntries[] =
{
    {
        // NOT_AN_ERROR
        "Ba�ar�l�\n"
    },
    {
        // ERROR_NOT_INSTALLED
        "ReactOS, bilgisayara t�m�yle kurulmad�. E�er �imdi\n"
        "Kur'dan ��karsan�z ReactOS'u kurmak i�in Kur'u\n"
        "yeniden �al��t�rmaya gereksinim duyacaks�n�z.\n"
        "\n"
        "  \x07  Kur'u s�rd�rmek i�in ENTER'e bas�n�z.\n"
        "  \x07  Kur'dan ��kmak i�in F3'e bas�n�z.",
        "F3 = ��k  ENTER = S�rd�r"
    },
    {
        // ERROR_NO_HDD
        "Kur, bir sabit disk bulamad�.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_NO_SOURCE_DRIVE
        "Kur, kaynak s�r�c�y� bulamad�.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_LOAD_TXTSETUPSIF
        "Kur, TXTSETUP.SIF dosyas�n� y�klemede ba�ar�s�z oldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_CORRUPT_TXTSETUPSIF
        "Kur, bozuk bir TXTSETUP.SIF buldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_SIGNATURE_TXTSETUPSIF,
        "Kur, TXTSETUP.SIF'ta ge�ersiz bir i�aret buldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_DRIVE_INFORMATION
        "Kur, sistem s�r�c� bilgisini alamad�.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_WRITE_BOOT,
        "Kur, sistem b�l�m�ne %S �ny�kleme kodunu kuramad�.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_LOAD_COMPUTER,
        "Kur, bilgisayar t�r� sistemini y�klemede ba�ar�s�z oldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_LOAD_DISPLAY,
        "Kur, g�r�nt� ayarlar� listesini y�klemede ba�ar�s�z oldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_LOAD_KEYBOARD,
        "Kur, klavye t�r� listesini y�klemede ba�ar�s�z oldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_LOAD_KBLAYOUT,
        "Kur, klavye d�zeni listesini y�klemede ba�ar�s�z oldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_WARN_PARTITION,
        "Kur, d�zg�n y�netilemeyen bir uyumsuz b�l�m tablosu i�eren en az\n"
        "bir sabit disk buldu!\n"
        "\n"
        "B�l�mleri olu�turmak veya silmek b�l�m tablosunu yok edebilir.\n"
        "\n"
        "  \x07  Kur'dan ��kmak i�in F3'e bas�n�z.\n"
        "  \x07  S�rd�rmek i�in ENTER'e bas�n�z.",
        "F3 = ��k   ENTER = S�rd�r"
    },
    {
        // ERROR_NEW_PARTITION,
        "�neden var olan bir b�l�m�n i�ine yeni\n"
        "bir b�l�m olu�turamazs�n�z!\n"
        "\n"
        "  * S�rd�rmek i�in bir tu�a bas�n�z.",
        NULL
    },
    {
        // ERROR_DELETE_SPACE,
        "B�l�mlenmemi� disk bo�lu�unu silemezsiniz!\n"
        "\n"
        "  * S�rd�rmek i�in bir tu�a bas�n�z.",
        NULL
    },
    {
        // ERROR_INSTALL_BOOTCODE,
        "Kur, sistem b�l�m� �zerinde %S �ny�kleme kodunu kurmada ba�ar�s�z oldu.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_NO_FLOPPY,
        "A: s�r�c�s�nde disk yok.",
        "ENTER = S�rd�r"
    },
    {
        // ERROR_UPDATE_KBSETTINGS,
        "Kur, klavye d�zeni ayarlar�n� g�ncelle�tirmede ba�ar�s�z oldu.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_UPDATE_DISPLAY_SETTINGS,
        "Kur, g�r�nt� kay�t ayarlar�n� g�ncelle�tirmede ba�ar�s�z oldu.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_IMPORT_HIVE,
        "Kur, bir y���n dosyas� almada ba�ar�s�z oldu.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_FIND_REGISTRY
        "Kur, kay�t veri dosyalar�n� bulmada ba�ar�s�z oldu.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_CREATE_HIVE,
        "Kur, kay�t y���nlar�n� olu�turmada ba�ar�s�z oldu.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_INITIALIZE_REGISTRY,
        "Kur, kay�t defterini ba�latmada ba�ar�s�z oldu.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_INVALID_CABINET_INF,
        "Cabinet'in ge�erli yap�land�rma dosyas� yok.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_CABINET_MISSING,
        "Cabinet bulunamad�.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_CABINET_SCRIPT,
        "Cabinet kurulum beti�i yok.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_COPY_QUEUE,
        "Kur, dosya kopyalamada kuyru�unu a�mada ba�ar�s�z oldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_CREATE_DIR,
        "Kur, kurulum dizinlerini olu�turmada ba�ar�s�z oldu.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_TXTSETUP_SECTION,
        "Kur, TXTSETUP.SIF'de '%S' b�l�m�n�\n"
        "bulmada ba�ar�s�z oldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_CABINET_SECTION,
        "Kur, dolapta '%S' b�l�m�n�\n"
        "bulmada ba�ar�s�z oldu.\n",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_CREATE_INSTALL_DIR
        "Kur, kurulum dizinini olu�turamad�.",
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_WRITE_PTABLE,
        "Kur, b�l�m tablolar� yazmada ba�ar�s�z oldu.\n"
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_ADDING_CODEPAGE,
        "Kur, kay�t defterine kod sayfas� eklemede ba�ar�s�z oldu.\n"
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_UPDATE_LOCALESETTINGS,
        "Kur, sistem yerel ayar�n� yapamad�.\n"
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_ADDING_KBLAYOUTS,
        "Kur, kay�t defterine klavye d�zenleri eklemede ba�ar�s�z oldu.\n"
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_UPDATE_GEOID,
        "Kur, co�rafi kimli�i ayarlayamad�.\n"
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        // ERROR_DIRECTORY_NAME,
        "Ge�ersiz dizin ad�.\n"
        "\n"
        "  * S�rd�rmek i�in bir tu�a bas�n�z."
    },
    {
        // ERROR_INSUFFICIENT_PARTITION_SIZE,
        "Se�ili b�l�m ReactOS'u kurmak i�in yetecek �l��de b�y�k de�il.\n"
        "Kurulum b�l�m� en az %lu MB b�y�kl���nde olmal�.\n"
        "\n"
        "  * S�rd�rmek i�in bir tu�a bas�n�z.",
        NULL
    },
    {
        // ERROR_PARTITION_TABLE_FULL,
        "B�l�m tablosu dolu oldu�undan dolay� bu diskin b�l�m tablosunda yeni bir ana b�l�m\n"
        "ya da yeni bir geni�letilmi� b�l�m olu�turamazs�n�z.\n"
        "\n"
        "  * S�rd�rmek i�in bir tu�a bas�n�z."
    },
    {
        // ERROR_ONLY_ONE_EXTENDED,
        "Bir diskte birden �ok geni�letilmi� b�l�m olu�turamazs�n�z.\n"
        "\n"
        "  * S�rd�rmek i�in bir tu�a bas�n�z."
    },
    {
        // ERROR_FORMATTING_PARTITION,
        "Kur, b�l�m� bi�imlendiremez:\n"
        " %S\n"
        "\n"
        "ENTER = Bilgisayar� Yeniden Ba�lat"
    },
    {
        NULL,
        NULL
    }
};

MUI_PAGE trTRPages[] =
{
    {
        LANGUAGE_PAGE,
        trTRLanguagePageEntries
    },
    {
        WELCOME_PAGE,
        trTRWelcomePageEntries
    },
    {
        INSTALL_INTRO_PAGE,
        trTRIntroPageEntries
    },
    {
        LICENSE_PAGE,
        trTRLicensePageEntries
    },
    {
        DEVICE_SETTINGS_PAGE,
        trTRDevicePageEntries
    },
    {
        REPAIR_INTRO_PAGE,
        trTRRepairPageEntries
    },
    {
        UPGRADE_REPAIR_PAGE,
        trTRUpgradePageEntries
    },
    {
        COMPUTER_SETTINGS_PAGE,
        trTRComputerPageEntries
    },
    {
        DISPLAY_SETTINGS_PAGE,
        trTRDisplayPageEntries
    },
    {
        FLUSH_PAGE,
        trTRFlushPageEntries
    },
    {
        SELECT_PARTITION_PAGE,
        trTRSelectPartitionEntries
    },
    {
        CONFIRM_DELETE_SYSTEM_PARTITION_PAGE,
        trTRConfirmDeleteSystemPartitionEntries
    },
    {
        SELECT_FILE_SYSTEM_PAGE,
        trTRSelectFSEntries
    },
    {
        FORMAT_PARTITION_PAGE,
        trTRFormatPartitionEntries
    },
    {
        DELETE_PARTITION_PAGE,
        trTRDeletePartitionEntries
    },
    {
        INSTALL_DIRECTORY_PAGE,
        trTRInstallDirectoryEntries
    },
    {
        PREPARE_COPY_PAGE,
        trTRPrepareCopyEntries
    },
    {
        FILE_COPY_PAGE,
        trTRFileCopyEntries
    },
    {
        KEYBOARD_SETTINGS_PAGE,
        trTRKeyboardSettingsEntries
    },
    {
        BOOT_LOADER_PAGE,
        trTRBootLoaderEntries
    },
    {
        LAYOUT_SETTINGS_PAGE,
        trTRLayoutSettingsEntries
    },
    {
        QUIT_PAGE,
        trTRQuitPageEntries
    },
    {
        SUCCESS_PAGE,
        trTRSuccessPageEntries
    },
    {
        BOOT_LOADER_FLOPPY_PAGE,
        trTRBootPageEntries
    },
    {
        REGISTRY_PAGE,
        trTRRegistryEntries
    },
    {
        -1,
        NULL
    }
};

MUI_STRING trTRStrings[] =
{
    {STRING_PLEASEWAIT,
    "   L�tfen bekleyiniz..."},
    {STRING_INSTALLCREATEPARTITION,
    "   ENTER = Kur  P = Ana B�l�m Olu�tur  E = Geni�letilmi� B�l�m Olu�tur  F3 = ��k"},
    {STRING_INSTALLCREATELOGICAL,
    "   ENTER = Kur   L = Mant�ksal B�l�m Olu�tur   F3 = ��k"},
    {STRING_INSTALLDELETEPARTITION,
    "   ENTER = Kur   D = B�l�m� Sil   F3 = ��k"},
    {STRING_DELETEPARTITION,
    "   D = B�l�m� Sil   F3 = ��k"},
    {STRING_PARTITIONSIZE,
    "Yeni b�l�m�n b�y�kl���n� giriniz:"},
    {STRING_CHOOSENEWPARTITION,
    "�zerinde bir ana b�l�m olu�turmay� se�tiniz:"},
    {STRING_CHOOSE_NEW_EXTENDED_PARTITION,
    "�zerinde bir geni�letilmi� b�l�m olu�turmay� se�tiniz:"},
    {STRING_CHOOSE_NEW_LOGICAL_PARTITION,
    "�zerinde bir mant�ksal b�l�m olu�turmay� se�tiniz:"},
    {STRING_HDDSIZE,
    "L�tfen yeni b�l�m�n b�y�kl���n� megabayt olarak giriniz."},
    {STRING_CREATEPARTITION,
    "   ENTER = B�l�m Olu�tur   ESC = �ptal   F3 = ��k"},
    {STRING_PARTFORMAT,
    "Bu b�l�m ileride bi�imlendirilecektir."},
    {STRING_NONFORMATTEDPART,
    "ReactOS'u yeni ya da bi�imlendirilmemi� bir b�l�me kurmay� se�tiniz."},
    {STRING_NONFORMATTEDSYSTEMPART,
    "Sistem b�l�m� daha bi�imlendirilmemi�."},
    {STRING_NONFORMATTEDOTHERPART,
    "Yeni b�l�m daha bi�imlendirilmemi�."},
    {STRING_INSTALLONPART,
    "Kur, ReactOS'u b�l�m �zerine kurar."},
    {STRING_CHECKINGPART,
    "Kur, �imdi se�ili b�l�m� g�zden ge�iriyor."},
    {STRING_CONTINUE,
    "ENTER = S�rd�r"},
    {STRING_QUITCONTINUE,
    "F3 = ��k   ENTER = S�rd�r"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = Bilgisayar� Yeniden Ba�lat"},
    {STRING_DELETING,
     "   Deleting file: %S"},
    {STRING_MOVING,
     "   Moving file: %S to: %S"},
    {STRING_RENAMING,
     "   Renaming file: %S to: %S"},
    {STRING_COPYING,
    "   Dosya kopyalan�yor: %S"},
    {STRING_SETUPCOPYINGFILES,
    "Kur, dosyalar� kopyal�yor..."},
    {STRING_REGHIVEUPDATE,
    "   Kay�t y���nlar� g�ncelle�tiriliyor..."},
    {STRING_IMPORTFILE,
    "   Al�n�yor: %S..."},
    {STRING_DISPLAYSETTINGSUPDATE,
    "   G�r�nt� ayarlar� de�erleri g�ncelle�tiriliyor..."},
    {STRING_LOCALESETTINGSUPDATE,
    "   Yerel ayarlar g�ncelle�tiriliyor..."},
    {STRING_KEYBOARDSETTINGSUPDATE,
    "   Klavye d�zeni ayarlar� g�ncelle�tiriliyor..."},
    {STRING_CODEPAGEINFOUPDATE,
    "   Kay�t defterine kod sayfas� bilgisi ekleniyor..."},
    {STRING_DONE,
    "   Bitti..."},
    {STRING_REBOOTCOMPUTER2,
    "   ENTER = Bilgisayar� Yeniden Ba�lat"},
    {STRING_REBOOTPROGRESSBAR,
    " Bilgisayar�n�z %li saniye sonra yeniden ba�lat�lacak... "},
    {STRING_CONSOLEFAIL1,
    "Konsol a��lam�yor.\r\n\r\n"},
    {STRING_CONSOLEFAIL2,
    "Bunun en bilinen nedeni, bir USB klavye kullan�lmas�d�r.\r\n"},
    {STRING_CONSOLEFAIL3,
    "USB klavye daha t�m�yle desteklenmemektedir.\r\n"},
    {STRING_FORMATTINGDISK,
    "Kur, diskinizi bi�imlendiriyor."},
    {STRING_CHECKINGDISK,
    "Kur, diskinizi g�zden ge�iriyor."},
    {STRING_FORMATDISK1,
    " B�l�m� %S dosya sistemiyle h�zl� bi�imlendir. "},
    {STRING_FORMATDISK2,
    " B�l�m� %S dosya sistemiyle bi�imlendir. "},
    {STRING_KEEPFORMAT,
    " �imdiki dosya sistemini koru. (De�i�iklik yok.) "},
    {STRING_HDINFOPARTCREATE_1,
    "%I64u %s  Sabit Disk %lu  (Giri�=%hu, Veriyolu=%hu, Kimlik=%hu), %wZ �zerinde [%s]."},
    {STRING_HDINFOPARTCREATE_2,
    "%I64u %s  abit Disk %lu  (Giri�=%hu, Veriyolu=%hu, Kimlik=%hu) [%s]."},
    {STRING_HDDINFOUNK2,
    "   %c%c  T�r  0x%02X    %I64u %s"},
    {STRING_HDINFOPARTDELETE_1,
    "�zerinde: %I64u %s  Sabit Disk %lu  (Giri�=%hu, Veriyolu=%hu, Kimlik=%hu), %wZ �zerinde [%s]."},
    {STRING_HDINFOPARTDELETE_2,
    "�zerinde: %I64u %s  Sabit Disk %lu  (Giri�=%hu, Veriyolu=%hu, Kimlik=%hu) [%s]."},
    {STRING_HDINFOPARTZEROED_1,
    "Sabit Disk %lu (%I64u %s), Giri�=%hu, Veriyolu=%hu, Kimlik=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK4,
    "%c%c  T�r  0x%02X    %I64u %s"},
    {STRING_HDINFOPARTEXISTS_1,
    "�zerinde: Sabit Disk %lu (%I64u %s), Giri�=%hu, Veriyolu=%hu, Kimlik=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK5,
    "%c%c %c %sT�r  %-3u%s                      %6lu %s"},
    {STRING_HDINFOPARTSELECT_1,
    "%6lu %s  Sabit Disk %lu  (Giri�=%hu, Veriyolu=%hu, Kimlik=%hu), %wZ �zerinde [%s]"},
    {STRING_HDINFOPARTSELECT_2,
    "%6lu %s  Sabit Disk %lu  (Giri�=%hu, Veriyolu=%hu, Kimlik=%hu) [%s]"},
    {STRING_NEWPARTITION,
    "Kur, �zerinde bir yeni b�l�m olu�turdu:"},
    {STRING_UNPSPACE,
    "    %sKullan�lmayan Bo�luk%s           %6lu %s"},
    {STRING_MAXSIZE,
    "MB (En �ok %lu MB)"},
    {STRING_EXTENDED_PARTITION,
    "Geni�letilmi� B�l�m"},
    {STRING_UNFORMATTED,
    "Yeni (Bi�imlendirilmemi�)"},
    {STRING_FORMATUNUSED,
    "Kullan�lmayan"},
    {STRING_FORMATUNKNOWN,
    "Bilinmeyen"},
    {STRING_KB,
    "KB"},
    {STRING_MB,
    "MB"},
    {STRING_GB,
    "GB"},
    {STRING_ADDKBLAYOUTS,
    "Klavye d�zenleri ekleniyor..."},
    {0, 0}
};
