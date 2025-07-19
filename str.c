#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void string_tanim(void);
/*
 *	String, char dizisidir. Stringin, string olarak kabul edilebilmesi için dizinin sonunda mutlaka
 *    \0 (end of string, null terminator) olmalıdır
 *
 *     char arr[] = {'S', 'e', 'f', 'a'};
 *	 char str[] = "Sefa"; --> Ramde | S | e | f | a | \0 | şeklinde yer tutar
 *									  0   1   2   3    4  -> indexler
 */

int main()
{

    char isim[20];
    char *soyisim = (char *)malloc(sizeof(char) * 20);
    printf("isim: ");
    scanf("%s", isim); // dizi pointer olduğu için & gerek yok
    printf("soyisim: ");
    scanf("%s", soyisim);
    printf("tanistigimiza memnun oldum %s %s\n", isim, soyisim);

    return 0;
}

void string_tanim()
{

    char str1[20] = "ilk mesaj";
    char str2[20] = "ikinci mesaj";

    // printf("%s, %s\n", ptr1, ptr2); // &s \0 gelene kadar tek tek işler

    // 1 - Shadow Copy (Adres Değiştirme)
    char *ptr1 = str1;
    char *ptr2 = str2;

    ptr1 = ptr2;                    // aynı blok adresine sahip oluyorlar
    printf("%s, %s\n", ptr1, ptr2); // ikinci mesaj, ikinci mesaj

    ptr1[3] = '\0';
    printf("%s, %s\n\n", ptr1, ptr2); // iki, iki

    // 2 - Deep Copy
    // RAM'de iki farklı blok var
    char *ptr3 = str1;
    char *ptr4 = str2;

    char c = ptr4[0];
    for (int i = 0; c != '\0'; i++)
    {

        ptr3[i] = ptr4[i]; // kopyalama
        c = ptr3[i];       // c \0 olana kadar çalıştıracak
    }

    printf("%s, %s\n", ptr3, ptr4); // ikinci mesaj, ikinci mesaj

    ptr4[3] = '\0';
    printf("%s, %s\n", ptr3, ptr4); // ikinci mesaj, iki
}