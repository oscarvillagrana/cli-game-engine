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



void initializeArrays(string names[], int wins[], int size)

void sortData(string names[], int wins[], int size)

void displayData(string names[], int wins[], int size)


string names[];
int wins[];
int size;
string team1;


cout << "Enter team #1: " << endl;
cout << "Enter the wins for team #1: " << endl;
cout << "Enter team #2: " << endl;
cout << "Enter the wins for team #2: " << endl;
cout << "Enter team #3: " << endl;
cout << "Enter the wins for team #3: " << endl;
cout << "Enter team #4: " << endl;
cout << "Enter the wins for team #4: " << endl;
cout << "Enter team #5: " << endl;
cout << "Enter the wins for team #5: " << endl;
cout << "League Standings" << endl;


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