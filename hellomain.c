#include <stdio.h>
#include <stdlib.h>

// int main(void)
// int main()
// int main(int argc, char **argv)
// int main(int argc, char *argv[], char *envp[])

int main(int argc, char *argv[])
{
    printf("Arguman sayisi: %d\n", argc);
    printf("Program adi: %s\n", argv[0]);

    // Diğer argümanları yazdır
    for (int i = 1; i < argc; i++)
    {
        printf("Argüman %d: %s\n", i, argv[i]);
    }

    // int x, y;
    // Bu C standirdinda göre "tanimsiz davranis" (undefined behavior) sayilir.
    // Program her calistirildiginda farklı sonuc verebilir.
    int x = 0, y = 0;
    x = 10 + y + x;
    x = x * x;
    y = x;

    int i = 0, n = 5;
    if (!(n > 5) && 1 >= ++i)
        ++n; // n <= 5

    printf("%d %d\n", i, n);

    printf("Hello World\n");

    return EXIT_SUCCESS;
}