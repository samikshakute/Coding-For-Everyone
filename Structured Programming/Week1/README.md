# Enum as an ADT
## Introduction to User-Defined Types:
User-defined types are custom data types created by programmers to suit their specific needs. While programming languages come with built-in or native types like integers (int), floating-point numbers (float, double), characters (char), and pointers, user-defined types allow for greater flexibility and abstraction.

## Enumerated Types (Enums):
Enumerated types, or enums, are a form of user-defined type in C. They enable programmers to define a new data type with a finite set of named constants, known as enumerators. Enums are particularly useful when dealing with variables that can only take on one of a fixed set of values.

## Declaring Enumerated Types:
To declare an enum in C, you use the enum keyword followed by a tag name (optional) and a list of enumerator constants enclosed in curly braces {}. For example:

```
enum day {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
```
In this example, day is the tag name for the enum, and Sunday, Monday, etc., are the enumerators representing the days of the week.

## Enumerators and Values:
By default, each enumerator is implicitly assigned an integer value starting from 0 for the first enumerator, and incrementing by 1 for each subsequent enumerator. For example, Sunday is assigned the value 0, Monday is assigned 1, and so on.
```
enum day {
    Sunday,    // 0
    Monday,    // 1
    Tuesday,   // 2
    // ...
};
```
However, you can explicitly assign values to enumerators if needed, breaking the implicit sequence:
```
enum month {
    January = 1,
    February,
    March,
    // ...
};
```

## Typedef for Enums:
Using typedef, you can create an alias for the enum type, making the code more readable and concise:
```
typedef enum day {
    Sunday,
    Monday,
    // ...
} Day;
```
Now, Day can be used as a shorthand for enum day, improving code clarity.

## Benefits of Enumerated Types:
1. Type Safety: Enums provide type safety by restricting variables to a predefined set of values, enabling the compiler to catch type-related errors at compile time.
2. Clarity and Readability: By using meaningful names for constants, enums enhance code clarity and make the program easier to understand and maintain.

# The C Preprocessor
## Preprocessor Directives:
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```
These lines include the necessary standard libraries for input-output operations, random number generation, and time-related functions.

## Constants Definition:
Constants are defined using #define directives with all caps naming convention for clarity.
```
#define MAX_ELEPHANT_SEAL_WEIGHT_MALE 8800
#define MIN_ELEPHANT_SEAL_WEIGHT_MALE 4400
#define RANGE (MAX_ELEPHANT_SEAL_WEIGHT_MALE - MIN_ELEPHANT_SEAL_WEIGHT_MALE)
```
`MAX_ELEPHANT_SEAL_WEIGHT_MALE`: Maximum weight of a male southern elephant seal (8,800 pounds).
`MIN_ELEPHANT_SEAL_WEIGHT_MALE`: Minimum weight of a male southern elephant seal (4,400 pounds).
`RANGE`: Difference between maximum and minimum weights (4,400 pounds).

## Macro Definitions:
```
#define RAND_RANGE(min, max) ((rand() % ((max) - (min) + 1)) + (min))
#define WEIGHT RAND_RANGE(0, RANGE) + MIN_ELEPHANT_SEAL_WEIGHT_MALE
```
Macros are defined to simplify code and make it more readable:
`RAND_RANGE(min, max)`: Generates a random number within the specified range (min to max).
`WEIGHT`: Generates random weights for elephant seals within the specified range.

## Function Definitions:
```
void printData(int data[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", data[i]);
        if ((i + 1) % 10 == 0) printf("\n");
    }
}
```
The printData function takes an array of weights (data) and the size of the array (size) as arguments.
It prints the weights, tab-separated, with a newline every 10 values

## main Function:
```
int main() {
    srand(time(NULL));  // Seed for random number generation based on system time
    int population = 1000;  // Number of elephant seals to generate
    int data[population];   // Array to store the weights of elephant seals

    // Fill the data array with randomly generated weights
    for (int i = 0; i < population; i++) {
        data[i] = WEIGHT;
    }

    // Print the generated data
    printData(data, population);

    return 0;
}
```
main function declaration with local variables i and data array to store the weights.
Seed for the random number generator is initialized based on the system's clock to ensure different results on each run.
The fill macro is used to populate the data array with random weights.
Finally, the printData function is called to print the generated weights.

## Usage of Preprocessor:
Preprocessor directives and macros are used to define constants
`(MAX_ELEPHANT_SEAL_WEIGHT_MALE, MIN_ELEPHANT_SEAL_WEIGHT_MALE, RANGE) and simplify code (RAND_RANGE, WEIGHT)`.
These directives and macros enhance code readability and maintainability by abstracting complex operations and facilitating code reuse.

## Cautionary Note:
While macros provide flexibility, modern programming practices tend to minimize their usage, especially for code expansion.
Inline functions or compiler optimizations are preferred over complex macros to ensure type safety, readability, and maintainability of the code.


