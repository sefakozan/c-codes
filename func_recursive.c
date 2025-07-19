#include <stdio.h>

// Örnek 1: Faktöriyel hesaplayan recursive fonksiyon
unsigned long long factorial(int n)
{
    // Temel durum: n = 0 veya n = 1 ise faktöriyel 1'dir
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive durum: n! = n * (n-1)!
    return n * factorial(n - 1);
}

// Örnek 2: Fibonacci dizisini hesaplayan recursive fonksiyon
int fibonacci(int n)
{
    // Temel durumlar: n = 0 ise 0, n = 1 ise 1 döner
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    // Recursive durum: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    // Faktöriyel testi
    int num = 5;
    printf("%d! = %llu\n", num, factorial(num)); // 5! = 120

    // Fibonacci testi
    int fib_num = 6;
    printf("Fibonacci(%d) = %d\n", fib_num, fibonacci(fib_num)); // Fibonacci(6) = 8

    return 0;
}