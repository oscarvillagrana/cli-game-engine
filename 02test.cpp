// Assignment 02 - Blackjack
// Command line game that plays a simplified version of blackjack where we don’t worry about aces and face cards

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int get_random_seed();
int get_random_number();
int get_starting_cards();
int get_new_card();

int check_if_dealer_moves(int dlr_total);
int check_who_wins(int usr_total, int dlr_total);
int check_if_bust(int dlr_total, int usr_total);


int main()
{
get_random_seed();


int usr_first_cards = 0;
usr_first_cards = get_starting_cards();

std::cout << "Your starting cards: " << usr_first_cards << std::endl;

}

// call this once (and only once) at the beginning of your program
int get_random_seed()
{
// generate a seed using time function to start rand() function
unsigned seed = time(0);
srand(seed);
}

int get_random_number()
{
int random_number;
  // get new card number: up to and including 10 and add one so we never get 0.
random_number = 1 + rand() % 10;
return random_number;
}

// generate and print two random cards. players get two cards
int get_starting_cards()
{
int card1;
int card2;

card1 = get_random_number();
card2 = get_random_number();

cout << card1 << "," << card2 << endl;
}

int get_new_card()
{
int card;
int new_card;
new_card = get_random_number();
cout << new_card << endl;
}

// Check to see if the user busts in each loop
int check_if_bust(int dlr_total, int usr_total)
{
// check if user busts
if (usr_total >= 22)
cout << "Bust. " << "You Loose" << endl;

// check if dealer busts
if (dlr_total >= 22)  
cout << "Dealer Busts. " << "You Win" << endl;
}

int check_if_dealer_moves(int dlr_total)
{
  char moves = 'y';
  while (moves != 'n')
  {
    if (dlr_total < 17)
      {
        moves = 'y';
        // test
        // cout << "yes moves" << endl;
      }
    else 
      moves = 'n'; 
      // test
      // cout << "no moves" << endl;
      return 0;
  }
}
int check_who_wins(int usr_total, int dlr_total)
{
//    player does not win or lose money
if (usr_total == dlr_total)
    cout << "Push. " << "You tie " << endl;
     
//    whoever has the higher total wins
if (dlr_total < usr_total)
cout << "You Win" << endl;
    
if (dlr_total > usr_total)
cout << "You Loose" << endl;
}