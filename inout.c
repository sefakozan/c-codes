#include <stdio.h>
#include <string.h>

int main()
{
    // Değişken tanımlamaları
    int tamSayi;
    float ondalikSayi;
    char karakter;
    char metin[50];
    char buffer[100]; // sprintf ve sscanf için tampon

    // 1. printf Kullanımı
    printf("=== printf Kullanımı ===\n");
    printf("Ekrana yazdırma fonksiyonu.\n");
    printf("Tam sayı: %d\n", 42);           // Tam sayı
    printf("Ondalık: %.2f\n", 3.14159);     // Ondalık, 2 basamak hassasiyet
    printf("Karakter: %c\n", 'A');          // Karakter
    printf("Metin: %s\n", "C Programlama"); // Metin
    printf("Birden fazla: %d, %.1f, %c, %s\n", 10, 2.5, 'X', "Merhaba");

    // 2. scanf Kullanımı
    printf("\n=== scanf Kullanımı ===\n");
    printf("Bir tam sayı girin: ");
    scanf("%d", &tamSayi); // Tam sayı girişi
    printf("Girdiğiniz: %d\n", tamSayi);

    printf("Bir ondalık sayı girin: ");
    scanf("%f", &ondalikSayi); // Ondalık sayı girişi
    printf("Girdiğiniz: %.2f\n", ondalikSayi);

    printf("Bir karakter girin: ");
    scanf(" %c", &karakter); // Karakter girişi (boşluk, kalan '\n' atlar)
    printf("Girdiğiniz: %c\n", karakter);

    printf("Bir metin girin (maks. 49 karakter): ");
    scanf("%s", metin); // Metin girişi (boşlukla sınırlı)
    printf("Girdiğiniz: %s\n", metin);

    // 3. sprintf Kullanımı
    printf("\n=== sprintf Kullanımı ===\n");
    sprintf(buffer, "Tam sayı: %d, Ondalık: %.2f, Metin: %s", 100, 6.28318, "sprintf örneği");
    printf("sprintf ile oluşturulan metin: %s\n", buffer);

    // 4. sscanf Kullanımı
    printf("\n=== sscanf Kullanımı ===\n");
    const char *ornekMetin = "123 45.67 X Merhaba";
    // değişkenlerin değerleri değiştirildi
    sscanf(ornekMetin, "%d %f %c %s", &tamSayi, &ondalikSayi, &karakter, metin);
    printf("sscanf ile değiştirilen veriler:\n");
    printf("Tam sayı: %d\n", tamSayi);
    printf("Ondalık: %.2f\n", ondalikSayi);
    printf("Karakter: %c\n", karakter);
    printf("Metin: %s\n", metin);

    return 0;
}