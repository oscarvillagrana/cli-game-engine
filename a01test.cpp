// Assignment 05 - The League
// Oscar Villagrana

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
    string names[size] = {"ace", "bird", "cat", "dog", "eats"};
    int wins[size] = {10, 22, 33, 44, 55};

    sortData(names, wins, size);
    displayData(string names[], int wins[], int size);
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
                swapperChar(names[i], names[i+1]);
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

//swaps ints passed in by reference
void swapperChar(string x, string y)
{
    string temp;

    x = y;
    y = temp;
}

void displayData(string names[], int wins[], int size)
{
    cout << "League Standings:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << names[i] << ": " << wins[i] << endl;
    }
}
