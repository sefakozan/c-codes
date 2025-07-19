#include <stdio.h>

int main()
{
    // Değişken tanımlamaları
    int sayi = 15;
    char gun = 'P'; // Gün örneği için (P: Pazartesi, S: Salı, vb.)

    // Örnek 1: Basit if deyimi
    // Sayı pozitif mi kontrol edelim
    if (sayi > 0)
    {
        printf("%d pozitif bir sayidir.\n", sayi);
    }

    // Örnek 2: if-else deyimi
    // Sayı çift mi tek mi kontrol edelim
    if (sayi % 2 == 0)
    {
        printf("%d cift bir sayidir.\n", sayi);
    }
    else
    {
        printf("%d tek bir sayidir.\n", sayi);
    }

    // Örnek 3: else if ile çoklu koşul kontrolü
    // Sayının büyüklüğünü sınıflandıralım
    if (sayi < 10)
    {
        printf("%d kucuk bir sayidir.\n", sayi);
    }
    else if (sayi >= 10 && sayi <= 20)
    {
        printf("%d orta buyuklukte bir sayidir.\n", sayi);
    }
    else
    {
        printf("%d buyuk bir sayidir.\n", sayi);
    }

    // Örnek 4: switch-case deyimi
    // Haftanın gününe göre mesaj yazdıralım
    switch (gun)
    {
    case 'P':
        printf("Bugun Pazartesi, haftaya basla!\n");
        break; // break, switch bloğundan çıkmayı sağlar
    case 'S':
        printf("Bugun Sali, devam et!\n");
        break;
    case 'C':
        printf("Bugun Carsamba, hafta ortasi!\n");
        break;
    default:
        printf("Tanimlanmamis bir gun!\n");
        break; // default durumunda da break kullanılabilir
    }

    return 0;
}