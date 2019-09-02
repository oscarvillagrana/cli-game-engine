// Assignment 02 - Blackjack
// Command line game that plays a simplified version of blackjack where we don’t worry about aces and face cards

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int get_random_seed();
int get_random_number();
int get_user_cards();
int get_new_card();

int check_if_dealer_moves(int dlr_total);
int check_who_wins(int usr_total, int dlr_total);
int check_if_bust(int dlr_total, int usr_total);

char check_response(char hit_response);



int main()
{ 
get_random_seed();


int usr_first_cards = 0;

// read in a user response 
char hit_response = y;

int dlr_card = 0;

// a variable to store the total, and a statement to show its value:
int usr_total = 0;

int dlr_first_cards = 0;

int dlr_card = 0;
// Update the total in each loop.
int dlr_total = 0;


// A loop that handles the Play-Again functionality
char play_again = 'y';
while (play_again != 'n')
{  
  cout << "Play again? (y/n): ";
  cin >> play_again;
}
return 0;
}
{

// A loop that handles the Play-Again functionality
char hit_me = 'y';
while (hit_me != 'n')
{
  cout << "Hit? (y/n): ";
  cin >> hit_me;
}
return 0;
}

// blackjack logic
// The player plays before the dealer.  

int usr_first_cards;
usr_first_cards = get_starting_cards();

std::cout << "Your starting cards: " << usr_first_cards << std::endl;

int get_usr_total = 0;

std::cout << "Total: " << usr_total << std::endl;

std::cout << "hit? (y/n): " << std::endl;

cin >> hitMe;

while (hit_me != 'n')
{
  std::cout << "You entered: " << hitMe << std::endl;

  get_new_card(int new_card);
  
  std::cout << "New card: " << usr_card << std::endl;
  
  std::cout << "Total: " << usr_total << std::endl;

// int check_if_bust(int card);
// If the player busts, the dealer automatically wins
  if (usr_total >= 22)
    std::cout << "Bust. " << "You Loose" << std::endl;
}

std::cout << "\n";
  return 0;

// added a dealer to the game

int get_starting_cards(int card);

std::cout << "Dealer has a " << dlr_first_cards << std::endl;

std::cout << "(c to continue)" << std::endl;

cin >> cont; 

while (cont == c)

while check_if_dealer_moves(dlr_total) = y

{
get_new_card(int new_card);

std::cout << "Dealer gets a " << dlr_card << std::endl;

std::cout << "Total: " << dlr_total << std::endl;

// check_if_bust(int card)

char check_response(char hit_response)
{
    ;
}

int check_if_bust(int card);



int check_who_wins(int usr_total, int dlr_total);


std::cout << "Push!" << std::endl;


std::cout << "Dealer Wins!" << std::endl;


/* repeated entry

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


std::cout << "Total: " << usr_total << std::endl;


std::cout << "Play again? (y/n): " << std::endl;

*/

// Address the problem using an iterative approach. 
// Start with a small amount of functionality, and then grow it gradually. 
// This way you can compile and run your program after each statement that you write to make sure everything still works.  


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
int get_user_cards()
{
    int card_1, card_2, card_3, card_4, card_5;
    int total_1, total_2, total_3, total_4;

    card_1 = get_random_number();
    card_2 = get_random_number();
    card_3 = get_random_number();
    card_4 = get_random_number();
    card_5 = get_random_number();
    total_1 = card_1 + card_2;
    total_2 = card_1 + card_2 + card_3;
    total_3 = card_1 + card_2 + card_3 + card_4;
    total_4 = card_1 + card_2 + card_3 + card_4 + card_5;

    cout << "Your starting cards: " << card_1 << "," << card_2 << endl;
    cout << "Total: " << total_1 << endl;

    cout << "New card: " << card_3 << endl;
    cout << "Total: " << total_2 << endl;

    cout << "New card: " << card_4 << endl;
    cout << "Total: " << total_3 << endl;

    cout << "New card: " << card_5 << endl;
    cout << "Total: " << total_4 << endl;

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

/* Testers

int usr_total = 0;
cout << "usr_total?" << endl;
cin >> usr_total;
int dlr_total = 0;
cout << "dlr_total?" << endl;
cin >> dlr_total;

check_if_dealer_moves(dlr_total);
check_who_wins(usr_total, dlr_total);
check_if_bust(dlr_total, usr_total);

*/