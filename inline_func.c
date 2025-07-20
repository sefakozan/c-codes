#include <stdio.h>

/*
        Inline fonksiyon tanımı
    Amaç: Fonksiyon çağrısının ek yükünü (stack frame oluşturma, geri dönüş adresi saklama vb.) ortadan kaldırarak performans artışı sağlamak.
    Kullanım: Genellikle birkaç satırlık, basit işlemler yapan fonksiyonlar için uygundur (örneğin, matematiksel hesaplamalar).
    Not: Büyük fonksiyonlar için inline kullanımı önerilmez, çünkü kod boyutunu artırabilir ve önbellek performansını düşürebilir.
*/

inline int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x = 10, y = 20;

    // Inline fonksiyon çağrısı
    int result = max(x, y);
    int result = (x > y) ? x : y;

    printf("Büyük olan sayı: %d\n", result); // Çıktı: Büyük olan sayı: 20

    return 0;
}