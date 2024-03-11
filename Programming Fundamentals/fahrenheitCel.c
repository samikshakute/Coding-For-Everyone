// Conversion of Fahrenheit to Celsius
#include <stdio.h>
int main()
{
    int fahrenheit = 0;
    int celsius = 0;
    printf("Enter fahrenheit temperateure as integer: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8; // silent conversion from double to int
    printf("%d Fahrenheit is %d Celsius \n", fahrenheit, celsius);

    return 0;
}