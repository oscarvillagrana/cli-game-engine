#include <iostream>

using namespace std;

int print_hand_type(int hand[]);
bool containsFullHouse(int hand[]);
bool containsStraight(int hand[]);
bool containsFourOfaKind(int hand[]);
bool containsThreeOfaKind(int hand[]);
bool containsTwoPair(int hand[]);
bool containsPair(int hand[]);

int main() 
{

// Full House: A pair, and a three of a kind
// int hand[] = {2, 2, 2, 3, 3};

// Straight: Card values can be arranged in order, regardless of the order
// int hand[] = {2, 3, 4, 5, 6};

// Four of a kind: Four matching cards
// int hand[] = {2, 5, 5, 5, 5};

// Three of a kind: Three matching cards
// int hand[] = {5, 5, 3, 5, 7};

// Two Pair: Two different pairs
// int hand[] = {2, 5, 3, 5, 3};

// Pair
// int hand[] = {2, 5, 3, 2, 9};
    print_hand_type(hand);

    return 0;
}

int print_hand_type(int hand[]) {

    if (containsFullHouse(hand)) {
        cout << "Full House!" << endl;
        return 0;
    }
    if (containsStraight(hand)) {
        cout << "Straight!" << endl;
        return 0;
    }
    if (containsFourOfaKind(hand)) {
        cout << "Four Of a Kind!" << endl;
        return 0;
    }
    if (containsTwoPair(hand)) {
        cout << "Two Pair!" << endl;
        return 0;
    }
    if (containsThreeOfaKind(hand)) {
        cout << "Three Of A Kind" << endl;
        return 0;
    }
    if (containsPair(hand)) {
        cout << "Pair!" << endl;
        return 0;
    }
}

bool  containsFullHouse(int hand[]) {

    int NUM_CARDS = 5;
    int ThreeOfAKind = 0;

    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++) {
        int matchingCards = 0;

        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
            
            if ( hand[handIndex] == hand[comparisonIndex]){
                ThreeOfAKind = hand[handIndex];
            }
         
            if (ThreeOfAKind == 0) {
                return false;
            }
        }
    }
}


bool containsStraight(int hand[]) {
    
    int NUM_CARDS = 5;
    int lowCard = hand[0];
    
    for (int i = 0; i < NUM_CARDS; i++) {

        if (hand[i] < lowCard) {
            lowCard = hand[i];
        }
    }
    
    for (int i = 1; i<=4; i++) {
        
        bool hasStraight = false;
        for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++){

            if (hand[handIndex] == (lowCard + 1)) {
                hasStraight = true;
            }
        }
    
        if (hasStraight == false) {
            return false;
        }
    }
    
    return true;
}


bool containsFourOfaKind(int hand[])
{
    int NUM_CARDS = 5;

    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++)
    {
        int matchingCards = 0;

        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++)
        {
            if ( hand[handIndex] == hand[comparisonIndex])
                matchingCards++;
         
            if (matchingCards == 3)
                return true;
        }
    }
    return false;

}

bool containsThreeOfaKind(int hand[]) {

    int NUM_CARDS = 5;

    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++) {
        int matchingCards = 0;

        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
            if ( hand[handIndex] == hand[comparisonIndex])
                matchingCards++;
         
            if (matchingCards == 2)
                return true;
        }
    }
    return false;
}

bool  containsTwoPair(int hand[]) {

    int NUM_CARDS = 5;

    int counterVariable = 0;

    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++) {
        
        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
            // find matching pair
            
            if ( hand[handIndex] == hand[comparisonIndex])
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



bool containsPair(int hand[]) {

    int NUM_CARDS = 5;
    
    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++) {
        
        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
    
            // find matching pair
            if ( hand[handIndex] == hand[comparisonIndex])
                return true;
        }
    }
    return false;
}

