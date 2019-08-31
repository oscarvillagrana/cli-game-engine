// Assignment 04 - poker_hands

// Reads five cards from the user, then analyzes the cards and prints out the category of poker hand that they represent.

int collect_values()
int card_1 = 0
int card_2 = 0
int card_3 = 0
int card_4 = 0
int card_5 = 0

std::cout << "Enter five numeric cards, no face cards. Use 2 - 9: " << std::endl;
std::cout << "Card 1: " << std::endl;
std::cin >> card_1 >> std::endl;

std::cout << "Card 2: " << std::endl;
std::cin >> card_2 >> std::endl;

std::cout << "Card 3: " << std::endl;
std::cin >> card_3 >> std::endl;

std::cout << "Card 4: " << std::endl;
std::cin >> card_4 >> std::endl;

std::cout << "Card 5: " << std::endl;
std::cin >> card_5 >> std::endl;



Your program should be able to recognize the following hand categories, listed from least valuable to most valuable:

int print_hand_type()

If a hand matches more than one description, the program should print out the most valuable hand type only.




// Each function must accept an int array as a parameter.  
// You can assume that the array will have five elements.  

bool containsPair(int hand[])
Pair
Two of the cards are identical
2, 5, 3, 5, 7

bool  containsTwoPair(int hand[])
Two Pair
Two different pairs
2, 5, 3, 5, 3

bool  containsThreeOfaKind(int hand[])
Three of a kind
Three matching cards
5, 5, 3, 5, 7

bool  containsStraight(int hand[])
Straight
Card values can be arranged in order
3, 4, 5, 6, 7
(A note on straights: a hand is a straight regardless of the order. 
So the values 3, 4, 5, 6, 7 represent a straight; so do the values 7, 4, 5, 6, 3)

bool  containsFullHouse(int hand[])
Full House
A pair, and a three of a kind
5, 7, 5, 7, 7

bool  containsFourOfaKind(int hand[])
Four of a kind
Four matching cards
2, 5, 5, 5, 5

High Card
There are no matching cards, and the hand is not a straight
2, 5, 3, 8, 7
If not one of the better hand types, then it is a High Card hands

// Here is code that tests a containsPair function

int main() {
        int hand[] = {2, 5, 3, 2, 9};

        if (containsPair(hand)) {
                cout << "Pair!" << endl;
        }

        return 0;
}