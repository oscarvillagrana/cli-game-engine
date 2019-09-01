// Assignment 02 - Blackjack
// Command line game that plays a simplified version of blackjack where we don’t worry about aces and face cards

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   
}

// generate and print two random cards. players get two cards
int get_starting_cards(int card)
{
    ;
}
// call this once (and only once) at the beginning of your program to "seed" the random number generator
int get_random_number(int number)
{
    // generate a random number between 1 and 10 with C functions rand() and srand()
    unsigned seed = time(0);
    srand(seed);
;
}
// Generate_new_card in each loop and display the value
int get_new_card(int new_card)
{
    new_card = 1 + rand() % 10;
}
