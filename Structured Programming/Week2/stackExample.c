#include <stdio.h>
#include <stdbool.h>

#define MAX_LEN 3 // Maximum length of the stack array

// Stack structure
typedef struct {
    char arr[MAX_LEN];
    int top; // Pointer to the top element of the stack
} Stack;

// Function prototypes
void push(Stack *stk, char c);
char pop(Stack *stk);
bool isEmpty(Stack *stk);
bool isFull(Stack *stk);
void reset(Stack *stk);

int main() {
    Stack stk;
    stk.top = -1; // Initialize the stack

    // Pushing elements onto the stack
    push(&stk, 'A');
    push(&stk, 'B');
    push(&stk, 'C');
    
    if (isFull(&stk)) {
        printf("Stack is full\n");
    } else {
        printf("Stack is not full\n");
    }
    // Popping elements from the stack
    printf("Popped element: %c\n", pop(&stk)); // Output: C

    // Checking if the stack is empty
    if (isEmpty(&stk)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }
    printf("Popped element: %c\n", pop(&stk)); // Output: B
    printf("Popped element: %c\n", pop(&stk)); // Output: A

    // Checking if the stack is empty
    if (isEmpty(&stk)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
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

// Check if the stack is empty
bool isEmpty(Stack *stk) {
    return stk->top == -1;
}

// Check if the stack is full
bool isFull(Stack *stk) {
    return stk->top == MAX_LEN - 1;
}

// Reset the stack
void reset(Stack *stk) {
    stk->top = -1;
}
