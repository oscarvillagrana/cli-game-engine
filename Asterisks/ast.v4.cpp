
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
    int8_t _id = 0;
    string _name = "";

    // Game( Game & );                           // no copy constructor
    Game operator = ( Game & );               // no assignment operator
    Game(){};                                 // no default constructor

  public: // Constructors
    Game( const int8_t & id, const string & name );
  
  public: // Member functions
    const int8_t & id() const;
    const string & name() const;
  };

  class GameEngine
  {
    char _goAgain = 'n';
    std::vector<ge::Game> vec;
    // vec.reserve(2);

    string _gameToPlay;
    
    multimap<int,string> games = { {1,"asterisks"},
                                   {2,"poker"} };

    GameEngine(){};                           // no default constructor
  
  public: // member functions
    //TODO:
    GameEngine(std::vector<ge::Game> vec);
    //TODO:
    ge::runcode Start(Game x);
    // //TODO: 
    char setGoAgain(char x);
    char getGoAgain();
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

  Game::Game( const int8_t & id, const string & name )
  : _id(id), _name(name) {};
  const int8_t & Game::id() const { return _id; }
  const string & Game::name() const { return _name; }

  // GameEngine::GameEngine(){};

  //TODO:
  GameEngine::GameEngine(std::vector<ge::Game> vec) 
  {
    cout << "Constructed" << endl;
  };
    //TODO:
  ge::runcode GameEngine::Start(Game x) {
    cout << "Started" << endl;
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

  char GameEngine::setGoAgain(char x) {_goAgain = x; };
  char GameEngine::getGoAgain() { return _goAgain; };


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

// bool testing = false;
bool testing = true;

int main()
{
  if(testing == true) { test(); return 0; }

  ASTERISKS_GAME asterisks_game(0, "asterisks");

  std::vector<ge::Game> vec;
  vec.reserve(2);
  vec.emplace_back(int(0), string("asterisks"));
  vec.emplace_back(1, "poker");

  ge::GameEngine game(vec);

  if (game.Start(asterisks_game)) {
    // game.SetValues();
    // game.OnValueUpdate(demo.algo);     
    // game.Start();
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
  
  // test Game constructors
  ge::Game f(int8_t(4), string("yep"));
  ge::Game g(3,"word");

  // print results
  cout << f.name() << endl;
  cout << g.name() << endl;

  // test Vector constructors
  std::vector<ge::Game> vec;
  vec.reserve(2);
  vec.emplace_back(int(0), string("asterisks"));
  vec.emplace_back(1, "poker");

  // print results
  for( ge::Game i : vec ){
    cout << i.name() << endl;
  }

  // test GameEngine 
  ge::GameEngine a(vec);
  a.getGoAgain();
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