// Assignment 06 - Pointers / The League using DMA
// CS110B Assignment 6: Pointer Tasks / The League with DMA

// This is a two-part assignment which includes Pointer Tasks, and The League with DMA.  


// 1.  Pointer Tasks


// This assignment will give you a chance to perform some simple tasks with pointers. 
// The instructions below are a sequence of tasks that are only loosely related to each other. 
// Start the assignment by creating a file named pointerTasks.cpp with an empty main function, 
// then add statements to accomplish each of the tasks listed below. 
// Some of the tasks will only require a single C++ statement, others will require more than one.

#include <string>
#include <iostream>
using namespace std;


void initializeArrays(string names[], int wins[], int teamsPtr);
void sortData(string names[], int wins[], int teamsPtr);
void displayData(string names[], int wins[], int teamsPtr);
void pointerTasks ();


// Your modified league program should start out by asking the user how many teams will be entered.  
// It should then dynamically allocate two appropriate arrays, and proceed just like the original League assignment, calling the above three functions. 

main () 
{

    int *teamsPtr = NULL;
    int numTeams;

    cout << "How many teams will be entered? " << endl;
    cin >> numTeams;

    teamsPtr = new int[numTeams];

    string names[numTeams];
    int wins[numTeams];
    

    initializeArrays(names, wins, *teamsPtr);
    sortData(names, wins, *teamsPtr);
    displayData(names, wins, *teamsPtr);


    delete [] teamsPtr;
    teamsPtr = NULL;


}




void pointerTasks () {


    // Create two integer variables named x and y
    int x, y;

    // Create an int pointer named p1
    int *p1 = NULL;

    // Store the address of x in p1
    p1 = &x;

    // Use p1 to set the value of x to 99
    *p1 = 99;

    // Using cout and x, display the value of x
    cout << x << endl;

    // Using cout and the pointer p1, display the value of x
    cout << *p1 << endl;

    // Store the address of y into p1
    p1 = &y;

    // Use p1 to set the value of y to -300
    *p1 = -300;

    // Create two new variables: an int named temp, and an int pointer named p2
    int temp;
    int *p2 = NULL;

    // Use temp, p1, and p2 to swap the values in x and y (this will take a few statements)
    temp = *p1;
    *p1 = x;
    *p2 = y;
    x = *p2;
    y = *p1;

    // Write a function with the following signature: . The function should accept the address of an int variable. If the value of this integer is negative then it should set it to zero
    void noNegatives(int *x) 
    {
        if (x < 0 )
        {
            x = 0;
        }
    }

    // Call the function twice: once with the address of x as the argument, and once with the address of y
    noNegatives(&x);

    noNegatives(&y);

    // Use p2 to display the values in x and y (this will require both assignment statements and cout statements)

    *p2 = x;
    cout << *p2 << endl;

    *p2 = y;
    cout << *p2 << endl;


    // Create an int array with two elements. The array should be named ‘a’
    // Use p2 to initialize the first element of a with the value of x
    // Use p2 to initialize the second element of a with the value of y

    num = 2;
    *p2 = x;
    int a[num] = {*p2, 0}
    *p2 = y;
    a[1] = *p2;

    // Using cout, display the address of the first element in a

    cout << &a[0] << endl;

    // Using cout display the address of the second element in a

    cout << &a[1] << endl;


    // Use p1, p2, and temp to swap the values in the two elements of array ‘a’. (first point p1 at a[0], then point p2 at a[1]. 
    // After this the swapping steps should look very similar to step 10.)
    p1 = &a[0];
    p2 = &a[1];


    temp = *p1;
    *p1 = *p2;
    *p2 = temp;


    // Display the values of the two elements. (The first element should be 99, the second 0).
    cout << *p1 << endl;
    cout << *p2 << endl;

    // Write a function named ‘swap’ that accepts two integer pointers as arguments, and then swaps the two integers that the pointers point to.  This function must be pass by pointer, i.e. int *, not pass by reference, i.e. int &.

    swap(int *p1, int *p2) {
        int *temp = NULL;
        *p1 = *temp;
        *p2 = *p1;
        *p1 = *temp;
    }

    // Call your swap function with the addresses of x and y, then print their values. (x should be 99, y should be 0).
    swap(&x, &y);

    cout << x << endl;
    cout << y << endl;

    // Call your swap function with the address of the two elements in array ‘a’, then print their values. (a[0] should be 0, a[1] should be 99)

    swap(&a[0], &a[1]);

    cout << a[0] << endl;
    cout << a[1] << endl;

}

// 2.  The League with DMA


// Rewrite your League program from Assignment 5 so that it uses Dynamic Memory Allocation (DMA) to create the team names and scores arrays.


// This is a good test of the modularity of your program. You will only need to make slight modifications to your main() function if you wrote your original program using functions similar to the following:

void initializeData(string names[], int wins[], int *teamsPtr)
{
    for (int i = 0; i < *teamsPtr; i++)
    {
        cout << "Enter team #" << i+1 << ": " << endl;
        cin >> names[i];    
        cout << "Enter the wins for team #" << i+1 << ": " << endl;
        cin >> wins[i];
    }
}

//sorts array of length size using bubblesort algorithm
void sort(string names[], int wins[], int *teamsPtr)
{
    bool swapped; //set swapped true if any swap occurs
    do
    {  
        swapped = false;
        for (int i = 0; i < (*teamsPtr-1); i++)
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
void display(string names[], int wins[], int *teamsPtr)
{
    cout << "League Standings:" << endl;

    for (int i = 0; i < *teamsPtr; i++)
    {
        cout << names[i] << ": " << wins[i] << endl;
    }
}

// When your program is done using the arrays, don't forget to use delete [] to return their memory to the system.


// Note: you must use dynamic memory allocation for your arrays, i.e. the new and delete [] operators, to receive credit.  


// The output from your program should look approximately like this (user input in orange bold):

// How many teams will you enter?: 4
// Enter team #1: Padres
// Enter the wins for team #1: 75
// Enter team #2: Dodgers
// Enter the wins for team #2: 91
// Enter team #3: Giants
// Enter the wins for team #3: 92
// Enter team #4: Cubs
// Enter the wins for team #4: 65


// League Standings:
// Giants: 92
// Dodgers: 91
// Padres: 75
// Cubs: 65

