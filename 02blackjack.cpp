// Assignment 02 - Blackjack
// Command line game that plays a simplified version of blackjack where we don’t worry about aces and face cards

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   int count;
   char goAgain = 'y';
   while (goAgain != 'n')
   {



      cout << "How many asterisks?: ";
      cin >> count;
      for (int i = 0; i < count; i++)
      {
      cout << "*";
      }
      cout << endl;
      cout << "Go again? (y/n): ";
      cin >> goAgain;






   }
   return 0;
}



int generate_random_card() 

int card_1 = 0
int card_2 = 0


// First card: 3
std::cout << card_1 << std::endl;


int total = 0

// generate and print two random cards
std::cout << card_1 << "," << card_2 << std::endl;

// add a variable to store the total, and a statement to show its value:
int new_total = 0

std::cout << new_total << std::endl;

// read in a user response 
// print out the value that was entered
std::cout << "Do you want another card? (y/n): " << std::endl;
char user_response = y
std::cout << "You entered: " << user_response << std::endl;

// add a loop, without yet adding the blackjack logic
> First cards: 3, 2
> Total: 5
> Do you want another card? (y/n): y
> Do you want another card? (y/n): y
> Do you want another card? (y/n): n

Now move the display of the total to the loop
> First cards: 3, 2
> Total: 5
> Do you want another card? (y/n): y
> Total: 5
> Do you want another card? (y/n): y
> Total: 5
> Do you want another card? (y/n): n


Your next steps might be something like this:

// Generate_new_card in each loop and display the value
// Update the total in each loop.

// Check to see if the user busts in each loop
// Wrap the game in loop that handles the Play-Again functionality

int current_cards = 0;
int total = 0;

srand() -- you will need to call this once (and only once) at the beginning of your program to "seed" the random number generator, 
so that every time you run your program, you get different random numbers.  If you don't, you'll get the same "random" numbers every time you run the program!  
Once you have called srand() once in your program, you should not call it again.


hand:

players get two cards

if (hand >= 22)
    std::cout << "Bust" << std::endl;

each time the player gets a card

generate a random number between 1 and 10 with C functions rand() and srand()

> The dealer starts with a 10
std::cout << "Your first cards: " << card_1 << "," << card_2 << std::endl;
std::cout << "Total: " << total_1 << std::endl;
std::cout << "hit? (y/n): " << std::endl;
std::cout << "Card: " << card_1 << std::endl;
std::cout << "Total: " << total_2 << std::endl;
std::cout << "hit? (y/n): " << std::endl;
std::cout << "Dealer has a " << dealer1 << std::endl;
std::cout << "(c to continue)" << std::endl;
std::cout << "Dealer gets a " << dealer2 << std::endl;
std::cout << "Total: " << dealer1 + dealer2 << std::endl;
std::cout << "Card: " << card_1 << std::endl;
std::cout << "Total: " << total_2 << std::endl;
std::cout << "hit? (y/n): " << std::endl;
std::cout << "Card: " << card_1 << std::endl;
std::cout << "Total: " << total_3 << std::endl;
std::cout << "hit? (y/n): " << std::endl;
std::cout << "Card: " << card_1 << std::endl;
std::cout << "Total: " << total_4 << std::endl;
std::cout << "Push!" << std::endl;
std::cout << "Dealer Wins!" << std::endl;
std::cout << "Total: " << total_4 << std::endl;

std::cout << "Play again? (y/n): " << std::endl;

// Address the problem using an iterative approach. 
// Start with a small amount of functionality, and then grow it gradually. 
// This way you can compile and run your program after each statement that you write to make sure everything still works.  
// If you try to write it all at once you may have problems finding bugs.


// add a dealer to the game
// There are three important blackjack rules to include:

The player plays before the dealer.  

If the player busts, the dealer automatically wins

if total < 17 
    dealers must take more cards
if dealer =< 22 (bust)
    player wins.
if the player == dealer (push)
    player does not win or lose money.

Otherwise, whoever has the higher total wins.