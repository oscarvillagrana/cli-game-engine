// a31-The-League-with-Structs

// CS110B Assignment 8: The League with Structs
// Rewrite your league application from Assignment 6 so that each team/wins pair is stored in a struct named WinRecord.  Your program must meet the following requirements:


#include <string>
#include <iostream>
using namespace std;


// 1.  The WinRecord struct must have two fields: an int named wins, and a char* named name.  name will point to a dynamically allocated array of characters, see requirement 4 below.

struct WinRecord
{
    int wins; 
    // points to a dynamically allocated array of characters
    char* name;
};


void swapper(char* x, char* y);
void enterTeams();
void allocateMemory();
void reAllocateMemory();

void initializeData(WinRecord* standings, int size);
void displayData(WinRecord* standings, int size);
void sortData(WinRecord* standings, int size);


// 2.  Instead of using two parallel arrays like Assignment 6, the data must be stored in a single array -- a dynamically allocated array of WinRecord structs.  You must ask the user how many teams are in the league to determine how big this array needs to be and then dynamically allocate memory for it using new.  It must deallocate the memory when it is done with the array using delete [].



int main()
{
    const int MAX_CHAR = 128;

    WinRecord *standings = NULL;

    int size;

    cout << "How many teams are in the league? " << endl;
    cin >> size;
    cin.ignore();   

    standings = new WinRecord[size];

    initializeData(standings,size);
    displayData(standings,size);
    deleteData(standings,size);

    
    delete [] standings;
    standings = NULL;

}

void swapper(char* x, char* y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

// for (int i = 0; i < size; i++)
// {
    
//     cout << "Enter team name #" << i+1 << ": " << endl;
//     cin >> standings->name[i];    

//     cout << "Enter the wins for team #" << i+1 << ": " << endl;
//     cin >> standings->wins[i];

//     // cout << "Enter team name #" << i+1 << ": " << endl;
//     // cin >> *(standings->name + i);    
    
//     // cout << "Enter the wins for team #" << i+1 << ": " << endl;
//     // cin >> *(standings->wins + i);

//     standings++;
// }


// // asks the user how many teams are in the league
// void enterTeams(int size)
// {
//     cout << "How many teams are in the league? " << endl;
//     cin >> size;
// }

// // then dynamically allocate memory teams using new  
// void allocateMemory(WinRecord *x, int size)
// {
//     x = new WinRecord[size];
// }

// // deallocates the memory when it is done with the array using delete [].
// void reAllocateMemory(WinRecord *x)
// {
//     delete [] x;
//     x = NULL;
// }

// 3.  Your program must use three functions that accept the array of WinRecord structs by address (i.e., pass a WinRecord pointer):

// gets standings information from input using cin
void initializeData(WinRecord* standings, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter team name #" << i+1 << ": " << endl;
        standings[i].name = getLine();                             // array notation to input from user using fuction

        cout << "Enter the wins for team #" << i+1 << ": " << endl;
        cin >> standings[i].wins;                                  // array notation to get input from user
        cin.ignore();
    }
}


void sortData(WinRecord* standings, int size)
{
    bool swapped; //set swapped true if any swap occurs
        do
    {  
        swapped = false;
        for (int i = 0; i < size; i++)
        {
            if (standings->wins[i] < standings->wins[i+1])
            {
                swapper(standings->wins[i], standings->wins[i+1]);
                // swapperChar(names[i], names[i+1]);
                swapped = true;
            }
        }
    } while (swapped);
}

// prints standings information to screen
void displayData(WinRecord* standings, int size)
{
    cout << "League Standings:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << standings[i].name << ": " << standings[i].wins << endl;
    }
}


// 4.  Note that the name field of each WinRecord struct is just a char* which you need to use to store a C-String.  For this assignment, you must use C-strings, not C++ string objects.  Unlike a C++ string object, the memory to store the actual character array for the C-String is not allocated for you automatically!  I encourage you to develop a function to do this on your own, but I have provided the getLine() function getLine.cpp to use if you wish.  Note that this function returns a line of text from the keyboard contained in a dynamically allocated array.  You will thus need to deallocate this memory using delete [] when you are done using any arrays you allocated using this function.  Note that this is in addition to de-allocating the array of WinRecord structs discussed in step 2 above!


// deallocates memory for the created standing names
void deleteData(WinRecord* standings, int size)
{
    for (int i = 0; i < size; i++)
        {
            cout << "Deleting name #" << i+1 << ": " << endl;
            delete standings[i].name;
            // delete *(standings->name + i);
        }
}

// read in a line of text and return it in a dynamically allocated array
char* getLine() 
{
  const int BUFFER_SIZE = 1000;

  // Allocate a buffer local to this function
  char buffer[BUFFER_SIZE];
    
  // Use cin.getline() to input the buffer from the user
  cin.getline(buffer, BUFFER_SIZE);
    
  // Find the length of the string in buffer
  int length = strlen(buffer);

  // Dynamically allocate an array, to be returned
  char *rValue = new char[length + 1];

  // Copy the string into the dynamically allocated array
  strncpy(rValue, buffer, length);

  // Return the address of the dynamically allocated array
  return rValue;
}   

// allocates memory to store the actual character array for the C-String  




// 5.  As usual, provide sample output demonstrating your program works correctly and submit via Canvas.  