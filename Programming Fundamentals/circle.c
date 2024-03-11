#include <stdio.h>
#define PI 3.14159
int main()
{
    double area = 0.0;
    double radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Area = %lf \n", area);
    return 0;
}