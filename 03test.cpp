#include <iostream>

using namespace std;


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

    std::cout << "Think of a number between 1 and 100: " ;

    std::cin >> entered_number;

    std::cout << "Is it: 0" << guess << "?  (h/l/c): ";
    std::cin >> entered_response;
    std::cout << "\n";

    std::cout << "Great! Do you want to play again? (y/n): " ;
    
    std::cin >> play_again;

}