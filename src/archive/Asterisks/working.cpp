
#include <iostream>
#include <vector>
#include <stdint.h>
#include <map>
using namespace std;

namespace ge
{

  // -- Interface -- //
  class Game
  {
  private:
    int8_t _id = 0;
    string _name = "";
    Game(){};

  public: // Constructors
    Game( const int8_t & id, const string & name );
  
  public: // Member functions
    const int8_t & id() const;
    const string & name() const;

  };

  // -- Implementation -- //
  Game::Game( const int8_t & id, const string & name )
  : _id(id), _name(name) {};
  const int8_t & Game::id() const { return _id; }
  const string & Game::name() const { return _name; }
}


int main()
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
}
