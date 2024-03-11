#include <stdio.h>
long int factorial(int n)
{
    long f = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
long int recursiveFactorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (recursiveFactorial(n - 1) * n);
    }
}
int main()
{
    int howMany = 0, i;
    printf("I want table of factorial up to n: ");
    scanf("%d", &howMany);
    printf("\nfactorials \n");

    for (i = 1; i <= howMany; i++)
    {
        printf("\n%d\t %ld\n", i, factorial(i));
    }
    printf("\n\n");

    for (int i = 1; i <= howMany; i++)
    {
        printf("\n%d\t %ld \n", i, recursiveFactorial(i));
    }
    printf("\n\n");
    return 0;
}