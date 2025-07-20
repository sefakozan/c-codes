#include <stdio.h>
void two_power_bitwise(int);

// https://youtu.be/OhHVjzZ6k5c?si=YQpcLY9WCOE8Hp4n
int main()
{
    int sayi;
    printf("sayi: ");
    scanf("%d", &sayi);
    two_power_bitwise(sayi);

    return 0;
}

void two_power_loop(int sayi)
{
    int power = 0, flag = 0;
    for (int i = 1; i <= sayi; i *= 2)
    {
        if (sayi == i)
        {
            flag = 1;
            break;
        }
        power++;
    }

    if (flag == 1)
    {
        printf("%d --> 2'nin %d kuvvetidir\n", sayi, power);
    }
    else
    {
        printf("%d 2'nin kuvveti degildir", sayi);
    }
}

void two_power_bitwise(int sayi)
{
    if (sayi && !(sayi & (sayi - 1)))
    {
        printf("%d --> 2'nin kuvvetidir\n", sayi);
    }
    else
    {
        printf("%d --> 2'nin kuvveti degildir", sayi);
    }
}