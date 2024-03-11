#include <stdio.h>

// Enumerated type to represent months
typedef enum {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
} Month;

// Struct to represent a date
typedef struct {
    Month month;
    int day;
} Date;

// Function to determine the number of days in a given month
int daysInMonth(Month month) {
    switch (month) {
        case February:
            return 28;
        case April: case June: case September: case November:
            return 30;
        default:
            return 31;
    }
}

// Function to get the next day
Date nextDay(Date d) {
    int maxDay = daysInMonth(d.month);
    if (d.day < maxDay) {
        d.day++;
    } else {
        d.day = 1;
        if (d.month == December) {
            d.month = January;
        } else {
            d.month = (Month)(d.month + 1);
        }
    }
    return d;
}

// Function to print a date
void printDate(Date d) {
    switch (d.month) {
        case January:  printf("January");   break;
        case February: printf("February");  break;
        case March:    printf("March");     break;
        case April:    printf("April");     break;
        case May:      printf("May");       break;
        case June:     printf("June");      break;
        case July:     printf("July");      break;
        case August:   printf("August");    break;
        case September:printf("September"); break;
        case October:  printf("October");   break;
        case November: printf("November");  break;
        case December: printf("December");  break;
    }
    printf(" %d\n", d.day);
}

int main() {
    Date today = {December, 12};

    printf("Today's date: ");
    printDate(today);

    printf("Next day's date: ");
    printDate(nextDay(today));

    return 0;
}
