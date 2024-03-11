#include <stdio.h>
#include <math.h>
void printSinCosTable()
{
    printf("  x    |   sin(x)   |   cos(x)\n");
    printf("-------|------------|------------\n");
    for (double i = 0.0; i <= 1.0; i = i + 0.1)
    {
        double sinVal = sin(i);
        double cosVal = cos(i);
        printf("%6.2lf | %10.6lf | %10.6lf\n", i, sinVal, cosVal);
    }
}
int main()
{
    printSinCosTable();
    return 0;
}