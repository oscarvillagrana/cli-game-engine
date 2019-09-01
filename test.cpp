// Assignment 02 - Blackjack
// Command line game that plays a simplified version of blackjack where we don’t worry about aces and face cards

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

// generate and print two random cards. players get two cards
int get_starting_cards(int card);
// call this once (and only once) at the beginning of your program to "seed" the random number generator
int get_random_number(int number);
// Generate_new_card in each loop and display the value
int get_new_card(int new_card);
// Check to see if the user busts in each loop
int check_if_bust(int card);
char check_response(char hit_response);
int check_if_dealer_moves(int dlr_total);
int check_who_wins(int usr_total, int dlr_total);

int main()
{
// generate a random number between 1 and 10 with C functions rand() and srand()
int card = 0;
unsigned seed = time(0);
srand(seed);

int new_card = 0;
int usr_first_cards = 0;
int usr_card = 0;
// a variable to store the total, and a statement to show its value:
int usr_total = 0;
// read in a user response 
char hit_response = y;

int dlr_first_cards = 0;
int dlr_card = 0;
// Update the total in each loop.
int dlr_total = 0;

char hitMe = 'y';
while (hitMe != 'n')
{

new_card = 1 + rand() % 10;


std::cout << "Your starting cards: " << usr_first_cards << std::endl;

std::cout << "Total: " << usr_total << std::endl;

std::cout << "hit? (y/n): " << std::endl;

cin >> hitMe;

std::cout << "Card: " << usr_card << std::endl;

std::cout << "Total: " << usr_total << std::endl;

std::cout << "hit? (y/n): " << std::endl;

std::cin >> hit_response >> std::endl; 

std::cout << "You entered: " << user_response << std::endl;


}
return 0;
}