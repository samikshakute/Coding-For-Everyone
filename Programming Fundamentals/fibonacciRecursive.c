#include <stdio.h>
long fibonacci(int n)
{
    long f2 = 0, f1 = 1, f_old;
    int i;
    for (i = 0; i < n; i++)
    {
        f_old = f2;
        f2 = f2 + f1;
        f1 = f_old;
    }
    return f2;
}
long recursiveFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
    }
}
int main()
{
    int howMany = 0;
    printf("I want table of fibonacci up to n: ");
    scanf("%d", &howMany);
    printf("\n Fibonacci\n");

    for (int i = 0; i < howMany; i++)
    {
        printf("\n%d\t %ld %ld \n", i, fibonacci(i), recursiveFibonacci(i));
    }
    return 0;
}