#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enumerated type to represent departments
typedef enum {
    HR, Sales, Research, Software, Executive
} Department;

// Struct to represent an employee
typedef struct {
    Department dept;
    int salary;
    unsigned int ssn;
} Employee;

// Function to generate a random salary for each department
int generateSalary(Department dept) {
    // Base salary for each department
    int baseSalary;
    switch (dept) {
        case HR:
            baseSalary = 40000;
            break;
        case Sales:
            baseSalary = 50000;
            break;
        case Research:
            baseSalary = 60000;
            break;
        case Software:
            baseSalary = 70000;
            break;
        case Executive:
            baseSalary = 100000;
            break;
    }

    // Generate a random offset
    int offset = rand() % 10001; // Random number between 0 and 10000

    // Add the offset to the base salary
    return baseSalary + offset;
}

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate and print 10 employees
    printf("Employees:\n");
    for (int i = 0; i < 10; i++) {
        Employee emp;
        emp.dept = (Department)(rand() % 5); // Random department
        emp.salary = generateSalary(emp.dept);
        emp.ssn = 100000000 + i; // Starting SSN with 100000000

        printf("Employee %d:\n", i + 1);
        printf("Department: ");
        switch (emp.dept) {
            case HR:        printf("HR\n");        break;
            case Sales:     printf("Sales\n");     break;
            case Research:  printf("Research\n");  break;
            case Software:  printf("Software\n");  break;
            case Executive: printf("Executive\n"); break;
        }
        printf("Salary: $%d\n", emp.salary);
        printf("SSN: %u\n", emp.ssn);
        printf("\n");
    }

    return 0;
}
