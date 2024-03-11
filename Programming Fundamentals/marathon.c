#include <stdio.h>
int main()
{
    int miles = 26, yards = 385;
    double kilometers = 0.0;
    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("Marathon is %lf kilometers. \n\n", kilometers);
    return 0;
}