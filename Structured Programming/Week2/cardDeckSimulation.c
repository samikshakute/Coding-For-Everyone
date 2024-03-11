#include <stdio.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define TOTAL_CARDS (NUM_RANKS * NUM_SUITS)

// Define a struct to represent a playing card
struct card {
    int pips; // Represents the value of the card (1-13)
    char suit; // Represents the suit of the card (C, D, H, S)
};

// Typedef for struct card to simplify declarations
typedef struct card Card;

int main() {
    // Declare a variable of type Card
    Card myCard;

    // Initialize the card with a value and a suit
    myCard.pips = 10; // 10
    myCard.suit = 'H'; // Hearts

    // Print the value and suit of the card
    printf("My card is: %d%c\n", myCard.pips, myCard.suit);

    // Declare an array of cards to represent a deck
    Card deck[TOTAL_CARDS];

    // Initialize the deck with all 52 cards
    int cardIndex = 0;
    for (int i = 1; i <= NUM_RANKS; i++) {
        for (int j = 0; j < NUM_SUITS; j++) {
            char suit;
            switch (j) {
                case 0: suit = 'C'; break;
                case 1: suit = 'D'; break;
                case 2: suit = 'H'; break;
                case 3: suit = 'S'; break;
            }
            deck[cardIndex].pips = i;
            deck[cardIndex].suit = suit;
            cardIndex++;
        }
    }

    // Print the entire deck
    printf("\nPrinting the entire deck:\n");
    for (int i = 0; i < TOTAL_CARDS; i++) {
        printf("Card %d: %d%c\n", i + 1, deck[i].pips, deck[i].suit);
    }

    return 0;
}
