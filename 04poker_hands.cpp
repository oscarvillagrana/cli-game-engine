// Assignment 04 - poker_hands
// Reads five cards from the user, then analyzes the cards and prints out the category of poker hand that they represent.
#include <iostream>

using namespace std;

int print_hand_type();
int collect_values();
bool containsPair(int hand[]);
bool containsTwoPair(int hand[]);
bool containsThreeOfaKind(int hand[]);
bool containsStraight(int hand[]);
bool containsFullHouse(int hand[]);
bool containsFourOfaKind(int hand[]);

// Here is code that tests a containsPair function

int main() {
        int hand[] = {2, 5, 3, 2, 9};

int card_1 = 0
int card_2 = 0
int card_3 = 0
int card_4 = 0
int card_5 = 0




        if (containsPair(hand)) {
                cout << "Pair!" << endl;
        }

        return 0;
}

cout << "Enter five numeric cards, no face cards. Use 2 - 9: " << endl;
cout << "Card 1: " << endl;
cin >> card_1 >> endl;

cout << "Card 2: " << endl;
cin >> card_2 >> endl;

cout << "Card 3: " << endl;
cin >> card_3 >> endl;

cout << "Card 4: " << endl;
cin >> card_4 >> endl;

cout << "Card 5: " << endl;
cin >> card_5 >> endl;


// Your program should be able to recognize hand categories

// If a hand matches more than one description, the program should print out the most valuable hand type only.

// Each function must accept an int array as a parameter.  
// You can assume that the array will have five elements.  


// Pair: Two of the cards are identical
bool containsPair(int hand[])
2, 5, 3, 5, 7

// Two Pair: Two different pairs
bool  containsTwoPair(int hand[])
2, 5, 3, 5, 3

// Three of a kind: Three matching cards
bool  containsThreeOfaKind(int hand[])
5, 5, 3, 5, 7

// Straight: Card values can be arranged in order, regardless of the order
bool  containsStraight(int hand[])
3, 4, 5, 6, 7

// Full House: A pair, and a three of a kind
bool  containsFullHouse(int hand[])
5, 7, 5, 7, 7

// Four of a kind: Four matching cards
bool  containsFourOfaKind(int hand[])
2, 5, 5, 5, 5

// High Card: No matching cards and not a straight
2, 5, 3, 8, 7

High Card:
If not one of the better hand types, then it is a High Card hands


// Here is code that tests a containsPair function

int main() {
        int hand[] = {2, 5, 3, 2, 9};

        if (containsPair(hand)) {
                cout << "Pair!" << endl;
        }

        return 0;
}
