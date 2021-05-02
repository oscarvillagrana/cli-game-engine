//-------------------------------------------------------------------------------
//
// Oscar Villagrana
// This program prints out as many asterisks as the user wants.
//
// TODO: fix bug / see output
//
//-------------------------------------------------------------------------------


#include <iostream>
#include <vector>
#include <stdint.h>
#include <map>

#include "../utils/utils.cpp"
#include "blackjack.cpp"
#include "asterisks.cpp"

using namespace std;


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
  enum runcode { FAIL = 0, OK = 1, NO_FILE = -1 };
  enum game_enum { ASTERISKS, POKER };
  // enum goAgain { NO, YES }

   //----------------
   // GAME BASE CLASS
   //----------------

  class Game
  {
  private:

    // Game( Game & );                           // no copy constructor
    Game operator = ( Game & );               // no assignment operator
    Game(){};                                 // no default constructor
  public: // Constructors
    uint8_t _id;
    string _name;
    game_enum _game_enum;
  public: // Constructors
    Game( const uint8_t & id, const string & name, const game_enum & game_enum );
  
  public: // Getters
    const uint8_t & id() const;
    const game_enum & get_game_enum() const;
    const string & name() const;
  };

  
  enum goAgain { NO = 0, YES = 1 };  // temp


  //-----------------------
  // GAME ENGINE BASE CLASS
  //-----------------------


  class GameEngine
  {
  private:

  public:
  
  public: // constructors
    GameEngine(){};                           // no default constructor
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
   

  // GAME / BASE CLASS
  //------------------
  

  Game::Game( const uint8_t & id, const string & name, const game_enum & game_enum )
  : _id(id), _name(name), _game_enum(game_enum) {};
  const uint8_t & Game::id() const { return _id; }
  const ge::game_enum & Game::get_game_enum() const { return _game_enum; }
  const string & Game::name() const { return _name; }



  // GAME ENGINE / BASE CLASS
  //-------------------------

  ge::runcode GameEngine::Start()
  {

    enum Games
    { 
      Asterisks,
      Blackjack,
      Test2,
      Test3,
      Test4,
      Test5,
    };

    map<int,string> games =
    { 
      {0,"Asterisks"},
      {1,"Black Jack"},
      {2,"test2"},
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
          case Blackjack:
            msg(games.at(1));
            blackjack();
            msg("1");
            break;
          case Test2:
            msg("2");
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



template <typename T> void disp_v(vector<T> & v)
{
  if(!v.size()) return;
  
  if(typeid(T) == typeid(ge::Game))
  {
    for( ge::Game i : v ){
      cout << i.name() << endl;
    }
  }

  // if(typeid(T) == typeid(bool)) { for(bool e : v) { cout << ( e ? "T" : "F" ) << " "; }}
  // else { for(T e : v) { cout << e << " ";}}

  cout << endl;
}




void test()
{


  // Utils / Templates
  //-----------------------


  msg("msg str", "o" );
  msg( "o" );
  ge::goAgain a = ge::NO;
  msg("msg goAgain", a );
  msg( a );
  const int b = 5;
  msg("msg int", b );
  msg( b );
  const char c = 'o';
  msg("msg char", c );
  msg( c );


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
