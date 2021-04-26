// a01_the_league.cpp


// Assignment 05 - The League
// Oscar Villagrana

// records and displays league standings for a baseball league. The program will ask the user to enter five team names, and five win amounts. It will store the data in memory, and print it back out sorted by wins from highest to lowest.


// Requirements
// The data must be stored in two parallel arrays: an array of strings named teams, and an array of ints named wins.  
// These arrays must be declared in the main() function.  
// You can assume that the league has five teams, so each of the arrays can have five elements. 
// As usual, you may not use any global arrays or global variables.  
// All of the user input must be done in a function named initializeArrays.  
// It must have the following signature: 
// void initializeArrays(string names[], int wins[], int size) 
// You must also write two more functions: 
// one to sort both arrays, and one to display the final (sorted) list of team names and scores. 
// They must have the following signatures:
// void sortData(string names[], int wins[], int size)
// void displayData(string names[], int wins[], int size)
// The main function should be very short. It should just declare the arrays and then call these three functions.

#include <iostream>
#include <string>
using namespace std;

void initializeArrays(string names[], int wins[], int size);
void sortData(string names[], int wins[], int size);
void displayData(string names[], int wins[], int size);
void swapper(int& x, int& y);
void swapperChar(string x, string y);

main () 
{

    int size = 5;
    string names[size];
    int wins[size];
    string team1;

    initializeArrays(names, wins, size);
    sortData(names, wins, size);
    displayData(names, wins, size);

}

void initializeArrays(string names[], int wins[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter team #" << i+1 << ": " << endl;
        cin >> names[i];    
        cout << "Enter the wins for team #" << i+1 << ": " << endl;
        cin >> wins[i];
    }
}

//sorts array of length size using bubblesort algorithm
void sortData(string names[], int wins[], int size)
{
    bool swapped; //set swapped true if any swap occurs
    do
    {  
        swapped = false;
        for (int i = 0; i < (size-1); i++)
        {
            if (wins[i] < wins[i+1])
            {
                swapper(wins[i], wins[i+1]);
                // swapperChar(names[i], names[i+1]);
                swapped = true;
            }
        }
    } while (swapped);
}

//swaps ints passed in by reference
void swapper(int& x, int& y)
{
    int temp;

    x = y;
    y = temp;
}

// //swaps ints passed in by reference
// void swapperChar(string x, string y)
// {
//     string temp;

//     x = y;
//     y = temp;
// }

void displayData(string names[], int wins[], int size)
{
    cout << "League Standings:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << names[i] << ": " << wins[i] << endl;
    }
}
// The sample output from program:

// Enter team #1: Padres
// Enter the wins for team #1: 75
// Enter team #2: Dodgers
// Enter the wins for team #2: 91
// Enter team #3: Giants
// Enter the wins for team #3: 92
// Enter team #4: Rockies 
// Enter the wins for team #4: 65
// Enter team #5: Diamondbacks
// Enter the wins for team #5: 70


// League Standings:
// Giants: 92
// Dodgers: 91
// Padres: 75
// Diamondbacks: 70
// Rockies: 65