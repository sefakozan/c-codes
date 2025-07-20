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
    printf("=== printf Kullanimi ===\n");
    printf("Ekrana yazdirma fonksiyonu.\n");
    printf("Tam sayi: %d\n", 42);           // Tam sayı
    printf("Ondalik: %.2f\n", 3.14159);     // Ondalık, 2 basamak hassasiyet
    printf("Karakter: %c\n", 'A');          // Karakter
    printf("Metin: %s\n", "C Programlama"); // Metin
    printf("Birden fazla: %d, %.1f, %c, %s\n", 10, 2.5, 'X', "Merhaba");

    // 2. scanf Kullanımı
    printf("\n=== scanf Kullanimi ===\n");
    printf("Bir tam sayi girin: ");
    scanf("%d", &tamSayi); // Tam sayı girişi
    printf("Girdiginiz: %d\n", tamSayi);

    printf("Bir ondalik sayi girin: ");
    scanf("%f", &ondalikSayi); // Ondalık sayı girişi
    printf("Girdiğiniz: %.2f\n", ondalikSayi);

    printf("Bir karakter girin: ");
    scanf(" %c", &karakter); // Karakter girişi (boşluk, kalan '\n' atlar)
    printf("Girdiginiz: %c\n", karakter);

    printf("Bir metin girin (maks. 49 karakter): ");
    scanf("%s", metin); // Metin girişi (boşlukla sınırlı)
    printf("Girdiginiz: %s\n", metin);

    // 3. sprintf Kullanımı
    printf("\n=== sprintf Kullanımı ===\n");
    sprintf(buffer, "Tam sayi: %d, Ondalık: %.2f, Metin: %s", 100, 6.28318, "sprintf örnegi");
    printf("sprintf ile olusturulan metin: %s\n", buffer);

    // 4. sscanf Kullanımı
    printf("\n=== sscanf Kullanimi ===\n");
    const char *ornekMetin = "123 45.67 X Merhaba";
    // değişkenlerin değerleri değiştirildi
    sscanf(ornekMetin, "%d %f %c %s", &tamSayi, &ondalikSayi, &karakter, metin);
    printf("sscanf ile degistirilen veriler:\n");
    printf("Tam sayi: %d\n", tamSayi);
    printf("Ondalik: %.2f\n", ondalikSayi);
    printf("Karakter: %c\n", karakter);
    printf("Metin: %s\n", metin);

    return 0;
}