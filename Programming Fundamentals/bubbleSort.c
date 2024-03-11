#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_array(int howMany, int data[], char *str)
{
    int i;
    printf("%s", str);

    for (int i = 0; i < howMany; i++)
    {
        printf("%d\t", data[i]);
    }
}
void bubble(int data[], int howMany)
{
    int go_on;

    for (int i = 0; i < howMany - 1; i++)
    {
        print_array(howMany, data, "\ninside bubble\n");
        scanf("%d", &go_on);
        for (int j = howMany - 1; j > i; j--)
        {
            if (data[j - 1] > data[j])
            {
                swap(&data[j - 1], &data[j]);
            }
        }
    }
}
int main()
{
    int grades[5] = {78, 67, 92, 83, 88};

    print_array(5, grades, "My grades \n");
    printf("\n\n");
    bubble(grades, 5);
    print_array(5, grades, "My sorted grades \n");
    printf("\n\n");
    return 0;
}