#include <stdio.h>
void carpim_tablosu(void);
void dik_ucgen_yildiz(void);
void ters_dik_ucgen_sag_yildiz(void);
void ters_dik_ucgen_sol_yildiz(void);

/*
    FOR DÖNGÜSÜ STANDART OLARAK KULLANILIR!
          (i = 0; i < lenght; i++)
    Kodu basit tut, anlaşılabilir olsun, değerlerle oynama
     - i hep 0'dan başlasın -> Countability Theory (Sayılabilirlik Teorisi): genellikle tüm seriler sayma serisine dönüştürülebilir
     - <,> işaretleri değiştirme
     - i++ değiştirme

     continue: çağrıldığı yerde sonraki kodlara bakmazsızın döngüyü tekrar başlatır

*/

/*
    Şekil Soruları Bu Tablodan Çıkar
    ^	1	  2	  3	   4	 5	   6
    1  1,1  1,2  1,3  1,4   1,5   1,6

    2  2,1  2,2  2,3  2,4   2,5   2,6

    3  3,1  3,2  3,3  3,4   3,5   3,6

    4  4,1  4,2  4,3  4,4   4,5   4,6

    5  5,1  5,2  5,3  5,4   5,5   6,6

    6  6,1  6,2  6,3  6,4   6,5   6,6
*/
int main()
{

    carpim_tablosu();
    dik_ucgen_yildiz();
    ters_dik_ucgen_sag_yildiz();
    ters_dik_ucgen_sol_yildiz();
    return 0;
}

void carpim_tablosu()
{

    int i, j; // foo, bar olarakta isimlendirilebilir (kültür)

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }
        // satırda 1-5 arası yazıldıktan sonra alt satıra geçer
        // 2 den başlar (2*1) 2. sütunda (2*2) olur
        printf("\n");
    }
}

void dik_ucgen_yildiz()
{
    // iki for'un değişkenleri arasında bağlantı var
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        // satır için yıldız yazıldı, yeni satıra geç
        printf("\n");
    }
}

void ters_dik_ucgen_sag_yildiz()
{

    for (int i = 0; i < 10; i++)
    {
        // j<10 dikdörtgen, giderek azalması gerek 10-i
        for (int j = 0; j < 10 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

//*****
// ****
//  ***
//   **
//	  *

void ters_dik_ucgen_sol_yildiz()
{

    for (int i = 0; i < 10; i++)
    {
        // yıldız basacak
        for (int j = 0; j < 10 - i; j++)
        {
            printf("*");
        }

        // alt satıra geçecek
        printf("\n");

        // boşluk basacak
        for (int k = 0; k < 1 + i; k++)
        {
            printf(" ");
        }
    }
}