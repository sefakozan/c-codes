#include <stdio.h>
#include <stdlib.h>
void not_hesaplama(void);
void havuz_oroblemi(void);
void sayi_oku(void);
void dogum_yili(void);

int main()
{

    printf("Not Hesaplama\n");
    not_hesaplama();

    printf("Havuz Problemi\n");
    havuz_oroblemi();

    printf("Sayi Oku\n");
    sayi_oku();

    printf("Dogum Yili\n");
    dogum_yili();

    return 0;
}

// Bir havuzu a musluğu 3, b musluğu 8, c musluğu 12 saatte dolduruyor.
// Buna göre 3 musluk aynı anda açılırsa havuz kaç saatte dolar?
void havuz_oroblemi()
{

    float totalTime = 1.0f / (1.0f / 3 + 1.0f / 8 + 1.0f / 12) * 60;

    printf("Ayni anda %5.1f dakikada dolar\n\n", totalTime);
}

// Kullanıcıdan a,b,c sayılarını okuyarak aşağıdaki işlemi yapan kodu yaziniz
// a^2 + b^2 + 3c
void sayi_oku()
{

    int a, b, c, res;

    printf("a,b,c sayilarini bosluklu sirayla giriniz: ");
    scanf_s("%d%d%d", &a, &b, &c);

    res = (a * a) + (b * b) + (3 * c);

    printf("a^2 + b^2 + 3c : %d\n\n", res);
}

// Kullanıcıdan bugünün yılını ve kaç yaşında olduğunu alarak doğum tarihini
// yıl olarak bulan kodu yaziniz
void dogum_yili()
{

    int nowYear, old;

    printf("Bugunun yili: ");
    scanf_s("%d", &nowYear);

    printf("Yas: ");
    scanf_s("%d", &old);

    printf("Dogdugun Yil: %d", nowYear - old);
}

void not_hesaplama()
{

    int not;
    printf("Notu giriniz: ");
    scanf_s("%d", &not);

    if (not >= 90)
        printf("AA\n\n");
    else if (not >= 80)
        printf("BA\n\n");
    else if (not >= 70)
        printf("BB\n\n");
    else
        printf("F\n\n");
}