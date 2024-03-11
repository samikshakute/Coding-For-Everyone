#include <stdio.h>
#include <math.h>
int main()
{
    for (double x = 0.0; x <= 1.0; x += 0.1)
    {
        double sin_value = sin(x);
        printf("sin(%lf) = %lf \n", x, sin_value);
    }
    return 0;
}