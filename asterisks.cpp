// Assignment 1: Oscar Villagrana
// This program prints out as many asterisks as the user wants.

#include <iostream>
using namespace std;

int main()
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

