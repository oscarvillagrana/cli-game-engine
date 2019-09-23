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

    if (containsPair(hand)) {
            cout << "Pair!" << endl;
    }

    return 0;

}


// Your program should be able to recognize hand categories

// If a hand matches more than one description, the program should print out the most valuable hand type only.

// Each function must accept an int array as a parameter.  
// You can assume that the array will have five elements.  

int print_hand_type() {

    if (containsPair(hand)) 
        cout << "Pair!" << endl;
    

    if (containsThreeOfaKind(hand)) 
        cout << "Three Of A Kind" << endl;
    

    if (containsTwoPair(hand)) 
        cout << "Two Pair!" << endl;
    

    if (containsFourOfaKind(hand)) 
        cout << "Four Of a Kind!" << endl;
    

    if (containsStraight(hand)) 
        cout << "Straight!" << endl;
    

    if (containsFullHouse(hand)) 
        cout << "Full House!" << endl;
}


int collect_values() {

    int NUM_CARDS = 5;
    int hand[NUM_CARDS];

    int card_1 = 0;
    int card_2 = 0;
    int card_3 = 0;
    int card_4 = 0;
    int card_5 = 0;

    hand[0] = card_1;
    hand[1] = card_2;
    hand[2] = card_3;
    hand[3] = card_4;
    hand[4] = card_5;

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
}


// High Card: No matching cards and not a straight
// 2, 5, 3, 8, 7

// High Card:
// If not one of the better hand types, then it is a High Card hands


int highCard(int hand[]) {

    int NUM_CARDS = 5;
    int highCard = hand[0];
    for (int i=0; i< NUM_CARDS; i++) {
        if (hand[i] > highCard);
            highCard = hand[i];
    }
    return highCard;
}



// Pair: Two of the cards are identical
// 2, 5, 3, 5, 7
bool containsPair(int hand[]) {
    
    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++) {
        
        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
            // find matching pair
    
            if ( hand[handIndex] == hand[comparisonIndex])
                return true;
        }
    }
    return false;
}


// Three of a kind: Three matching cards
// 5, 5, 3, 5, 7
bool  containsThreeOfaKind(int hand[]) {

    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++) {
        int matchingCards = 0;

        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
            if ( hand[cardsIndex] == hand[comparisonIndex])
                matchingCards++;
         
            if (matchingCards == 2)
                return true;
        }
    }
    return false;
}

// Two Pair: Two different pairs
// 2, 5, 3, 5, 3
bool  containsTwoPair(int hand[]) {
    int counterVariable = 0;

    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++) {
        
        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
            // find matching pair
            
            if ( hand[cardsIndex] == hand[comparisonIndex])
                counterVariable++;
        }
    }

    if (counterVariable == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}



// Straight: Card values can be arranged in order, regardless of the order
bool  containsStraight(int hand[]) {
    
    int lowCard = hand[0];
    
    for (int i = 0; i < NUM_CARDS; i++) {
        if (hand[i] < lowCard) {
            lowCard = hand[i];
        }
    }
    for (int i = 1; i<=4; i++) {
        bool hasStraight = false;
        
        for (int cardsIndex = 0; cardsIndex < NUM_CARDS; cardsIndex++){
            if (hand[cardsIndex] == (low + 1)) {
                hasStraight = true;
            }
        }
        if (hasStraight == false) {
            return false;
    }
    return true;
}





// Full House: A pair, and a three of a kind
// 5, 7, 5, 7, 7
bool  containsFullHouse(int hand[]) {
    
    int ThreeOfAKind = 0;

    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++) {
        int matchingCards = 0;

        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
            
            if ( hand[cardsIndex] == hand[comparisonIndex])
                ThreeOfAKind = hand[cardsIndex];
         
            if (ThreeOfAKind == 0)
                return false;
        }
    }

    int hasPair = 0;
    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++)
    {
        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++)
        {
            // find matching pair
            if ( hand[handIndex] == hand[comparisonIndex])

            if (hand[handIndex] != ThreeOfAKind)
                return true;
        }
    }

}




// Four of a kind: Four matching cards
// 2, 5, 5, 5, 5
bool  containsFourOfaKind(int hand[])
{

    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++)
    {
        int matchingCards = 0;

        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++)
        {
            if ( hand[cardsIndex] == hand[comparisonIndex])
                matchingCards++;
         
            if (matchingCards == 3)
                return true;
        }
    }
    return false;

}




