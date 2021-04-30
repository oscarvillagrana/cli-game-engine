
//
// Oscar Villagrana
// This program prints out as many asterisks as the user wants.
//


#include <iostream>
#include <vector>
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
  private:
    uint8_t _id = 0;
    string _name = "";

    // Game( Game & );                           // no copy constructor
    Game operator = ( Game & );               // no assignment operator
    Game(){};                                 // no default constructor

  public: // Constructors
    Game( const uint8_t & id, const string & name );
  
  public: // Member functions
    const uint8_t & id() const;
    const string & name() const;
  };

  class GameEngine
  {
    enum goAgain { NO = 0, YES = 1 };
    char _goAgain = 'n';
    goAgain _goAgain2 = NO;

    string _gameToPlay;
    string _gameSelected = "NONE";

    // vec.reserve(2);s

    // multimap<int,string> g = { {1,"asterisks"},
    //                                {2,"poker"} };
    // cout << g.second << '(' << g.first << ')' << endl;
    GameEngine(){};                           // no default constructor
  
  public: // member functions
    std::vector<ge::Game> _games;
    //TODO:
    GameEngine(std::vector<ge::Game> vec);
    //TODO:
    ge::runcode start(string game);
    // //TODO: 
    char setGoAgain(char c);
    char getGoAgain();
    goAgain setGoAgain2(char c);
    goAgain getGoAgain2();
    string setGameSelected(string s);
    string getGameSelected();
    // std::vector<<ge::Game> getGames();
  };
}


#pragma endregion

#endif // GE_DEF



//-------------------------------------------------------------------------------
// gameEngine.h



//-------------------------------------------------------------------------------
// Interface Implementation
//-------------------------------------------------------------------------------

#pragma region ge_declaration

#ifndef GE_IMPL
#define GE_IMPL

namespace ge
{
   

  //-------------------------------------------------------------------------------
  // BASE CLASS - Starts the game with defaults                     
  //-------------------------------------------------------------------------------

  Game::Game( const uint8_t & id, const string & name )
  : _id(id), _name(name) {};
  const uint8_t & Game::id() const { return _id; }
  const string & Game::name() const { return _name; }

  // GameEngine::GameEngine(){};

  //TODO:
  GameEngine::GameEngine(std::vector<ge::Game> vec) : _games(vec)
  {
    cout << "Constructed" << endl;
  };
    //TODO:
  ge::runcode GameEngine::start(string game) 
  {
    cout << "Started" << endl;
    //TODO:
    cout << "Welcome to the games" << endl;
    cout << "Which game would you like to play? " << endl;        
    for (auto g : _games ) {

      cout << g.name() << '(' << int(g.id()) << ')' << endl;
    }

    cin >> _gameSelected;
    cout << _gameSelected << endl;
    // return OK;
  };

  // std::vector<<ge::Game> getGames() { return _games };
  char GameEngine::setGoAgain(char c) { _goAgain = c; };
  char GameEngine::getGoAgain() { return _goAgain; };

  string GameEngine::setGameSelected(string s) { _gameSelected = s; };
  string GameEngine::getGameSelected() { return _gameSelected; };

  GameEngine::goAgain GameEngine::setGoAgain2(char c) 
  { 
    if( c == 'y') { _goAgain2 = YES; } 
    else {   _goAgain2 = NO; }
  };
  
  GameEngine::goAgain GameEngine::getGoAgain2() 
  { 
  return _goAgain2; 
  };



}



#pragma endregion

#endif // GE_IMPL



//-------------------------------------------------------------------------------
// ASTERISKS_GAME.cpp



#ifndef ASTERISKS_GAME_DEF
#define ASTERISKS_GAME_DEF


#pragma region ge_implementation
// namespace ge


class ASTERISKS_GAME : public ge::Game
{
   int asterisksCount = 10;
   enum ALGORITHM { GO_AGAIN_YES, GO_AGAIN_NO };
   string algoInput;
   // ASTERISKS_GAME() {};

public:
  ALGORITHM algo = GO_AGAIN_NO;
  ASTERISKS_GAME( int8_t id , string name)
    : Game ( id, name ) {}

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



//-------------------------------------------------------------------------------
// main.cpp



//-------------------------------------------------------------------------------
// Main
//-------------------------------------------------------------------------------



void test();

bool testing = false;
// bool testing = true;

int main()
{
  if(testing == true) { test(); return 0; }

  ASTERISKS_GAME asterisks_game(0, "asterisks");

  std::vector<ge::Game> vec;
  vec.reserve(2);
  vec.emplace_back(uint8_t(0), string("asterisks"));
  vec.emplace_back(1, "poker");

  // TODO: convert int to string
  // cout << 0 << endl;
  
  ge::GameEngine games(vec);

  if (games.start(asterisks_game.name())) {

      for( ge::Game i : vec ){
        cout << int(i.id()) << endl;
      }

    // game.SetValues();
    // game.OnValueUpdate(demo.algo);     
    // game.start();
  }



  return 0;
}



//-------------------------------------------------------------------------------
// UTest.cpp


//-------------------------------------------------------------------------------
// Test Cases
//-------------------------------------------------------------------------------



void test()
{
  
  // integral sizes
  //---------------

  // uint8_t umax = 255;    cout << int(umax) << endl;
  // int8_t imax = 127;     cout << int(imax) << endl;
  // int8_t imin = -128;    cout << int(imin) << endl;


  // Game constructors
  //------------------

  // ge::Game f(int8_t(4), string("yep"));
  // ge::Game g(3,"word");

  // // print results
  // cout << f.name() << endl;
  // cout << g.name() << endl;


  // Vector constructors
  //--------------------

  std::vector<ge::Game> vec;
  vec.reserve(2);
  vec.emplace_back(uint(0), string("asterisks"));
  vec.emplace_back(uint8_t(1), "poker");

  for( ge::Game i : vec ){
    cout << i.name() << endl;
  }


  // Go Again
  //------------

  ge::GameEngine games(vec);
  games.setGoAgain2('y');  
    // print results
  cout << games.getGoAgain2() << endl;


  // Game Engine
  //------------

  // manual construtors with normal array not fun
  // ge::Game games[2] = { {4,"yep"},
  //                       {3,"word"}
  //                     };


  ge::GameEngine a(vec);
  a.setGoAgain('y');
  cout << a.getGoAgain() << endl;
  a.start(a.getGameSelected());
}


// int asterisks()
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