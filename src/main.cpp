//-------------------------------------------------------------------------------
//
// Oscar Villagrana
// This program hosts multiple command line games
//
// TODO: fix bug / see output
// TODO: fix bug / pokerhand logic fail
//
//-------------------------------------------------------------------------------


#include <iostream>
#include <vector>
#include <stdint.h>
#include <map>

#include "../utils/utils.cpp"
#include "asterisks.cpp"
#include "blackjack.cpp"
#include "pokerhands.cpp"

using namespace std;
using namespace utils;

//-------------------------------------------------------------------------------
//
// gameEngine.h
// Interface Declaration
//
//-------------------------------------------------------------------------------


#pragma region ge_declaration

#ifndef GE_DEF
#define GE_DEF

#include <unistd.h>           // for sleep func


namespace ge
{

  //-----------------------
  // GAME ENGINE BASE CLASS
  //-----------------------

  enum runcode { FAIL = 0, OK = 1, NO_FILE = -1 };

  struct GameEngine
  {
    // constructors
    GameEngine(){};
    ge::runcode Start();
  };
}


#pragma endregion

#endif // GE_DEF



//-------------------------------------------------------------------------------
//
// gameEngine.h
// Interface Implementation
//
//-------------------------------------------------------------------------------


#pragma region ge_declaration

#ifndef GE_IMPL
#define GE_IMPL

namespace ge
{
   
  // GAME ENGINE / BASE CLASS
  //-------------------------

  ge::runcode GameEngine::Start()
  {

    enum Games
    { 
      Asterisks,
      Black_Jack,
      Poker_Hands,
      Test3,
      Test4,
      Test5,
    };

    map<int,string> games =
    { 
      {0,"Asterisks"},
      {1,"Black Jack"},
      {2,"Poker Hands"},
      {3,"test3"},
      {4,"test4"},
      {5,"test5"},
    };



    bool goAgain = true;
    int sleepTime = 1.5;

    do{

      // goAgain = false;

      msg("Welcome to the games");
      sleep(sleepTime);

      cout << endl;
      for (auto elem : games) { cout << elem.second << '(' << elem.first << ')' << endl;}
      cout << endl;
      sleep(sleepTime);

      msg("Which game would you like to play? ");

      int game_to_play = HandleInputIntRange( 0, games.size() );

      do{

        switch(game_to_play)
        {
          case Asterisks:
            msg(games.at(0));
            asterisks();
            break;

          case Black_Jack:
            msg(games.at(1));
            black_jack();
            break;

          case Poker_Hands:
            msg(games.at(2));
            poker_hands();
            break;

          case Test3:
            msg("3");
            break;

          case Test4:
            msg("4");
            break;

          case Test5:
            msg("5");
            break;

          default:
            msg("Sorry, game not found");
            sleep(sleepTime);

            bool goAgain = true;
            msg("Would you like to play a game? (y/n) [\"y\"]: ");
            goAgain = HandleInputBool();
            if(goAgain == false) {

              msg("See you later!");
              exit(0);
            }

            msg("Which game would you like to play? ");

            // TODO: fix bug / see output
            game_to_play = HandleInputIntRange( 0, games.size() );

            break;
        }
      } while( game_to_play >= games.size() );

      sleep(sleepTime);
      msg( "Go Again? (y/n) [\"y\"]: ");

      goAgain = HandleInputBool();

    } while(goAgain);

    return OK;
  };

}



#pragma endregion

#endif // GE_IMPL



//-------------------------------------------------------------------------------
//
// main.cpp
// Main
//
//-------------------------------------------------------------------------------

// #include <set>



bool testing = false;
// bool testing = true;


void test();


int main()
{
  if(testing == true) { test(); return 0; }

  ge::GameEngine games;
  
  games.Start();

  // TODO: build a construct to return bool
  // if(games.Construct()) {
  // };

  return 0;
}



//-------------------------------------------------------------------------------
//
// UTest.cpp
// Test Cases
//
//-------------------------------------------------------------------------------







void test()
{

}





// see output ...

// Welcome to the games

// Asterisks(0)
// Black Jack(1)
// test2(2)
// test3(3)
// test4(4)
// test5(5)

// Which game would you like to play? 
// 0
// Asterisks
// How many asterisks?: 0

// Go again? (y/n): n
// Go Again? (y/n) ["y"]: 
// Welcome to the games

// Asterisks(0)
// Black Jack(1)
// test2(2)
// test3(3)
// test4(4)
// test5(5)

// Which game would you like to play? 

// Sorry, game not found
// Would you like to play a game? (y/n) ["y"]: 
// y
// Which game would you like to play? 
// 0
// Go Again? (y/n) ["y"]: 
// n



// TODO: fix bug / pokerhand logic fail

// // supposed to be four of a kind
// Enter five numeric cards, no face cards. Use 2 - 9: 
// Card 1: 5
// Card 2: 5
// Card 3: 5
// Card 4: 5
// Card 5: 6
// Full House!
