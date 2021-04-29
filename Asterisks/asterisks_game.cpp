//
// asterisks_game.cpp
// Oscar Villagrana
//

#include "ge.h"

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

