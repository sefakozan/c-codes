//  Her fonksiyon çağrıldığında, o fonksiyon için bir yığın çerçevesi (stack frame) oluşturulur
//  ve bu çerçeve, fonksiyonun yerel değişkenlerini, parametrelerini ve dönüş adresini içerir.
//  işletim sistemi veya derleyici tarafından belirli bir boyutta tahsis edilir

#include <stdio.h>
void recursive_function(int);

int main()
{
    recursive_function(1);
    return 0;
}

// her seferinde depolar ve taşma gerçekleşir
void recursive_function(int n)
{
    int array[10000]; // Her çağrıda 4 KB (4000 byte) yer kaplar
    printf("Cagri %d\n", n);
    recursive_function(n + 1); // Sonsuz özyineleme
}