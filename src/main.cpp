//-------------------------------------------------------------------------------
//
// Oscar Villagrana
// This program prints out as many asterisks as the user wants.
//
// TODO: Game Engine / Template Implementation
// TODO: Start Game Engine / convert from str to enum
//
//-------------------------------------------------------------------------------


#include <iostream>
#include <vector>
#include <stdint.h>
#include <map>
#include "utils/utils.cpp"
using namespace std;


//-------------------------------------------------------------------------------
//
// utils.h
// Interface Decleration
//
//-------------------------------------------------------------------------------



// template <typename T> void disp_v(vector<T> & v);
// template <typename T> void msg( T & m );
// template <typename T> void msg( const char * m, const T & v );



// template <typename T> 
// void msg( T & m ) { cout << m << endl; }
// template <typename T> 
// void msg( const char * m, const T & v ) { cout << m << ": " << v << endl; }


// // TODO: utils / ints used
// struct preciseInts
// {         
//    // signed integers precise bits
//    int8_t SmallInt = 0;                       //has max of 127
//    int16_t MediumInt;
//    int32_t LargeInt;
//    int64_t HugeInt;

//    //unsigned precise integers
//    uint8_t SmallUInt = 0;                       //has max of 127
//    uint16_t MediumUInt;
//    uint32_t LargeUInt;
//    int64_t HugeUInt;

// };



//-------------------------------------------------------------------------------
//
// gameEngine.h
// Interface Declaration
//
//-------------------------------------------------------------------------------


#pragma region ge_declaration

#ifndef GE_DEF
#define GE_DEF

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
    enum goAgain { NO = 0, YES = 1 };
    char _goAgainChar = 'n';
  public:
    goAgain _goAgainEnum = NO;
    string _gameToPlay;
    string _gameSelected = "NONE";

    // vec.reserve(2);s

    // multimap<int,string> g = { {1,"asterisks"},
    //                                {2,"poker"} };
    // cout << g.second << '(' << g.first << ')' << endl;
    GameEngine(){};                           // no default constructor
  
  public: // constructors
    GameEngine(std::vector<ge::Game> vec);
    std::vector<ge::Game> _games;
    ge::runcode start(game_enum game);
  public: // getters
    char      getGoAgainChar();
    goAgain   getGoAgainEnum();
    string    setGameSelected(string s);
    string    getGameSelected();
  public: // setters
    char      setGoAgain(char c);
    goAgain   setGoAgainChar(char c);
    goAgain   setGoAgainString(string s);
    // template <typename T> void SetGoAgain( T & m );
    // template <typename T> void SetGoAgain( const char * m, const T & v );

    // TODO: Game Engine / Templates
    template <typename T> 
    void SetGoAgain( T & s ) { 
      if( s == "y") { _goAgainEnum = YES; }
      else { _goAgainEnum = NO; }
    }
    template <typename T> 
    void SetGoAgain( const char * m, const T & v ) { cout << m << ": " << v << endl; }


    // std::vector<<ge::Game> getGames();
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

  // GameEngine::GameEngine(){};

  GameEngine::GameEngine(std::vector<ge::Game> vec) : _games(vec)
  {
    // cout << "Constructed" << endl;
  };

  ge::runcode GameEngine::start(ge::game_enum game) 
  {
    // cout << "Started" << endl;
    cout << "Welcome to the games" << endl;
    cout << "Which game would you like to play? " << endl;        


    // for (auto g : _games ) {
    //   cout << g.name() << '(' << int(g.id()) << ')' << endl;
    // }

    cin >> _gameSelected;
    // cout << _gameSelected << endl;
    // return OK;
  };


  // getters
  char GameEngine::getGoAgainChar() { return _goAgainChar; };
  GameEngine::goAgain GameEngine::getGoAgainEnum() { return _goAgainEnum; };

  // setters
  string GameEngine::setGameSelected(string s) { _gameSelected = s; };
  string GameEngine::getGameSelected() { return _gameSelected; };

  // std::vector<<ge::Game> getGames() { return _games };
  char GameEngine::setGoAgain(char c)
  { 
    if( c == 'y') { _goAgainEnum = YES; }
    else { _goAgainEnum = NO; }
  }; 

  GameEngine::goAgain GameEngine::setGoAgainChar(char c) 
  { 
    if( c == 'y') { _goAgainEnum = YES; } 
    else {  _goAgainEnum = NO; }
  };

  GameEngine::goAgain GameEngine::setGoAgainString(string s) 
  { 
    if( s == "y") { _goAgainEnum = YES; } 
    else {  _goAgainEnum = NO; }
  };

}



#pragma endregion

#endif // GE_IMPL



//-------------------------------------------------------------------------------
//
// ASTERISKS_GAME.cpp
// Game 0
//
//-------------------------------------------------------------------------------



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
  ASTERISKS_GAME( int8_t id , string name, ge::game_enum game_enum)
    : Game ( id, name, game_enum ) {}

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
//
// main.cpp
// Main
//
//-------------------------------------------------------------------------------

#include <set>



bool testing = false;
// bool testing = true;


void test();

int main()
{
  if(testing == true) { test(); return 0; }

  ASTERISKS_GAME asterisks_game(0, "asterisks", ge::ASTERISKS);


  // Initialize All Games
  //---------------------

  std::vector<ge::Game> vec;
  vec.reserve(2);
  vec.emplace_back(uint8_t(0), string("asterisks"), ge::ASTERISKS);
  vec.emplace_back(1, "poker", ge::POKER);

  ge::GameEngine games(vec);
  


  // Start The Game Engine
  //----------------------

  // msg( "get Go Again Enum", games.getGoAgainEnum());


  // TODO: convert from string to const char?
  // msg("_goAgainEnum",games._goAgainEnum);

  do{


    if (games.start(asterisks_game.get_game_enum())) {

        // for( ge::Game i : vec ){
        //   msg( "game id", int(i.id()));
        // }          

      // game.SetValues();
      // game.OnValueUpdate(demo.algo);     
      // game.start();
    }


    string temp;
    msg( "set Go Again Enum?");
    cin >> temp;
    games.SetGoAgain(temp);
  } while(games._goAgainEnum);




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

  // set<string> set1 = {"no", 3, 'no'}


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


  
  // Utils / integral sizes
  //-----------------------

  // uint8_t umax = 255;    cout << int(umax) << endl;
  // int8_t imax = 127;     cout << int(imax) << endl;
  // int8_t imin = -128;    cout << int(imin) << endl;


  // Game / Constructors
  //--------------------

  // ge::Game f(int8_t(4), string("yep"));
  // ge::Game g(3,"word");

  // // print results
  // cout << f.name() << endl;
  // cout << g.name() << endl;


  // Game / Vector Constructors
  //---------------------------


  std::vector<ge::Game> vec;
  vec.reserve(2);
  vec.emplace_back(uint(0), string("asterisks"), ge::ASTERISKS);
  vec.emplace_back(uint8_t(1), "poker", ge::POKER);

  // disp_v(vec);

  for( ge::Game i : vec ){
    // cout << i.name() << endl;
  }


  // Game Engine
  //------------


  // manual construtors with normal array not fun
  // ge::Game games[2] = { {4,"yep"}, {3,"word"} };


  // Game Engine / Go Again
  //-----------------------

  ge::GameEngine games(vec);
  games.setGoAgainChar('y');  
  // cout << games.getGoAgain2() << endl;

  
  string input;
  // cin >> input;
  // games.setGoAgainString(input);



  // cout << games.getGoAgainChar() << endl;
  // cout << games.getGoAgainEnum() << endl;

  // ge::GameEngine a(vec);
  // a.setGoAgain('y');
  // cout << a.getGoAgain() << endl;
  // a.start(a.getGameSelected());
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