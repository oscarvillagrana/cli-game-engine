// Assignment 02 - Blackjack

// Command line game that plays a simplified version of blackjack where we don’t worry about aces and face cards

// TODO: fix 21 winner!


#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int get_random_seed();
int get_random_number();


int black_jack()
{ 
get_random_seed();


// user
int card_0; 
int card_1;
int new_card;
int total;

card_0 = get_random_number();
card_1 = get_random_number();
total = 0;  
// dealer
int d_card_0;
int d_card_1;
int d_new_card;
int d_total;

d_card_0 = get_random_number();
d_card_1 = get_random_number();
d_new_card = get_random_number();
d_total = 0;

// user
  cout << "Your starting cards: " << card_0 << "," << card_1 << endl;
  total = card_0 + card_1;
  cout << "Total: " << total << endl;

  // A loop that handles the Play-Again functionality
  char play_again = 'y';
  // while (play_again != 'n')
  // get new card
  cout << "hit? (y/n): ";
  cin >> play_again;
  while (play_again != 'n' && total <= 20)
  {  
      new_card = get_random_number();
      // get new card 
      cout << "New card: " << new_card << endl;
      total += new_card;
      cout << "Total: " << total << endl;
      // check if bust
      if (total >= 22)
      { 
        cout << "Bust. " << "You Loose" << endl;
        return 0;
      }
      cout << "hit? (y/n): ";   
      cin >> play_again;
  }
  if (total == 21)
  {
  cout << "Blackjack " << "You Win" << endl;
  return 0;
  }
      // check if bust
  if (total >= 22)
  {
      cout << "Bust. " << "You Loose" << endl;
      return 0;
  }   

// dealer
  cout << "Dealer starting cards: " << d_card_0 << "," << d_card_1 << endl;
  d_total = d_card_0 + d_card_1;
  cout << "Total: " << d_total << endl;

  // A loop that handles the Play-Again functionality
  char d_play_again = 'y';
  while (d_play_again != 'n' && d_total < 17)
  {  
      cout << "(c to continue)";   
      cin >> d_play_again;
      d_new_card = get_random_number();
      // get new card 
      cout << "Dealer gets: " << d_new_card << endl;
      d_total += d_new_card;
      cout << "Total: " << d_total << endl;
      // check if bust
      if (d_total >= 22)
      { 
        cout << "Dealer Busts. " << "You Win" << endl;
        return 0;
      }
  }
  if (d_total == 21)
  {
      cout << "Blackjack " << "You Loose" << endl;
      return 0;
  }
  cout << "Dealer stays with " << d_total << endl;
      // check if bust

// players second turn
  cout << "Your total: " << total << endl;
  cout << "hit? (y/n): ";
  cin >> play_again;
  while (play_again != 'n' && total <= 20)
  {  
      new_card = get_random_number();
      // get new card 
      cout << "New card: " << new_card << endl;
      total += new_card;
      cout << "Total: " << total << endl;
      // check if bust
      if (total >= 22)
      { 
        cout << "Bust. " << "You Loose" << endl;
        return 0;
      }
      cout << "Dealer's total: " << d_total << endl;
      cout << "hit? (y/n): ";   
      cin >> play_again;
  }
  if (total == 21)
  {
  cout << "Blackjack " << "You Win" << endl;
  return 0;
  }
      // check if bust
  if (total >= 22)
  {
      cout << "Bust. " << "You Loose" << endl;
      return 0;
  }   



// check who wins

  //    player does not win or lose money
  if (total == d_total)
      cout << "Push. " << "You tie " << endl;
       
  //    whoever has the higher total wins
  if (d_total < total)
  cout << "You Win" << endl;
      
  if (d_total > total)
  cout << "You Loose" << endl;
      
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

/* Sample Output

Your starting cards: 3,4
Total: 7
hit? (y/n): n
Dealer starting cards: 3,7
Total: 10
(c to continue)c
Dealer gets: 4
Total: 14
(c to continue)c
Dealer gets: 8
Total: 22
Dealer Busts. You Win

// Game 2

Your starting cards: 10,7
Total: 17
hit? (y/n): n
Dealer starting cards: 7,1
Total: 8
(c to continue)c
Dealer gets: 10
Total: 18
Dealer stays with 18
Your total: 17
hit? (y/n): n
You Loose

// Game 3

Your starting cards: 3,6
Total: 9
hit? (y/n): c
New card: 9
Total: 18
hit? (y/n): n
Dealer starting cards: 8,3
Total: 11
(c to continue)c
Dealer gets: 8
Total: 19
Dealer stays with 19
Your total: 18
hit? (y/n): y
New card: 4
Total: 22
Bust. You Loose


*/