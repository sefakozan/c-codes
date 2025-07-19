#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void binary_plus();
int last_prime_number(int);
void approx_log_value(void);
void fib_2d(void);
int f(int, int);
int g(int);

// fonk örnek 10.dksı anlamadım özyineli

int main()
{

    // binary_plus
    binary_plus();

    // last_prime_number
    int x;
    printf("Bir sayi giriniz: ");
    scanf("%d", &x);
    printf("%d kucuk en buyuk asal sayi: %d", x, last_prime_number(x));

    // approx_log_value
    approx_log_value();

    // fib_2d
    fib_2d();

    // recursive_asal
    printf("bir sayi giriniz: ");
    int n;
    scanf("%d", &n);
    printf("%d", g(n));

    return 0;
}

/*
   EXAM: 0 ve 1'leri kullanarak ortada + şeklini oluşturunuz


     n=5       n=6
    01234     012345 -> k
 0. 00100     001100   satır için
 1. 00100     001100   6/2 = 3 --> 3. ve 2. satıra 1 yazılmalı
 2. 11111     111111   sütun için
 3. 00100     111111   6/2 = 3 --> 3. ve 2. sütuna 1 yazılmalı
 4. 00100     001100
 5.  	      001100
 |
 i

*/
void binary_plus()
{

    int n;
    printf("BinarPlus n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            // k satır, i sütun
            //  (n/2) == k || (n/2) == i -> n Tek
            //  (n%2 == 0 && ((n/2)-1 == k||(n/2)-1 == i)) -> n Çift
            if ((n % 2 == 0 && ((n / 2) - 1 == k || (n / 2) - 1 == i)) || (n / 2) == k || (n / 2) == i)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}

// EXAM: Parametre olarak bir sayı alan, aldığı bu sayıdan küçük, en büyük asal
// sayıyı bulan kodu yazınız
int last_prime_number(int x)
{

    int res = 0;

    // x-1'ten başlayıp 2'ye kadar sayıyı azaltır
    for (int i = x - 1; i >= 1; i--)
    {
        // yeni sayının asallığını kontrol etmek için yeniden tanımlanır
        int asal = 1;

        for (int j = 2; j < i; j++)
        {
            // Azaltılan sayının asallığı kontrol edilir
            if (i % j == 0)
            {
                asal = 0;
                break; // asal olmadığını bulduktan sonra diğer sayılar için denenmesin diye yazıldı
            }
        }

        if (asal == 1)
        {
            res = i;
            break;
        }
    }

    return res;
}

// Logaritma 2 tabınında bir sayının, yaklaşık değerinin tam sayı kısmını yazan kod oluşturun
void approx_log_value()
{

    // log2^30

    int x = 0;
    printf("Log2^x : ");
    scanf("%d", &x);

    int c = 0;
    for (int i = 1; i < x; i *= 2)
        c++;

    printf("Log2^%d : %d", x, c - 1);
}

/*

       1	1	2	3	5 -- 5'i alt tarafta bi sola kaydır
       1	2	3	5	8
       2	3	5	8	13
       3	5	8	13	21
       5	8	13	21	34


*/

// debug et
void fib_2d()
{

    int x;
    printf("2d Fib Uzunlugu: ");
    scanf("%d", &x);

    int a = 1, b = 0, c = 1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d\t", c = a + b);
            a = b;
            b = c;

            if (j == x - 1)
                a = 1, b = 0, c = 1;
        }

        // kaydırma
        for (int k = 0; k <= i; k++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        printf("\n");
    }
}

// girilen sayidan kucuk en buyuk asal sayiyi bulan kodu recursive ile yaziniz
int f(int n, int test)
{
    if (n - 1 == test)
        return 1;
    if (n % test == 0)
        return 0;

    return f(n, test + 1);
}

int g(int n)
{
    if (f(n, 2))
        return n;

    return g(n - 1);
}