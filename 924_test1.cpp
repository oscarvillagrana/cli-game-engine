#include <iostream>

using namespace std;

int print_hand_type(int hand[]);
int collect_values(int hand[]);
bool containsFullHouse(int hand[]);
bool containsThreeOfaKind(int hand[]);
bool containsPair(int hand[]);

int main() 
{

// // Full House: A pair, and a three of a kind
// int hand[] = {2, 2, 2, 3, 3};

int NUM_CARDS = 5;
int hand[5];

// // Straight: Card values can be arranged in order, regardless of the order
// int hand[] = {2, 3, 4, 5, 4};

    print_hand_type(hand);

    collect_values(hand);

    print_hand_type(hand);

    return 0;
}


int print_hand_type(int hand[]) {

    if (containsFullHouse(hand)) {
        cout << "Full House!" << endl;
        return 0;
    }
    // if (containsStraight(hand)) {
    //     cout << "Straight!" << endl;
    //     return 0;
    // }
}

bool containsFullHouse(int hand[]) {

    int NUM_CARDS = 5;
        int counter = 0;
        int ThreeOfAKindCard = 0;
        int pairCard = 0;

    for (int i = 0; i < NUM_CARDS; i++) {
        
        counter = 0;
        

        for (int j = i +1; j < NUM_CARDS; j++) {
            if ( hand[i] == hand[j])
                counter++;
         
            if (counter == 2)
                ThreeOfAKindCard = hand[i];
                pairCard = hand[i];

            if (counter == 3)
                return false;
        }

        for (int j = i +1; j < NUM_CARDS; j++) {
            // find matching pair
    
            if (hand[i] == hand[j])
                hand[i] = pairCard;
            
            if (ThreeOfAKindCard != pairCard)
                return true;

        }    

    }
    return false;
}

int collect_values(int hand[]) {

    int card_1 = 0;
    int card_2 = 0;
    int card_3 = 0;
    int card_4 = 0;
    int card_5 = 0;


    cout << "Enter five numeric cards, no face cards. Use 2 - 9: " << endl;
    cout << "Card 1: " << endl;
    cin >> card_1;

    cout << "Card 2: " << endl;
    cin >> card_2;

    cout << "Card 3: " << endl;
    cin >> card_3;

    cout << "Card 4: " << endl;
    cin >> card_4;

    cout << "Card 5: " << endl;
    cin >> card_5;

    hand[0] = card_1;
    hand[1] = card_2;
    hand[2] = card_3;
    hand[3] = card_4;
    hand[4] = card_5;

}