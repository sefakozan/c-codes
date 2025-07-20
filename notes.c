#include <stdio.h>

// https://youtu.be/mLP92FfsZ34?si=X2ORPscHE31PrSyh
// https://youtu.be/gWUqcEOOx1E?si=hS3kohcgpCoIFO6z
int main()
{
    // Operatörler değer üretir
    // Atama operatörü atanan değeri üretir (sol operand = sağ operand)
    // Virgül operatörü sağdaki değeri üretir (sol operand,sağ operand)

    //----------------------------------------------------------------

    int a, b, c;

    a = (b = 5);

    printf("%d\n", c = 7);

    if (a = 1) // Atama operatörü atanan değeri üretir
    {
        printf("aa\n");
    }

    if (1 == a) // Doğru Kullanım
        printf("1 == a\n");

    if (a == 1) // Yanlış Kullanım
        printf("a == 1\n");

    //----------------------------------------------------------------

    int x = 1, y = 2, z = 0;
    z = (x++, y++, x + y);
    printf("%d\n", z);

    //----------------------------------------------------------------

    double d = 4.5;
    if (d > 4, 0) // , operatörü sağdaki değer 0'ı üretir. (d>4, 0) == 0
        printf("d>4,0");

    int m = 10;
    int n = 34;

    int p;
    p = m, n; // sol operand p=a, sağ operand b
    p = (m, n);
    // (m,n) ifadesinin değeri 34 (sağ)
    printf("%d", (m, n));
}