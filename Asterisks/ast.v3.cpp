
//
// Oscar Villagrana
// This program prints out as many asterisks as the user wants.
//

//TODO: finish test cases


#include <iostream>
#include <stdint.h>
#include <map>
using namespace std;

// TODO: utils
struct preciseInts
{         
   // signed integers precise bits
   int8_t SmallInt = 0;                       //has max of 127
   int16_t MediumInt;
   int32_t LargeInt;
   int64_t HugeInt;

   //unsigned precise integers
   uint8_t SmallUInt = 0;                       //has max of 127
   uint16_t MediumUInt;
   uint32_t LargeUInt;
   int64_t HugeUInt;

};


//-------------------------------------------------------------------------------
// interface
//-------------------------------------------------------------------------------

#pragma region ge_declaration

#ifndef GE_DEF
#define GE_DEF

namespace ge
// gameEngine.h
{
   enum runcode { FAIL = 0, OK = 1, NO_FILE = -1 };

   //-------------------------------------------------------------------------------
   // BASE CLASS - Starts the game with defaults                     
   //-------------------------------------------------------------------------------

   class Game
   {
   public:
      Game(int8_t id = 0, string name = "")
      {};
   private:
      int8_t id = 0;
      string name = "";
      Game() = delete;
   };

   class GameEngine
   {

      string gameToPlay;

      multimap<int,string> games = { {1,"asterisks"},
                                     {2,"poker"} };

   
   public:
      GameEngine() {
      };
   public:
      //TODO:
      ge::runcode Constructor(Game x) {
         cout << "Constructed" << endl;
         //TODO:
         cout << "Welcome to the games" << endl;
         cout << "Which game would you like to play? " << endl;        
         for (auto elem : games) {           
            cout << elem.second << '(' << elem.first << ')' << endl;
         }

         cin >> gameToPlay;
         cout << gameToPlay;
         return OK;
      };
      //TODO:
      ge::runcode Start() {
         cout << "Started" << endl;
      };
   };
}

#pragma endregion

#endif // GE_DEF


//-------------------------------------------------------------------------------
// implementation
//-------------------------------------------------------------------------------

#ifndef ASTERISKS_GAME_DEF
#define ASTERISKS_GAME_DEF


#pragma region ge_implementation
// namespace ge


// ASTERISKS_GAME.cpp
class ASTERISKS_GAME : public ge::Game
{

   // default values

   int asterisksCount = 10;

   enum ALGORITHM
   {
      GO_AGAIN_YES, GO_AGAIN_NO
   };

   string algoInput;

   ASTERISKS_GAME() = delete;
public:

   ALGORITHM algo = GO_AGAIN_NO;

   ASTERISKS_GAME( int8_t id , string name)
      : Game ( id, name )
   {}


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

#pragma endregion

#endif // ASTERISKS_GAME_DEF


int main()
{
   ASTERISKS_GAME asterisks_game(0, "asterisks");
   // cout << "found";
   ge::GameEngine game;
   if (game.Constructor(asterisks_game)) {
      // game.SetValues();
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

