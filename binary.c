#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_binary(int);
void print_char_binary(char);

int main()
{

    printf("%c", 'a' - 32); // to.upper

    /*   Negatif Sayı için --> Tersini alıp + 1
     *
     *         00101010 --> 42
     *
     *         11010101 --> Tersi
     *       + 00000001
     *       -----------
     *         11010110 --> Tersi + 1 --> -42
     */

    int sayi1 = 42;
    int sayi2 = -42;
    print_binary(sayi1);
    print_binary(sayi2);

    char c = '*';
    print_char_binary(c);

    return 0;
}

void print_binary(int num)
{

    printf("%X\n", num);

    // 32 bitlik bir int için (negatif sayılar dahil)
    for (int i = 31; i >= 0; i--)
    {

        /*
         * Int ram'de binary olarak tutulur.
         * Bu binary sayıyı konsola yazdırmak kaydırma işlemi ile olur.
         * Binary sayının en başındaki bit'i sonuna taşır, ve 1 ile AND'ler
         * AND sonucu ilk 31 bit sıfır olur, taşınan son bit'in değeri neyse AND'lenmiş hali printf ile yazdırılır
         * Soldan sağa tek tek binary sayılarını yazdırır
         */

        printf("%d", (num >> i) & 1);
    }
    printf("\n\n");
}

void print_char_binary(char c)
{
    // char aslında bir sayı
    printf("ASCII: %d\n", c);
    printf("ASCII Octal: %o\n", c);
    printf("ASCII Hexadecimal: %X\n", c);

    // char 1byte yer tutar
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (c >> i) & 1);
    }
}