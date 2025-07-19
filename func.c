#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void iki_int_yer_degistirme(void);
int fact(int);
int rec_fact(int);
int comb(int, int);
int fib(int);
int rec_fib(int);
int kare_sayisi(int);

/*
 Fonksiyon: farklı parametreler alıp, işleyip, bir değer döner

 Recursive Func. (Özyineli Fonk.) == Iterative Yaklaşım (Döngü)
    - Kendisini çağırır
    - Her döngü bir Recursive Func.
    - Her Recursive Func. bir döngüdür
    - Basite indirgenir ama hafizayi verimsiz kullanir
*/
int main()
{

    // fact
    int x;
    printf("Fact almak istediginiz sayi: ");
    scanf("%d", &x);

    printf("%d! : %d\n\n", x, Fact(x)); // Fact(Fact(x))

    // rec_fact
    printf("RecFact almak istediginiz sayi: ");
    scanf("%d", &x);
    printf("%d! : %d\n\n", x, RecFact(x));

    // comb
    int n, r;
    printf("C(n,r) Kombinasyonu: ");
    scanf("%d%d", &n, &r);
    printf("C(%d,%d) : %d\n\n", n, r, Comb(n, r));

    // fib
    int y;
    printf("Fib(x): ");
    scanf("%d", &y);
    printf("Fib(%d) : %d\n\n", y, Fib(y));

    // rec_fib
    printf("RecFib(x): ");
    scanf("%d", &y);
    printf("RecFib(%d) : %d\n\n", y, RecFib(y));

    // kare_sayisi
    int k;
    printf("..x..'lik izgara giriniz: ");
    scanf("%d", &k);

    printf("Kare sayisi: %d", KareSayisi(k));

    return 0;
}

void iki_int_yer_degistirme()
{

    /*
        1.yol: temp değişkenle
        2.yol: 2 değişkenle
        3.yol: xor ile (sadece tamsayı)

        XOR (execlusive or)
           0 0, 0
           0 1, 1
           1 0, 1
           0 0, 0
    */

    int a = 3; // 0011
    int b = 7; // 0111

    // 1.yol
    int temp;
    temp = a;
    a = b;
    b = temp;

    // 2.yol
    a = a + b;
    b = a - b;
    a = a - b;

    // 3.yol
    a = a ^ b; // 0011 ^ 0111 --> a = 0100 = 4
    b = a ^ b; // 0100 ^ 0111 --> b = 0011 = 3
    a = a ^ b; // 0100 ^ 0011 --> a = 0111 = 7
}

// Factorial
int fact(int x)
{

    int res = 1;

    for (int i = 1; i <= x; i++)
    {
        res *= i;
    }
    return res;
}

// Recursive Factorial

int rec_fact(int x)
{
    if (x == 0)
        return 1;
    return x * rec_fact(x - 1); // rf(6) = 6 * rf(5) = 6 * 5 * rf(4)...
}

// Combination
int comb(int n, int r)
{

    // C(n,r) = n! / (r!.(n-r))!
    int res;

    return res = Fact(n) / (fact(r) * fact(n - r));
}

// Fibonacci
int fib(int y)
{

    /*

     F(n) = F(n-1) + F(n-2)
           a b c(toplam)
     f(1)  0 1 1 -> tanım
     f(2)  1 1 2
     f(3)  1 2 3
     f(4)  2 3 5
     f(5)  3 5 8
     1,1,2,3,5,8,13,21,34,55
     */

    int a = 0, b = 1, c = 1;

    // f(3) için döngü 2 kere çalışacak (tanım sayılmıyor)
    // f(5) için döngü 4 kere çalışacak
    for (int i = 0; i < y - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

// Recursive Fibonacci
int rec_fib(int y)
{

    // F(n) = F(n - 1) + F(n - 2)

    if (y == 1 || y == 2)
        return 1;

    return rec_fib(y - 1) + rec_fib(y - 2);
    // rf(5) = [rf(4)] + [rf(3)] = [rf(3)+rf(2)] + [rf(2)+rf(1)] = [rf(2)+rf(1)+rf(2)] + [rf(2)+rf(1)] = [1+1+1] + [1+1]
}

int kare_sayisi(int k)
{
    /*
        3x3 ızgarada 4 tane 2x2'lik + 1 kendisi
        _______
        |  |  |
        |--|--|  3x3
        |  |  |
        -------
        nxn ızgarada 4 tane (n-1)x(n-1)'lik + 1 kendisi
    */

    if (k == 2)
        return 1;

    return kare_sayisi(k - 1) * 4 + 1; // ks(4) = k(3)*4 + 1 = (k(2)*4 + 1) * 4 + 1
}