//-------------------------------------------------------------------------------
//
// Oscar Villagrana
// This program hosts multiple command line games
//
// TODO: Go Again / handle empty input
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
#include "theleague.cpp"

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


  // GAME ENGINE / BASE CLASS
  //-------------------------

  enum runcode { FAIL = 0, OK = 1, NO_FILE = -1 };

  struct GameEngine
  {

    int sleepTime = 1.5;                // adds time between dialogs
    bool goAgain = true;

    // constructors
    GameEngine(){};
    ge::runcode Start();

    // member functions
    void repeatGame(int (*func)());
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


  // ge namespace for test cases
  map<int,string> game_names =
  { 
    {0,"Asterisks"},
    {1,"Black Jack"},
    {2,"Poker Hands"},
    {3,"The League"},
    {4,"test4"},
    {5,"test5"},
  };

  enum Games
  { 
    Asterisks,
    Black_Jack,
    Poker_Hands,
    The_League,
    Test4,
    Test5,
  };


  void GameEngine::repeatGame(int (*func)())
  {
    bool sameGame = true;
    do
    {
      func();
      // TODO: Go Again / handle empty input
      sameGame = HandleInputBool("Go Again?  (y/n) [\"y\"]: ");
    }
    while(sameGame);
  }

  ge::runcode GameEngine::Start()
  {

    do{

      msg("Welcome to the games");
      sleep(sleepTime);

      cout << endl;
      for (auto elem : game_names) { cout << elem.second << '(' << elem.first << ')' << endl;}
      cout << endl;
      sleep(sleepTime);

      int game_to_play = HandleInputIntRange( "Which game would you like to play? ", 0, game_names.size() );

      switch(game_to_play)
      {
        case Asterisks:
          sleep(sleepTime);
          msg(game_names.at(0));
          repeatGame(asterisks);
          break;

        case Black_Jack:
          sleep(sleepTime);
          msg(game_names.at(1));
          repeatGame(black_jack);
          break;

        case Poker_Hands:
          sleep(sleepTime);
          msg(game_names.at(2));
          poker_hands();
          break;

        case The_League:
          sleep(sleepTime);
          msg(game_names.at(3));
          the_league();
          break;

        case Test4:
          msg("4");
          break;

        case Test5:
          msg("5");
          break;

        default:
          sleep(sleepTime);
          msg("Sorry, game not found");
          game_to_play = HandleInputIntRange( "Which game would you like to play? ", 0, game_names.size() );
          break;
      }

      sleep(sleepTime);

      goAgain = HandleInputBool("Would you like to play another game? (y/n) [\"y\"]: ");

    } while(goAgain);

    msg("See you later!");

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
// testing = true;


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

  // GameEngine::repeatGame(int (*func)())

  // ge::GameEngine games;

  int game_to_play;
  do {
    game_to_play = HandleInputIntRange( "Which game would you like to play? ", 0, ge::game_names.size() );
    cout << game_to_play << endl;
  }
  // while( game_to_play >= ge::game_names.size() );
  while( game_to_play <= ge::game_names.size() );
}






// TODO: fix bug / pokerhand logic fail

// // supposed to be four of a kind
// Enter five numeric cards, no face cards. Use 2 - 9: 
// Card 1: 5
// Card 2: 5
// Card 3: 5
// Card 4: 5
// Card 5: 6
// Full House!
