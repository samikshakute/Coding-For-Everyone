#include <stdio.h>
void recursiveCountDown(int n)
{
    if(n == 0)
    {
        printf("Blast Off \n");
    }
    else
    {
        printf("Time is %d \n", n);
        recursiveCountDown(n - 1);
    }
}
int main()
{
    int n = 5;
    recursiveCountDown(n);
    return 0;
}