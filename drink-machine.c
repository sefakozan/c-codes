/******************************************************
 *
 *
 *
 *
 *
 *
 *
 ******************************************************/

#include <stdio.h>
#include <stdlib.h>
void startmachine(void);
void greeting(void);
int choose_drink(void);
void receive_payment(int);
void clear_buffer(void);

int main()
{
    startmachine();
    return EXIT_SUCCESS;
}

void startmachine()
{
    greeting();
    int drink_code = choose_drink();
    receive_payment(drink_code);
}

void greeting()
{
    printf("+-----------------------------DRINK MACHINE------------------------------+\n");
    printf("|\n");
    printf("| Welcome to Drink Machine. Have a Good Apetite!\n");
    printf("|\n");
    printf("| 1. WATER\n");
    printf("| 2. TEA\n");
    printf("| 3. COFFEE\n");
    printf("| 4. COLA\n");
    printf("|\n");
    printf("+------------------------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t  Exit to write 5\n\n");
}

int choose_drink()
{
    int choice = 0;
    do
    {
        printf("Enter your drink choice: ");

        /*
            Scanf'in Dönüş Bildirimleri
            -----------------------------
           1. scanf("%d", &x)        --> -1 (dosya sonu (EOF) varsa)
           2. scanf("%d", &x)        -->  0 (x’e hiçbir değer atanmaz, giriş akışında "abc" kalır)
           3. scanf("%d", &x)        -->  1 (bir tamsayı başarıyla okundu ve atandı)
           4. scanf("%d %d", &x, &y) -->  2 (iki tamsayı başarıyla okundu ve atandı)

        */

        if (scanf("%d", &choice) != 1)
        {
            clear_buffer();
        }

        if (1 > choice || choice > 4)
        {
            printf("Invalid input!\n\n");
        }
        else if (choice == 5)
            break;

    } while (1 > choice || choice > 4); // 1 ve 4 arası (dahil) harici değer girilirse tekrar içecek istenir (true)

    return choice;
}

void receive_payment(int drink_code)
{
    int price = 0, payment = 0, total_payment = 0;
    char *name;

    printf("You need to pay the price : 5TL/10TL/20TL/50TL/100TL\n\n");

    // içeceğin ismi ve fiyatı tanımlandı
    switch (drink_code)
    {
    case 1:
        printf("Water --> 5 TL\n\n");
        name = "Water";
        price = 5;
        break;
    case 2:
        printf("Tea --> 10 TL\n\n");
        name = "Tea";
        price = 10;
        break;
    case 3:
        printf("Coffee --> 15 TL\n\n");
        name = "Coffee";
        price = 15;

        break;
    case 4:
        printf("Cola --> 25 TL\n\n");
        name = "Cola";
        price = 25;
        break;
    }

    do
    {
        printf("Payment: ");
        if (scanf("%d", &payment) != 1) // tam sayı girilirse if bloğuna girilmez
        {
            clear_buffer();
        }

        if (payment == 5 || payment == 10 || payment == 20 || payment == 50 || payment == 100)
        {
            // toplam verilen parayı tutar
            total_payment += payment;

            // toplam para fiyattan yüksek ve eşitse, içecek alınmış demektir
            if (total_payment >= price)
            {
                printf("\n- Thank you for using the DRINK MACHINE.\n");
                printf("- Your %s is being delivered.\n", name);
                printf("- You will take %d TL.\n\n", total_payment - price);
                printf("---> Press any key to continue...");
                clear_buffer(); //
                getchar();      // getchar ile tuş okunması için buffer tertermiz olması gerek
            }
            else
            {
                printf("- You Need To Pay %d More\n\n", price - total_payment);
            }
        }
        else
        {
            printf("- Please enter a valid amount of money\n\n");
        }

    } while (total_payment < price);
}

inline void clear_buffer()
{
    // fflush
    /*

        Buffer (Arabellek ya da tampon bellek)
        --------------------------------------------
         Bir cihazda verilerin topluca yazılmadan önce biriktirildikleri bellektir.

        getchar(), standart girişten tek bir karakter okur ve bu karakteri döndürür.
        Dönen değer, bir int türüdür.
        Çünkü hem karakterleri (ASCII değerleri) hem de özel bir durum olan dosya sonu (EOF) işaretini temsil edebilir.

        Kullanıcı abc yazıp Enter'a basarsa, input buffer'da a, b, c ve \n karakterleri bulunur.
        C'deki giriş fonksiyonları (scanf, getchar vb.), bu tampondan veri okur.
        Her getchar() çağrısı, tampondaki bir karakteri dışarıya çıkartır ve böylece tampon temizlenir.
        Döngü, getchar() bir \n karakteri okuduğunda veya dosya sonu (EOF) (Ctrl + D) ile karşılaştığında durur.


    */

    // while ve do-while buffer içinde sadece \n olduğunda bir kez çalışır ve içi tamamen temizlenir
    char c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
    // } while (c != '\n' && c >= 0);

    /**
     * Null Statement (;)
     * Yalnızca bir noktalı virgül (;) içeren ve hiçbir işlem yapmayan bir ifadedir.
     */

    // while (getchar() != '\n');
    // Enter(yeni satır) gelene kadar oku
}