#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void dizi_tanim(void);
void ters_dizi(void);
void fib_array(void);

int main()
{

    ters_dizi();
    fib_array();

    return 0;
}
// 0 1 2 3 4
void dizi_tanim()
{

    //--------------Tek Boyutlu Diziler//--------------

    // int 4 btye(32 bit) yer kaplar, 10 elemanlık dizi 40 byte yer kaplar
    int n[10];

    for (int i = 0; i < 10; i++)
    {
        n[i] = i;
        printf("%d ", n[i]);
    }

    int a[] = {2, 3, 9, 8, 15, -6}; // a[6] yazılabilir
    // a[3] = 8, a[5] = -6

    //--------------Çok Boyutlu Diziler--------------
    // Dikdörtgen yapı

    // 2 Boyutlu
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // 2'den Çok Boyutlu ?????
    int c[2][3][3][3]; // ([3][3][3]) küp, [2] -> 2 tane küp
}

// Verilen diziyi tersine çevirmek
/*

    dizi  :  8, 7, 2, 6, 3
    indis :  0  1  2  3, 4
    ters  :  3  6  2  7  8

*/
void ters_dizi()
{

    int x;
    printf("5 elemanlik dizi giriniz\n");
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d. eleman: ", i);
        scanf("%d", &x);
        a[i] = x;
    }
    int swap;
    for (int i = 0; i < 2; i++)
    {
        swap = a[i];
        a[i] = a[4 - i];
        a[4 - i] = swap;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

void fib_array()
{

    /*

        a b c
        0 1 1 tanım
        1 1 2
        1 2 3
        2 3 5
        3 5 8
    */

    int fib[20];
    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 2;

    for (int i = 0; i < 18; i++)
    {
        fib[i + 2] = fib[i + 1] + fib[i];
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d.\t: %d\n", i, fib[i]);
    }
}