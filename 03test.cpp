#include <iostream>

using namespace std;

int getMidpoint(int low, int high);

int main()
{ 

char h;
char l;
char c;
char y;
char n;

int entered_number = 0;
char entered_response = h;
char play_again = y;
int guess = 0;
cout << "Think of a number between 1 and 100: " ;
cin >> user_number;


cout << "Is it: 0" << guess << "?  (h/l/c): ";
cin >> entered_response;
cout << "\n";

cout << "Great! Do you want to play again? (y/n): " ;
cin >> play_again;

}

// takes two int parameters, and returns the midpoint of the two integers
int getMidpoint(int low, int high)
{
int midpoint;

midpoint = (high - low) % 2
return midpoint
}