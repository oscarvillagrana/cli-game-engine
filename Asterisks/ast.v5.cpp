
//
// Oscar Villagrana
// This program prints out as many asterisks as the user wants.
//

//TODO: finish test cases

#include <iostream>
#include <map>
#include <stdint.h>
#include "ge.h"
#include "asterisks_game.cpp"
using namespace std;




int main()
{

  ASTERISKS_GAME asterisks_game(0, "asterisks");
  const int game_count = 2;
  ge::Game games[game_count];
  games[0] = asterisks_game;
  games[1] = asterisks_game;
  // cout << "found";
  ge::GameEngine game;
  if (game.Start(games)) {
    // game.SetValues();
    // game.OnValueUpdate(demo.algo);     
    // game.Start();
  }
  return 0;
}


// // refactored from:
// int main()
// {
//    int count;
//    char goAgain = 'y';

//    while (goAgain != 'n')
//    {
//       cout << "How many asterisks?: ";
//       cin >> count;
//       for (int i = 0; i < count; i++)
//       {
//          cout << "*";
//       }
//       cout << endl;
//       cout << "Go again? (y/n): ";
//       cin >> goAgain;
//    }
//    return 0;
// }


//-----------
// Test Cases
//-----------

//TODO:
//-----

/* 
[ovillagr@hills ~]$ ./a.out
How many asterisks?: 100
****************************************************************************************************
Go again? (y/n): 
y
How many asterisks?: 0

Go again? (y/n): y
How many asterisks?: 10 10
**********
Go again? (y/n): How many asterisks?: 
Go again? (y/n): y
How many asterisks?: 9 9
*********
Go again? (y/n): How many asterisks?: 0

Go again? (y/n): n
[ovillagr@hills ~]$ 
*/

