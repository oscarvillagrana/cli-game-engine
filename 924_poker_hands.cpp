// Assignment 04 - poker_hands
// Reads five cards from the user, then analyzes the cards and prints out the category of poker hand that they represent.

#include <iostream>

using namespace std;

int collect_values(int hand[]);
int print_hand_type(int hand[]);
bool containsFullHouse(int hand[]);
bool containsStraight(int hand[]);
bool containsFourOfaKind(int hand[]);
bool containsThreeOfaKind(int hand[]);
bool containsTwoPair(int hand[]);
bool containsPair(int hand[]);
int highCard(int hand[]);

int main() 
{
    int NUM_CARDS = 5;
    int hand[NUM_CARDS]; 

    collect_values(hand);

    print_hand_type(hand);

    return 0;
}

int collect_values(int hand[]) {

    int card_1 = 0;
    int card_2 = 0;
    int card_3 = 0;
    int card_4 = 0;
    int card_5 = 0;


    cout << "Enter five numeric cards, no face cards. Use 2 - 9: " << endl;
    cout << "Card 1: ";
    cin >> card_1;

    cout << "Card 2: ";
    cin >> card_2;

    cout << "Card 3: ";
    cin >> card_3;

    cout << "Card 4: ";
    cin >> card_4;

    cout << "Card 5: ";
    cin >> card_5;

    hand[0] = card_1;
    hand[1] = card_2;
    hand[2] = card_3;
    hand[3] = card_4;
    hand[4] = card_5;

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
    if (!containsPair(hand)) {
        cout << "Your highest card:" << endl;
        highCard(hand);
        return 0;
    }
}

// Full House: A pair, and a three of a kind
// 5, 7, 5, 7, 7
bool containsFullHouse(int hand[]) {

    int NUM_CARDS = 5;
    int ThreeOfAKindCard = 0;
    int pairCard = 0;

    for (int handIndex = 0; handIndex < NUM_CARDS; handIndex++) {
        int matchingCards = 0;
        

        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
            if ( hand[handIndex] == hand[comparisonIndex])
                matchingCards++;
         
            if (matchingCards == 2)
                ThreeOfAKindCard = hand[handIndex];
        }

        for (int comparisonIndex = handIndex +1; comparisonIndex < NUM_CARDS; comparisonIndex++) {
            // find matching pair
    
            if (hand[handIndex] == hand[comparisonIndex])
                hand[handIndex] = pairCard;
            if (ThreeOfAKindCard != pairCard)
                return true;
        }
    }
    return false;
}



// Straight: Card values can be arranged in order, regardless of the order
// int hand[] = {2, 3, 4, 5, 4};
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

            if (hand[handIndex] == (lowCard + i)) {
                hasStraight = true;
            }
        }
    
        if (hasStraight == false) {
            return false;
        }
    }
    return true;
}


// Four of a kind: Four matching cards
// int hand[] = {2, 5, 5, 5, 5};
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

// Three of a kind: Three matching cards
// int hand[] = {5, 5, 3, 5, 7};
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


// Two Pair: Two different pairs
// int hand[] = {2, 5, 3, 5, 3};
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


// Pair
// int hand[] = {2, 5, 3, 2, 9};
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

// High Card:
// If not one of the better hand types, then it is a High Card hands
// 2, 5, 3, 8, 7
int highCard(int hand[]) {

    int NUM_CARDS = 5;
    int highCard = hand[0];
    for (int i=0; i< NUM_CARDS; i++) {
        if (hand[i] > highCard);
            highCard = hand[i];
    }
    return highCard;
}
