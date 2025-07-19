#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void degistir1(int);
void degistir2(int *);

// Pass by Value, Pass by Referance (Fonksiyona Değer Geçirme)

// Tüm fonksiyonlarda, fonksiyona geçirilen değer istisnasız kopyalanır
int main()
{

    int x = 5;
    printf("main x'in adresi: %p\n", &x);

    // Scanf bir Pass by Referance'dır
    printf("değer: ");
    scanf("%d", &x);

    // Pass by Value (Değerle Geçirme) -> orijinal değişkeni değiştiremez
    // degistir1: fonksiyona geçirilen değer kopyalandığı için ram'de farklı bir adreste tutuldu
    degistir1(x);

    printf("degistir1: %d\n", x);

    // Pass by Referance (Referansla-Adresle Geçirme) -> orijinal değişkeni değiştirebilir
    // degistir2: fonksiyona gecirilen değer yine kopyalanır fakat int x'in ram adresi kopyalanır ve fonksiyona verilir
    degistir2(&x);

    printf("degistir2: %d", x);

    return 0;
}

// kopyalanan değer geldi
void degistir1(int x)
{
    printf("1. x'in adresi: %p\n", &x); // kopyalanan değerin adresi yazıldı
    x = 10;
}

// int : bu adreste tutulan değerin tipi
// *x  : adres olduğunu belirtir
void degistir2(int *x)
{                                       // (int* x) aynı
    printf("2. x'in adresi: %p\n", x);  // adresi yazdırdı
    printf("2. x'in değeri: %d\n", *x); // adresteki değeri yazdırdı

    // adresin değeri
    *x = 10;
}