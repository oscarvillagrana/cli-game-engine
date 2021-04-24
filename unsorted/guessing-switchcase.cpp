// Guessing Game

// Uses Switch Cases

#include <iostream>

using namespace std;
void playOneGame();
int getMidpoint(int low, int high);
bool shouldPlayAgain(char play_again);
char getUserResponseToGuess(int guess);

int main()
{ 

// playOneGame();
    int guess = 0;
    

    
    // char play_again = 'y';

    // while (play_again != 'n')
    // {
    // }
        getUserResponseToGuess(guess);
}



// has a bool return type. It prompts the user to determine if the user wants to play again, reads in a character, returns true if the character is a ‘y’, and otherwise returns false
bool shouldPlayAgain(char play_again)
{
    if (play_again == 'y')
        return true;
    else
        return false;
}


// takes two int parameters, and returns the midpoint of the two integers
int getMidpoint(int low, int high)
{
    return (high - low) / 2;
}

void playOneGame() 
{
    // int entered_number = 0;
    char entered_response = 'h';
    char play_again = 'y';
    int guess = 0;

    while (shouldPlayAgain(play_again))
    {
        cout << "Think of a number between 1 and 100: " ;
        // cin >> entered_number;
        cout << "\n";

        cout << "Is it: 0" << guess << "?  (h/l/c): ";
        cin >> entered_response;
        cout << "\n";

        cout << "Great! Do you want to play again? (y/n): " ;
        cin >> play_again;
    }
}

char getUserResponseToGuess(int guess)
{

    int low;
    int high;
    char entered_response = 'h';
    char play_again = 'y';
    
    cout << "Is it: " << guess << "?  (h/l/c): ";
    cin >> entered_response;

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

        cout << "Great! Do you want to play again? (y/n): " << "\n";
        cin >> play_again;
        break;
    }
}
