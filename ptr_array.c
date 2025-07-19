#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // Tek tırnak,sayı dönderir
    // Çift tırnak, pointer dönderir ?????
    // char char_arr2[5] = { 97,98,99,100,101 };
    // printf("%c\n", char_arr2[i]);

    // * tek boyutlu, ** iki boyutlu, *** üç boyutlu
    int int_arr[5] = {1, 2, 3, 4, 5};
    char char_arr[5] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < 5; i++)
    {
        printf("int_arr: %d\n", int_arr[i]);
        printf("char_arr: %c\n", char_arr[i]);
    }

    printf("int tipinin boyutu: %zu\n", sizeof(int));
    printf("char tipinin boyutu: %zu\n", sizeof(char));

    for (int i = 0; i < 5; i++)
    {
        /*

        Bellek adresleri byte bazında artar. Bellek adreslemesi byte düzeyindedir.
        Örneğin, bir dizinin ilk elemanının adresi 0x1000 ise, ikinci elemanın adresi (örneğin int için) 0x1004 olur,
        çünkü int 4 byte yer kaplar. Ancak her byte’ın adresi vardır: 0x1000, 0x1001, 0x1002, 0x1003 gibi.

        */

        printf("int_arr: %d\n", *(int_arr + i));   // *(4byte + 1) == int_arr[2] demek
        printf("char_arr: %c\n", *(char_arr + i)); // *(1byte + 3) == char_arr[4] demek
    }

    return 0;
}