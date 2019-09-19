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

bool searchSingleInt()
{
    int size = 5;
    int list[size] = {3, 3, 3, 4, 5};
    int value = 3;

    int pos = 0;
    bool isFound = false;

    while (!isFound && pos < size)
    {
        if (list[pos] == value)
            cout << "1" << endl;
            // isFound == true;
            // if (isFound)
        pos++;
    }
    return isFound;

}


// Pair: Two of the cards are identical
// 2, 5, 3, 5, 7
bool containsPair(int hand[])
{
    int list[];
    int size = 5;
    int value;

    int pos = 0;
    bool isFound = false;

    while (!isFound && pos < size)
    {
        if (list[pos] == value)
            isFound == true;
        pos++;
    }
    return isFound;
}


// Two Pair: Two different pairs
// 2, 5, 3, 5, 3
bool  containsTwoPair(int hand[])

// Three of a kind: Three matching cards
// 5, 5, 3, 5, 7
bool  containsThreeOfaKind(int hand[])

// Straight: Card values can be arranged in order, regardless of the order
bool  containsStraight(int hand[])
{
    const int arraySize = 5;
    int hand[arraySize] = {3, 4, 5, 6, 7};
    int toTheLeft[arraySize];
    int toTheRight[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        toTheLeft[i] = hand[i] - 1;
        toTheRight[i] = hand[i] + 1;

        cout << toTheRight[i] << endl;
        cout << toTheLeft[i] << endl;

        bool isStraight = true;
        int pos = 0;

        while (!isStraight && pos < arraySize)
        {
        if (hand[pos] == toTheLeft[pos])
            isStraight == true;
        else if (hand[pos] == toTheRight[pos])
            isStraight == true;
        pos++;
        }

        return isStraight;
        if (isStraight)
            cout << "Its straight!";
    }

}



// Full House: A pair, and a three of a kind
// 5, 7, 5, 7, 7
bool  containsFullHouse(int hand[])

// Four of a kind: Four matching cards
// 2, 5, 5, 5, 5
bool  containsFourOfaKind(int hand[])

// High Card: No matching cards and not a straight
// 2, 5, 3, 8, 7

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
