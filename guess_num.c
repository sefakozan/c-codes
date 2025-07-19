#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // Her çalıştırmada farklı sayı üretmek için
#include <ctype.h> // Küçük büyük harf duyarlılığı

void start_game(void);
void guess(void);
void greeting(void);
void finish_print(int, int);
char get_user_answer();
int generate_random_num(unsigned int, unsigned int);

/*
 * while true kullanma
 * break-continue kullanma
 * do-while kullan
 * hataları düzelt
 * random num notunu yaz
 */

int main()
{
    start_game();
    return 0;
}

void start_game()
{
    greeting();
    guess();
}

void greeting(void)
{

    printf("\t\t+-------------------------------------------------------------------------------+\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|   development by\n");
    printf("\t\t|\t\t\t    Welcome to Guess Number Game\t\t\t|   ~Sefa Kozan\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t+-------------------------------------------------------------------------------+\n");
    printf("\t\tPress any key to continue. . .");
    _getch();
    printf("\033[2J\033[H"); // clear

    printf("\t+-------------------------------------------------------------------------------+\n");
    printf("\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t|\t\t\t\tGuess a number 0-100\t\t\t\t|\n");
    printf("\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t+-------------------------------------------------------------------------------+\n");
    printf("\tInfo: If the number is big, write 'b'; smaller, write 's'; equal, write 'e'\n");
    printf("\tInfo: Press ESC to Exit.\n\n");
}

void guess()
{

    int random = 0, step = 0, min_guess = 0, max_guess = 100;
    char answer;

    srand(time(NULL)); // Her çalıştırmada farklı sayı üretmek için

    do
    {
        // min-max arasında random sayı üretir
        random = generate_random_num(min_guess, max_guess);

        printf("is this?: %d\n", random);

        // getch: enter tuşu bekler, _getch: enter tuşu beklemez
        answer = get_user_answer(random);

        // söylenen randomun min ve max aralığını bulur, daha sonrasında min ve max arasında random sayı oluşturulabilir
        // switch-case
        if (answer == 'b')
        {
            min_guess = random;
        }
        else if (answer == 's')
        {
            max_guess = random;
        }
        else if (answer == 'e')
        {
            finish_print(step, random); // adım sayısı ve sayı yazdırıldı

            // yeni oyun için değerler sıfırlandı
            random = 0, step = 1, min_guess = 0, max_guess = 100;

            // tekrar başlatmak için tuşa basmasını iste ya da esc
        }

        step++;

    } while (answer != 27);
}

char get_user_answer()
{ // kod tekrarı

    // scanf(" %c", &answer); // scanf() önceki \n (enter) karakterini de okuyabilir." %c" başındaki boşluk ile tüm boşlukları ve \n karakterini yok sayar
    char answer;

    printf("answer: ");
    answer = _getch();
    answer = tolower(answer); // küçük duyarlılığı
    printf("%c\n", answer);

    while (answer != 'b' && answer != 's' && answer != 'e' && answer != 27)
    {
        printf("\nEnter a valid value: ");
        answer = _getch();
        printf("%c\n", answer);
    }

    printf("\n");
    return answer;
}

/*
 * Rand nasıl çalışıyor?: rand 0-30000 arasında rastgele bir sayı oluşturur
 *
 *		#    0,...,30000 % (kalan) + (arttırma)
 *
 *			 0,...,30000 % 3       ----> Kalan ----> 0, 1, 2 olabilir                --> 0 ile 3 arasında random sayı (0 dahil)
 *			 0,...,30000 % 3  + 1  ----> Kalan ----> 0, 1, 2 olabilir, artık 1, 2, 3 --> 0 ile 4 arasında random sayı (0,4 dahil değil)
 *			(0,...,30000 % 3) + 4  ----> Kalan ----> 0, 1, 2 olabilir, artık 4, 5, 6 --> 3 ile 7 arasında random sayı (3,7 dahil değil)
 *
 */

int generate_random_num(unsigned int min, unsigned int max)
{
    // x % n  -> Sonuç daima 0 ile (n-1) arasında olur. kalan bölünenden büyük olamaz. 99 % 100 -> 99
    return (rand() % (max - min - 1)) + min + 1; // min-max arasında sayı üretir (sınır dahil değil)
}

void finish_print(int step, int random)
{
    printf("\n+--------------------------------------------------------------+\n\n");
    printf("I found your number in %d step!!!\n", step);
    printf("Number is: %d", random);
    printf("\n\n+--------------------------------------------------------------+\n\n\n");
}