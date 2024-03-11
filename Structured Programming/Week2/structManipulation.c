#include <stdio.h>

// Define a structure named 'card' to represent a playing card
struct card {
    int pips;    // Numeric value of the card
    char suit;   // Suit of the card (e.g., 'D' for diamonds)
};

int main() {
    // Declare a variable 'myCard' of type 'struct card'
    struct card myCard;
    myCard.pips = 2;    // Assign the value 2 to 'pips'
    myCard.suit = 'D';  // Assign the character 'D' to 'suit'

    // Print the details of 'myCard'
    printf("My card is %d%c \n", myCard.pips, myCard.suit);

    // Declare a pointer variable 'myCardPointer' of type 'struct card'
    struct card *myCardPointer;
    myCardPointer = &myCard;  // Assign the address of 'myCard' to 'myCardPointer'
    
    // Modify the values of 'myCard' through 'myCardPointer'
    myCardPointer->pips = 3;   // Modify the 'pips' value to 3
    myCardPointer->suit = 'C'; // Modify the 'suit' character to 'C'

    // Print the details of 'myCard' through 'myCardPointer'
    printf("My Card is %d%c \n", myCardPointer->pips, myCardPointer->suit);
    
    return 0; 
}