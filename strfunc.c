#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void string_islem(void);

int my_strlen(const char *);

void my_rev_str1(char *);
void my_rev_str2(char *);

char my_toupper_char(char);
char my_tolower_char(char);

void my_toupper_str(char *);
void my_tolower_str(char *);

int main()
{
    string_islem();
    return 0;
}

void string_islem()
{

    char str0[20] = "abcde"; // read-only, const string --> değiştirilebilir diziye kopyalanıyor

    // str_len
    printf("str_len: %d\n", my_strlen(str0));

    // str_rev1
    my_rev_str1(str0); // void olduğu için printf içinde yazdırılamaz
    printf("str_rev_malloc: %s\n", str0);

    // str_rev2
    my_rev_str2(str0);
    printf("str_rev_swap: %s\n", str0);

    // char_upper
    printf("char_upper: %c\n", my_toupper_char('a'));

    // char_lower
    printf("char_lower: %c\n", my_tolower_char('A'));

    // str_upper
    char str1[] = "mErHaba dunYa";
    my_toupper_str(str1); // void olduğu için printf içinde yazdırılamaz
    printf("str_upper: %s\n", str1);

    // str_lower
    char str2[] = "MErhAba DUNya";
    my_tolower_str(str2);
    printf("str_lower: %s\n", str2);
}

// String Length
int my_strlen(const char *str)
{ // const, fonksiyonun string'i değiştirmeyeceğini belirtir

    int length = 0;

    while (str[length] != '\0')
    { // koşul sağlanınca çıkacak
        length++;
    }

    return length; // \0 silindi
}

// String Reverse - Malloc
void my_rev_str1(char *str)
{

    int length = my_strlen(str);                         // str'nin uzunluğunu aldık
    char *rev = (char *)malloc(sizeof(char) * (length)); // str içindeki \0 dokunmadığımız için length+1'e gerek yok

    for (int i = 0; i < length; i++)
    {
        rev[i] = str[length - i - 1]; // str'nin sondaki elemanları rev'in başlangıcından kopyaladık
    }

    for (int i = 0; i < length; i++)
    {
        str[i] = rev[i]; // str ptr'nin içini değiştirdik
    }

    free(rev);
}

// String Reverse - Swap
void my_rev_str2(char *str)
{

    int length = my_strlen(str);
    char swap;
    for (int i = 0; i < length / 2; i++)
    {
        swap = str[length - i - 1];
        str[length - i - 1] = str[i];
        str[i] = swap;
    }
}

// Küçük harfi büyük harfe çevirir
char my_toupper_char(char c)
{

    if ('a' <= c && c <= 'z')
    { // 'a' <= c <= 'z' --> ikili ikili baktığı için c <= z çoğunlukla 1 olur
        return c - 32;
    }
    return c;
}

// Büyük harfi küçük harfe çevirir
char my_tolower_char(char c)
{

    if ('A' <= c && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}

// Stringin küçük harflerini büyük harfe çevirecek
void my_toupper_str(char *str)
{

    for (int i = 0; str[i] != '\0'; i++)
    { // i < my_strlen(str)
        str[i] = my_toupper_char(str[i]);
    }
}

// Stringin büyük harflerini küçük harfe çevirecek
void my_tolower_str(char *str)
{

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = my_tolower_char(str[i]);
    }
}