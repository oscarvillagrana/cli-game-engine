
//
// Oscar Villagrana
// This program prints out as many asterisks as the user wants.
//

//TODO: finish test cases


#include <iostream>
#include <map>
using namespace std;

#ifndef ASTERISKS_GAME_DEF
#define ASTERISKS_GAME_DEF


//-------------------------------------------------------------------------------
// interface
//-------------------------------------------------------------------------------


namespace ast
// gameEngine.h
{
   enum runcode { FAIL = 0, OK = 1, NO_FILE = -1 };


   //-------------------------------------------------------------------------------
   // GAME ENGINE BASE CLASS - Starts the game with defaults                     
   //-------------------------------------------------------------------------------
   class GameEngine
   {

      string gameToPlay;

      multimap<int,string> games = { {1,"asterisks"},
                                     {2,"poker"} };

   
   public:
      GameEngine() {
         //TODO:
         cout << "Welcome to the games" << endl;

         cout << "Which game would you like to play? " << endl;
         
         for (auto elem : games) {
            
            cout << elem.second << '(' << elem.first << ')' << endl;

         }

         cin >> gameToPlay;
         cout << gameToPlay;
      };
   public:
      //TODO:
      ast::runcode Constructor(int x) {
         cout << "Constructed" << endl;
         return OK;
      };
      //TODO:
      ast::runcode Start() {
         cout << "Started" << endl;
      };
   };
}

#endif // ASTERISKS_GAME_DEF


//-------------------------------------------------------------------------------
// implementation
//-------------------------------------------------------------------------------


// ASTERISKS_GAME.cpp
class ASTERISKS_GAME : public ast::GameEngine 
{

   // default values

   int asterisksCount = 10;

   enum ALGORITHM
   {
      GO_AGAIN_YES, GO_AGAIN_NO
   };

   string algoInput;

public:

   ALGORITHM algo = GO_AGAIN_NO;


   bool SetValues()
   {

      cout << "Number of Asterisks [" << asterisksCount << "]: ";
      cin >> asterisksCount;

      cout << "Name of Algorithm [" << algo << "]: ";
      cin >> algoInput;

      return true;
   }

   bool OnValueUpdate( ASTERISKS_GAME::ALGORITHM algoInput )
   {
      algo = algoInput;

      switch (algo)
      {
         case GO_AGAIN_YES:
            cout << "go again yes" << endl;
            break;

         case GO_AGAIN_NO:
            cout << "go again no" << endl;
            break;
      }

      return true;
   
   }

   void Start() {
      for (int i = 0; i < asterisksCount; i++)
      {
         cout << "*";
      }
      cout << endl;
   }

};


int main()
{
   ASTERISKS_GAME game;
   if (game.Constructor(0)) {
      game.SetValues();
      // game.OnValueUpdate(demo.algo);     
      game.Start();
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

