// Assignment 1: Oscar Villagrana
// This program prints out as many asterisks as the user wants.

#include <iostream>
using namespace std;

#ifndef AST_GE_DEF
#define AST_GE_DEF


namespace ast

// astGameEngine.h
{
   enum runcode { FAIL = 0, OK = 1, NO_FILE = -1 }

   // O------------------------------------------------------------------------------O
   // | GAME ENGINE BASE CLASS - Starts the game with defaults                       |
   // O------------------------------------------------------------------------------O
   class GameEngine
   {
   public:
      GameEngine();
   public:
      ast::runcode Construct(int count, char goAgain);
      ast::runcode Start();
   }
}

#endif // AST_GE_DEF

// me_ASTGE_Proc.cpp
class AST_GE : public ast::GameEngine        // what is this public namespace?
{
public:    // why two publics? is one for constructors?
   AST_GE()
   {
      sAppName = "AST_GE";
   }

   int count;
   char goAgain = 'y';

public:
   enum ALGORITHM
   {
      GO_AGAIN_YES, GO_AGAIN_NO
   };

   ALGORITHM algo = GO_AGAIN_NO;

   bool OnUserUpdate( std::string algoInput ) override
   {
      alog = algoInput;

      switch (algo)
      {
         case GO_AGAIN_YES:
            cout << "go again yes" << endl;
            break;

         case GO_AGAIN_NO:
            cout << "go again no" << endl;
            break;
      }
   }

}



int main()
{
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

/* 
[ovillagr@hills ~]$ ./a.out
How many asterisks?: 100
****************************************************************************************************
Go again? (y/n): 
y
How many asterisks?: 0

Go again? (y/n): y
How many asterisks?: 10 10
**********
Go again? (y/n): How many asterisks?: 
Go again? (y/n): y
How many asterisks?: 9 9
*********
Go again? (y/n): How many asterisks?: 0

Go again? (y/n): n
[ovillagr@hills ~]$ 
*/

