#include <stdio.h>
void iki_int_yer_degistirme();
void swap(int *, int *); // Fonksiyon prototipi: İşaretçi ile değer değiştirme

int main()
{
}

void iki_int_yer_degistirme()
{

    /*
        1.yol: temp değişken ile swap
        2.yol: 2 değişken ile swap
        3.yol: xor ile (sadece tamsayı) ile swap
        4.yol : pointer ile swap

        XOR (execlusive or)
           0 0, 0
           0 1, 1
           1 0, 1
           0 0, 0
    */

    int a = 3; // 0011
    int b = 7; // 0111

    // 1.yol
    int temp;
    temp = a;
    a = b;
    b = temp;

    // 2.yol
    a = a + b;
    b = a - b;
    a = a - b;

    // 3.yol
    a = a ^ b; // 0011 ^ 0111 --> a = 0100 = 4
    b = a ^ b; // 0100 ^ 0111 --> b = 0011 = 3
    a = a ^ b; // 0100 ^ 0011 --> a = 0111 = 7

    // 4. yol
    int *m, *n;    // Tanım *: Pointer tanımlandı; atama-yazma yıldızı m (adresi), *m (adresin içindeki değer) demektir
    int temp = *m; // m'nın işaret ettiği değeri al
    *m = *n;       // m'nın işaret ettiği yere b'nin değerini yaz
    *n = temp;     // n'nin işaret ettiği yere temp değerini yaz
}
