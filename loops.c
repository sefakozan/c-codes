
#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include <stdlib.h>

/*
PROTOTYPE veya FUNCTION DECLARATION (FONKSIYON BILDIRIMI)
    Prototip, main altinda tanımlanacak fonksiyonların
    - Ismini
    - Donus tipini
    - Parametresini
    bildirir

Neden gerekli?
   - Derleyici, kodu yukaridan asagiya okur. Eğer prototip yazmazsan ve fonksiyonun gövdesi yukarıda değilse, derleyici hata verir yani fonk. sırası önemli.
   Ama fonksiyon bildirimi(protipi) varsa, derleyici bu fonksiyonun ileride tanimlanacagini bilir ve hata vermez. Ayrıca fonk. sırasının önemli kalmıyor.

   - Prototipler genellikle main fonksiyonunun üstüne yazılır. Fonk. kullanilacagi yere yazilabilir. Toplu durmasi icin en uste yazilir

   - Fonksiyonu alip buraya yazarsan da sorun cikmaz, ama main altta kalir

   - Eğer prototipler varsa, fonksiyonların blok sırası önemli değildir. Derleyici, prototiplerden fonksiyonların varlığını zaten bilir.
   Fonksiyonlar birbiri icinde yazilabilir
*/

void donguler(void);
void exam1(void);
void exam2(void);
void exam3(void);
void exam4(void);

// &(ampersand) degiskenin bellek konumuna git
// ic ice dongu (nested loop)
// 3 dongu turu birbirine donusturulebilir

// yaptigim ornekler
int main()
{

    // Exam1();
    // Exam2();
    // Exam3();
    Exam4();

    return 0;
}

void donguler()
{

    {
        // for: Initialize, Condition, Iteration
        for (int i = 21; i <= 50; i += 2)
        {
            printf("%d ", i);
            // cikti: 21 ile baslar
        }
    }

    {
        // while: Condition
        int i = 0;
        while (i <= 10)
        {
            printf("%d ", i);
            i++;
        }
    }

    {
        // do-while
        int i = 11;
        do
        {
            // do-while dongusu en az bir kez calisir
            printf("%d ", i);
            i++;
        } while (i <= 20);
    }
}

// 100'den 20'ye kadar, 3 ve 7'ye tam bolunen
//  sayilari buyukten kucuge dogru yazdiriniz
void exam1()
{

    for (int i = 100; i > 20; i--)
    {
        if (i % 3 == 0 && i % 7 == 0)
            printf("%d ", i);
    }
}

// 3 adet sayiyi okuyup en buyugunu ekrana yazdiriniz
void exam2()
{

    int girilen;
    int enBuyuk = 0;

    for (int i = 1; i <= 3; i++)
    {
        printf("%d. sayiyi giriniz: ", i);
        scanf("%d", &girilen);
        if (girilen > enBuyuk)
            enBuyuk = girilen;
    }

    printf("En buyuk sayi: %d\n", enBuyuk);
}

// -1 girilene kadar girilen sayilarin en buyuğunu bulan kod yaziniz
void exam3()
{

    int girilen = 0, enBuyuk = 0;

    /*
    while (TRUE) {
        printf("Bir sayi giriniz (Cikmak icin -1 yaziniz): ");
        scanf("%d", &girilen);

        if (girilen > enBuyuk)
            enBuyuk = girilen;
        else if (girilen == -1)
            break;
    }
    */

    while (girilen != -1)
    {
        printf("Bir sayi giriniz (Cikmak icin -1 yaziniz): ");
        scanf("%d", &girilen);

        if (girilen > enBuyuk)
            enBuyuk = girilen;
    }

    printf("En buyuk sayi: %d", enBuyuk);
}

// Asal sayi bulma
void exam4()
{

    int number = 0;

    // -1 verilene kadar tprogram donguye girecek
    while (number != -1)
    {

        int flag = 1;
        printf("Bir sayi giriniz (Exit -1): ");
        scanf("%d", &number);

        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
            printf("Sayi asal degil\n");
        else
            printf("Sayi asal\n");
    }
}