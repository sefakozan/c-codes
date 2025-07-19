#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void pointer_tanim(void);
void test_malloc(void);
/*
        POINTERS(Gösterici)
    Ramde duran Pointer içinde değer durmaz, değişken adresi durur
*/

int main()
{
    void *void_ptr;
    int *int_ptr;
    char *char_ptr;

    // 32 bit pc'de bellek adresi 4 byte
    // 64 bit pc'de bellek adresi 8 byte
    printf("byte: %llu %llu %llu\n", sizeof(void_ptr), sizeof(int_ptr), sizeof(char_ptr));

    test_malloc();

    return 0;
}

void pointer_tanim()
{

    /*
            POINTERS(Gösterici)
       Ramde duran Pointer içinde değer(tam sayı) durmaz, değişken adresi durur

    */

    // %p : 16lık sistemde adresi yazar
    // %d : 10luk sistemde adresi yazar

    int *p, **p1; // p değişkeni tanımlandı (int* p'de doğru)
    int a = 10;   // a değişkenine 10 verildi
    p = &a;       // a değişkenin adresi p pointer değişkenine değer olarak verildi
    **p1 = &p;
    printf("a degiskeninin degeri: %d\n", a);
    printf("a degiskeninin adresi: %p\n\n", &a);

    printf("p pointer-degiskenin degeri: %p\n", p);
    printf("p pointer-degiskenin icindeki adresin gosterdigi yerdeki deger: %d\n", *p);
    printf("p pointer-degiskenin adresi %p\n", &p);
}

void test_malloc()
{
    int *p;
    int a = 10;
    p = &a;
    printf("%d\n", *p);
    *p = 20;
    printf("%d\n", a);

    // for (int i = 0; i < INT_MAX; i++)
    //{
    //	int *q;
    //   q = (int*)malloc(sizeof(int) * i);
    // }

    int *q = (int *)malloc(sizeof(int) * a); // heap'tan yer ayırır

    if (q == NULL)
    {
        printf("malloc başarısız!\n");
        return;
    }

    q[3] = 70;            // Dizi olarak erişilebilir
    printf("%d\n", q[3]); // *(q+3)
    free(q);
}
