// a31-The-League-with-Structs

// CS110B Assignment 8: The League with Structs
// Rewrite your league application from Assignment 6 so that each team/wins pair is stored in a struct named WinRecord.  Your program must meet the following requirements:


// 1.  The WinRecord struct must have two fields: an int named wins, and a char* named name.  name will point to a dynamically allocated array of characters, see requirement 4 below.

struct WinRecord;
    int wins; 
    // points to a dynamically allocated array of characters
    char* name;



// 2.  Instead of using two parallel arrays like Assignment 6, the data must be stored in a single array -- a dynamically allocated array of WinRecord structs.  You must ask the user how many teams are in the league to determine how big this array needs to be and then dynamically allocate memory for it using new.  It must deallocate the memory when it is done with the array using delete [].

// asks the user how many teams are in the league


// then dynamically allocate memory teams using new  


// deallocates the memory when it is done with the array using delete [].


// 3.  Your program must use three functions that accept the array of WinRecord structs by address (i.e., pass a WinRecord pointer):

void initializeData(WinRecord* standings, int size);

void sortData(WinRecord* standings, int size);

void displayData(WinRecord* standings, int size);


// 4.  Note that the name field of each WinRecord struct is just a char* which you need to use to store a C-String.  For this assignment, you must use C-strings, not C++ string objects.  Unlike a C++ string object, the memory to store the actual character array for the C-String is not allocated for you automatically!  I encourage you to develop a function to do this on your own, but I have provided the getLine() function getLine.cpp to use if you wish.  Note that this function returns a line of text from the keyboard contained in a dynamically allocated array.  You will thus need to deallocate this memory using delete [] when you are done using any arrays you allocated using this function.  Note that this is in addition to de-allocating the array of WinRecord structs discussed in step 2 above!


// allocates memory to store the actual character array for the C-String  



void initializeData(WinRecord* standings, int size)
{

}

void sortData(WinRecord* standings, int size)
{

}

void displayData(WinRecord* standings, int size)
{

}


// 5.  As usual, provide sample output demonstrating your program works correctly and submit via Canvas.  