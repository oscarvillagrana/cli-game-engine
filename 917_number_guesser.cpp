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
  do
  {
    playOneGame();
  } while (shouldPlayAgain());
  return 0;
}

// has a return type of void. It implements a complete guessing game on the range of 1 to 100 
void playOneGame() 
{
// playOneGame();
    int guess = 50;
    int low;
    int high; 
    char play_again = 'y';
    char entered_response = 'h';

    while (entered_response != 'c')
    {

        cout << "Think of a number between 1 and 100." << endl;

        entered_response = getUserResponseToGuess(guess);

        switch (entered_response)

        {
        case 'h':
        // select the top half
            low = guess;
            high = 101;
            guess += getMidpoint(low, high);
            break;

        case 'l':
        // select the lower half
            low = 0;
            high = guess;
            guess = getMidpoint(low, high);
            break;

        case 'c':
            break;
        }
    }
}

// has a bool return type. It prompts the user to determine if the user wants to play again, reads in a character, returns true if the character is a ‘y’, and otherwise returns false
bool shouldPlayAgain()
{
    char play_again = 'y';

    cout << "Great! Do you want to play again? (y/n): " ;
    cin >> play_again;

    if (play_again == 'y')
        return true;
    else
        return false;
}

// takes a parameter guess of type int.  It prompts the user with the phrase “is it guess? (h/l/c): “  and returns a char. The char should be one of three possible values: ‘h’, ‘l’, or ‘c’.  For example, if parameter guess is 75, the prompt would be "is it 75? (h/l/c):"

char getUserResponseToGuess(int guess)
{
    
    int low;
    int high;

    char play_again = 'y';
    char entered_response = 'h';

    cout << "Is it: " << guess << "?  (h/l/c): ";
    cin >> entered_response;

    return entered_response;
}

// takes two int parameters, and returns the midpoint of the two integers
int getMidpoint(int low, int high)
{
    return (high - low) / 2;
}

// // returns a random number in between the low and high arguments
// int getRandomMidpoint(int low, int high)
// {

// // generate a random number between 1 and 10 with C functions rand() and srand()
// unsigned seed = time(0);
// srand(seed);

// random = 1 + rand() % 10;
// }

/* sample run
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
*/