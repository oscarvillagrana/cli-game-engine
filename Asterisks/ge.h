
//
// Oscar Villagrana
// This program prints out as many asterisks as the user wants.
//

//TODO: finish test cases


#include <iostream>
#include <map>
#include <stdint.h>
// #include "asterisks_game.cpp"
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
// Interface Declaration
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
    int8_t _id = 0;
    string _name = "";
    Game(){};

  protected:
    Game( const int8_t & id, const string & name);
    // : _id(id), _name(name);

  };

  class GameEngine
  {
    string _gameToPlay;
    multimap<int,string> games = { {1,"asterisks"},
                                   {2,"poker"} };

    // const int _game_max = 10;
    // Game games[_game_max];
  public:
    GameEngine();
  public:
    //TODO:
    GameEngine(Game x);
    //TODO:
    ge::runcode Start(Game x);
  };
}


#pragma endregion

#endif // GE_DEF


//-------------------------------------------------------------------------------
// Interface Implementation
//-------------------------------------------------------------------------------

#pragma region ge_declaration

#ifndef GE_IMPL
#define GE_IMPL

namespace ge
// gameEngine.h
{
   

   //-------------------------------------------------------------------------------
   // BASE CLASS - Starts the game with defaults                     
   //-------------------------------------------------------------------------------

   Game::Game( const int8_t & id, const string & name)
   {
   // public:
   //    Game(int8_t id = 0, string name = "")
   //    {};
   // private:
      
      
   //    Game() = delete;
   };

   GameEngine::GameEngine()
   {

   };

   //TODO:
   GameEngine::GameEngine(Game x) 
   {
      cout << "Constructed" << endl;
      //TODO:
      cout << "Welcome to the games" << endl;
      cout << "Which game would you like to play? " << endl;        
      for (auto elem : games) {           
         cout << elem.second << '(' << elem.first << ')' << endl;
      }

      cin >> _gameToPlay;
      cout << _gameToPlay;
      // return OK;
   };
      //TODO:
   ge::runcode GameEngine::Start() {
      cout << "Started" << endl;
   };
}



#pragma endregion

#endif // GE_IMPL
