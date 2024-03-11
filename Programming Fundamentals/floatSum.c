#include <stdio.h>
int main()
{
    float a, b, sum = 0;
    printf("Enter two floats: ");
    scanf("%f%f", &a, &b);
    printf("a = %f b = %f \n", a, b);
    sum = a + b;
    printf("Sum = %f \n", sum);
    return 0;
}