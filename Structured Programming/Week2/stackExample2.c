#include <stdio.h>
#include <stdbool.h> // For boolean data type

#define MAX_LEN 20 // Maximum length of the stack array

// Define the Stack structure
typedef struct {
    char arr[MAX_LEN];
    int top; // Pointer to the top element of the stack
} Stack;

// Constants for empty and full stack
#define EMPTY -1
#define FULL (MAX_LEN - 1)

// Function prototypes
void reset(Stack *stk);
void push(Stack *stk, char c);
char pop(Stack *stk);
char peek(Stack *stk);
bool isEmpty(Stack *stk);
bool isFull(Stack *stk);

// Reset the stack
void reset(Stack *stk) {
    stk->top = EMPTY;
}

// Push operation: Add an element to the top of the stack
void push(Stack *stk, char c) {
    if (isFull(stk)) {
        printf("Stack Overflow\n");
        return;
    }
    stk->arr[++(stk->top)] = c;
}

// Pop operation: Remove the top element from the stack
char pop(Stack *stk) {
    if (isEmpty(stk)) {
        printf("Stack Underflow\n");
        return '\0';
    }
    return stk->arr[(stk->top)--];
}

// Peek operation: View the top element of the stack without removing it
char peek(Stack *stk) {
    if (isEmpty(stk)) {
        printf("Stack is empty\n");
        return '\0';
    }
    return stk->arr[stk->top];
}

// Check if the stack is empty
bool isEmpty(Stack *stk) {
    return stk->top == EMPTY;
}

// Check if the stack is full
bool isFull(Stack *stk) {
    return stk->top == FULL;
}

int main() {
    Stack stk;
    char str[] = "My name is Samiksha";
    int i = 0;

    stk.top = EMPTY; // Initialize the stack

    // Original string
    printf("Original String: %s\n", str);

    // Push each character of the string onto the stack
    printf("Pushing characters onto the stack:\n");
    while (str[i] != '\0') {
        printf("%c ", str[i]);
        push(&stk, str[i++]);
    }
    printf("\n");

    // Reverse the string using the stack
    printf("Reversed String: ");
    while (!isEmpty(&stk)) {
        printf("%c", pop(&stk));
    }
    printf("\n");

    return 0;
}
