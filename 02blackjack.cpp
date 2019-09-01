// Assignment 02 - Blackjack
// Command line game that plays a simplified version of blackjack where we don’t worry about aces and face cards

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int get_starting_cards(int card);
int get_random_number(int number);
int get_new_card(int card);
    new_card = 1 + rand() % 10;
int check_if_bust(int card);
char check_response(char hit_response);
int check_if_dealer_moves(int dlr_total);
int check_who_wins(int usr_total, int dlr_total);


int main()
{ 
    // generate a random number between 1 and 10 with C functions rand() and srand()
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


// Wrap the game in loop that handles the Play-Again functionality
   char hitMe = 'y';
   while (hitMe != 'n')
   {
      new_card = 1 + rand() % 10;
      cout << card << std::endl;
      cout << "Hit? (y/n): ";
      cin >> hitMe;
   }
   return 0;
}

// Logic

std::cout << "Your starting cards: " << usr_first_cards << std::endl;

std::cout << "Total: " << usr_total << std::endl;

std::cout << "hit? (y/n): " << std::endl;

cin >> hitMe;

std::cout << "Card: " << usr_card << std::endl;

std::cout << "Total: " << usr_total << std::endl;

std::cout << "hit? (y/n): " << std::endl;

std::cin >> hit_response >> std::endl; 

std::cout << "You entered: " << user_response << std::endl;


std::cout << "Dealer has a " << dlr_first_cards << std::endl;

std::cout << "(c to continue)" << std::endl;

std::cout << "Dealer gets a " << dlr_card << std::endl;

std::cout << "Total: " << dlr_total << std::endl;


std::cout << "Card: " << usr_card << std::endl;

std::cout << "Total: " << usr_total << std::endl;

std::cout << "hit? (y/n): " << std::endl;


std::cout << "Card: " << usr_card << std::endl;

std::cout << "Total: " << usr_total << std::endl;

std::cout << "hit? (y/n): " << std::endl;

std::cin >> hit_response >> std::endl; 

std::cout << "You entered: " << hit_response << std::endl;

std::cout << "Card: " << usr_card << std::endl;

std::cout << "Total: " << usr_total << std::endl;

std::cout << "Push!" << std::endl;


std::cout << "Dealer Wins!" << std::endl;

std::cout << "Total: " << usr_total << std::endl;


std::cout << "Play again? (y/n): " << std::endl;


// Address the problem using an iterative approach. 
// Start with a small amount of functionality, and then grow it gradually. 
// This way you can compile and run your program after each statement that you write to make sure everything still works.  


// blackjack logic

// The player plays before the dealer.  

// If the player busts, the dealer automatically wins
if (usr_total >= 22)
    std::cout << "Bust. " << "You Loose" << std::endl;

// added a dealer to the game
if (dlr_total < 17)
    get_new_card()

if (dlr_total =< 22)  
    "Bust. " << "You win " 

if (usr_total == usr_total)
    "Push. " << "You tie "
//    player does not win or lose money

else
//    whoever has the higher total wins
if (dlr_total < usr_total)
    "You Win"
if (dlr_total > usr_total)
    "You Loose"


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
}
// Generate_new_card in each loop and display the value
int get_new_card(int new_card)
{
    new_card = 1 + rand() % 10;
}
// Check to see if the user busts in each loop
int check_if_bust(int card)
{
    ;
}
char check_response(char hit_response)
{
    ;
}
int check_if_dealer_moves(int dlr_total)
{
    ;
}
int check_who_wins(int usr_total, int dlr_total)
{
    ;   
}