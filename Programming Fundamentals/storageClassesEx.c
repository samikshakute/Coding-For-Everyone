// Storage classes example
#include <stdio.h>
extern int reps = 0;

void f(void)
{
    static int called = 0;
    printf("f called %d \n", called);
    called++;
    reps = reps + called;
}
int main()
{
    auto int i = 1;
    const int Limit = 10;
    for (int i = 1; i < Limit; i++)
    {
        printf("i local = %d, reps global = %d \n", i, reps);
        f();
    }
    return 0;
}