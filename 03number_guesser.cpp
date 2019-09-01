// Assignment 3: Number Guesser
// A program that can figure out a number chosen by a human user 

#include <iostream>

using namespace std;


void playOneGame();
char getUserResponseToGuess(int guess);
int getMidpoint(int low, int high);
bool shouldPlayAgain();
int getRandomMidpoint(int low, int high);



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
  do
  {
    playOneGame();
    // makes sure each run of the program generates new "random" numbers at the beginning of program
    srand()

  } while (shouldPlayAgain());
  
    std::cout << "Think of a number between 1 and 100: " ;

    std::cin >> entered_number;

    std::cout << "Is it: 0" << guess << "?  (h/l/c): ";
    std::cin >> entered_response;
    std::cout << "\n";

    std::cout << "Great! Do you want to play again? (y/n): " ;
    
    std::cin >> play_again;


  return 0;

}


// has a return type of void. It implements a complete guessing game on the range of 1 to 100 
void playOneGame() 
return

// takes a parameter guess of type int.  It prompts the user with the phrase “is it guess? (h/l/c): “  and returns a char. The char should be one of three possible values: ‘h’, ‘l’, or ‘c’.  For example, if parameter guess is 75, the prompt would be "is it 75? (h/l/c):"
char getUserResponseToGuess(int guess)
char

// takes two int parameters, and returns the midpoint of the two integers
int getMidpoint(int low, int high)
int low = 0
int high = 0

// has a bool return type. It prompts the user to determine if the user wants to play again, reads in a character, returns true if the character is a ‘y’, and otherwise returns false
bool shouldPlayAgain()
char 
return

// returns a random number in between the low and high arguments
int getRandomMidpoint(int low, int high)
int low = 0
int high = 0

A sample run of the program might look like this, with the user inputs in orange:

Think of a number between 1 and 100.
Is it 50?  (h/l/c): h
Is it 75?  (h/l/c): h
Is it 88?  (h/l/c): l
Is it 81?  (h/l/c): c
Great! Do you want to play again? (y/n): y
Think of a number between 1 and 100.  
Is it 50?  (h/l/c): l
Is it 25?  (h/l/c): h
Is it 37?  (h/l/c): c
Great! Do you want to play again? (y/n): n