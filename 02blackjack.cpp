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


int user_goes()
{

    cout << "Your starting cards: " << card_0 << "," << card_1 << endl;
    cout << "Total: " << total_1 << endl;

    // A loop that handles the Play-Again functionality
    char play_again = 'y';
    // while (play_again != 'n')
    // get new card
    cout << "hit? (y/n): ";
    cin >> play_again;
    while (play_again != 'n')
    {  
        cout << "New card: " << card_2 << endl;
        cout << "Total: " << total_2 << endl;
        // check if bust
        if (total_2 >= 22)
        {
            cout << "Bust. " << "You Loose" << endl;
            return 0;
        }
        // get new card 
        cout << "hit? (y/n): ";
        cin >> play_again;
        while (play_again != 'n')
        {
            cout << "New card: " << card_3 << endl;
            cout << "Total: " << total_3 << endl;
            // check if bust
            if (total_3 >= 22)
            {
                cout << "Bust. " << "You Loose" << endl;
                return 0;
            }
            // get new card 
            cout << "hit? (y/n): ";
            cin >> play_again;
            while (play_again != 'n')
            {
                cout << "New card: " << card_4 << endl;
                cout << "Total: " << total_4 << endl;
                // check if bust
                if (total_4 >= 22)
                {
                    cout << "Bust. " << "You Loose" << endl;
                    return 0;
                }
                // get new card 
                cout << "hit? (y/n): ";
                cin >> play_again;
                while (play_again != 'n')
                {
                    cout << "New card: " << card_5 << endl;
                    cout << "Total: " << total_5 << endl;
                    // check if bust
                    if (total_4 >= 22)
                    {
                        cout << "Bust. " << "You Loose" << endl;
                        return 0;
                    }
                    // get new card 
                    cout << "hit? (y/n): ";
                    cin >> play_again;
                    while (play_again != 'n')
                    {
                        cout << "New card: " << card_6 << endl;
                        cout << "Total: " << total_6 << endl;
                        // check if bust
                        if (total_4 >= 22)
                        {
                            cout << "Bust. " << "You Loose" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
}


int dlr_goes()
{
char d_continue = 'c';
char moves = 'y';

cout << "Dealer starting cards: " << d_card_0 << "," << d_card_1 << endl;
cout << "Total: " << d_total_1 << endl;

// suspense continue
cout << "(c to continue)" << endl;
cin >> d_continue; 

// check if dealer moves
if (d_total_1 < 17)
{
cout << "Dealer gets: " << d_card_2 << endl;
cout << "Total: " << d_total_2 << endl;
}
else
    cout << "Dealer stays " << endl;

// check if bust
if (d_total_2 >= 22)
{
cout << "Dealer Busts. " << "You Win" << endl;
return 0;
}
cout << "(c to continue)" << endl;
cin >> d_continue; 

// check if dealer moves
if (d_total_2 < 17)

cout << "Dealer gets: " << d_card_3 << endl;
cout << "Total: " << d_total_3 << endl;
else
    cout << "Dealer stays " << endl;

// check if bust
if (d_total_3 >= 22)

cout << "Dealer Busts. " << "You Win" << endl;
return 0;

cout << "(c to continue)" << endl;
cin >> d_continue; 

// check if dealer moves
if (d_total_3 < 17)

cout << "Dealer gets: " << d_card_4 << endl;
cout << "Total: " << d_total_4 << endl;
else
    cout << "Dealer stays " << endl;

// check if bust
if (d_total_4 >= 22)

cout << "Dealer Busts. " << "You Win" << endl;
return 0;

}
// Address the problem using an iterative approach. 
// Start with a small amount of functionality, and then grow it gradually. 
// This way you can compile and run your program after each statement that you write to make sure everything still works.  


// generate and print two random cards. players get two cards
int get_user_cards()
{
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