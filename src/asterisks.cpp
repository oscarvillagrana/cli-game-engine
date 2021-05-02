
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


// // Deprecated
// //------------
// class ASTERISKS_GAME : public ge::Game
// {
//    int asterisksCount = 10;
//    enum ALGORITHM { GO_AGAIN_YES, GO_AGAIN_NO };
//    string algoInput;
//    // ASTERISKS_GAME() {};

// public:
//   ALGORITHM algo = GO_AGAIN_NO;
//   ASTERISKS_GAME( int8_t id , string name, ge::game_enum game_enum)
//     : Game ( id, name, game_enum ) {}

//   bool SetValues()
//   {

//     cout << "Number of Asterisks [" << asterisksCount << "]: ";
//     cin >> asterisksCount;

//     cout << "Name of Algorithm [" << algo << "]: ";
//     cin >> algoInput;

//     return true;
//   }

//   bool OnValueUpdate( ASTERISKS_GAME::ALGORITHM algoInput )
//   {
//     algo = algoInput;

//     switch (algo)
//     {
//        case GO_AGAIN_YES:
//           cout << "go again yes" << endl;
//           break;

//        case GO_AGAIN_NO:
//           cout << "go again no" << endl;
//           break;
//     }

//     return true;

//   }

//   void Start() {
//     for (int i = 0; i < asterisksCount; i++)
//     {
//        cout << "*";
//     }
//     cout << endl;
//   }

// };


int asterisks()
{
   int count;
   char goAgain = 'y';

   while (goAgain != 'n')
   {
      cout << "How many asterisks?: ";
      cin >> count;
      for (int i = 0; i < count; i++)
      {
         cout << "*";
      }
      cout << endl;
      cout << "Go again? (y/n): ";
      cin >> goAgain;
   }
   return 0;
}


#pragma endregion

#endif // ASTERISKS_GAME_DEF


