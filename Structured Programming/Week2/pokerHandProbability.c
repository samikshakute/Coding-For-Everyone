#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enumerated type to represent card suits
typedef enum {
    Hearts, Diamonds, Clubs, Spades
} Suit;

// Struct to represent a card
typedef struct {
    Suit suit;
    short pips;
} Card;

// Function to randomly shuffle the deck
void shuffleDeck(Card deck[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

// Function to generate a deck of cards
void generateDeck(Card deck[]) {
    int index = 0;
    for (Suit s = Hearts; s <= Spades; s++) {
        for (short p = 2; p <= 14; p++) {
            deck[index].suit = s;
            deck[index].pips = p;
            index++;
        }
    }
}

// Function to evaluate a hand for different poker hands
void evaluateHand(Card hand[], int size, int* noPair, int* onePair, int* twoPair, int* threeKind, int* fullHouse, int* fourKind) {
    int frequency[15] = {0}; // Array to store frequency of pips values

    // Count frequency of each pips value in the hand
    for (int i = 0; i < size; i++) {
        frequency[hand[i].pips]++;
    }
    // Count the number of pairs, three of a kind, and four of a kind
    int pairs = 0, three = 0, four = 0;
    for (int i = 2; i <= 14; i++) {
        if (frequency[i] == 2) {
            pairs++;
        } else if (frequency[i] == 3) {
            three++;
        } else if (frequency[i] == 4) {
            four++;
        }
    }

    // Update the counters for different hand types
    if (pairs == 0 && three == 0 && four == 0) {
        (*noPair)++;
    } else if (pairs == 1 && three == 0 && four == 0) {
        (*onePair)++;
    } else if (pairs == 2 && three == 0 && four == 0) {
        (*twoPair)++;
    } else if (pairs == 1 && three == 1) {
        (*fullHouse)++;
    } else if (four == 1) {
        (*fourKind)++;
    }
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    const int numHands = 1000000; // Number of hands to generate
    int noPair = 0, onePair = 0, twoPair = 0, threeKind = 0, fullHouse = 0, fourKind = 0;

    // Generate and evaluate hands
    for (int i = 0; i < numHands; i++) {
        Card deck[52];
        generateDeck(deck);
        shuffleDeck(deck, 52);

        Card hand[7];
        for (int j = 0; j < 7; j++) {
            hand[j] = deck[j];
        }

        evaluateHand(hand, 7, &noPair, &onePair, &twoPair, &threeKind, &fullHouse, &fourKind);
    }

    // Calculate probabilities
    double probNoPair = (double)noPair / numHands;
    double probOnePair = (double)onePair / numHands;
    double probTwoPair = (double)twoPair / numHands;
    double probThreeKind = (double)threeKind / numHands;
    double probFullHouse = (double)fullHouse / numHands;
    double probFourKind = (double)fourKind / numHands;

    // Print probabilities
    printf("Probabilities:\n");
    printf("No Pair: %.8f\n", probNoPair);
    printf("One Pair: %.8f\n", probOnePair);
    printf("Two Pair: %.8f\n", probTwoPair);
    printf("Three of a Kind: %.8f\n", probThreeKind);
    printf("Full House: %.8f\n", probFullHouse);
    printf("Four of a Kind: %.8f\n", probFourKind);

    return 0;
}