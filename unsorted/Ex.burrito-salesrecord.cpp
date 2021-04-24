//Ex.8A.cpp

// prints number of burritos sold 

#include <string>
#include <iostream>
using namespace std;

int numTypes;


// You must use a struct called SalesRecord which has two fields -- a string containing the name of the burrito, and an int containing the number of burritos sold of this type. 
struct SalesRecord
{
    string burritoType;
    int numSold;
};



main () 
{

    SalesRecord sales[numTypes];

    SalesRecord rec;
    SalesRecord *recPtr = &rec;

    // prompt the user for the number of different burrito types sold 

    cout << "Enter the number of different burrito types sold: " << endl;

    cin >> numTypes >> endl;

    SalesRecord *sales = NULL;


    // then get the names of the types and the number of burritos sold of each type of that day. 

    for (int i; i < numTypes; i++)
    {
        cout << "Enter burrito type" << i+1 << ": " << end;
        cin >> sales[i].burritoType >> endl;
        cout << "Enter burritos sold: " << end;
        cin >> sales[i].numSold >> endl;
    }
    // Print out a daily report listing sales for each burrito type and total number of all burritos sold.


    cout << sales[i].numSold << endl; // pointer syntax for structs

    sales = new SalesRecord[numTypes];

    int total = 0;

    for (int i; i < numTypes; i++)
    {
        cout << sales[i].burritoType << endl;
        cout << sales[i].numSold << endl;

        total += numSold;

        if (i >= numTypes)
        {
            cout << total << endl;
        }
    }

    // You must have one dynamically allocated array of SalesRecord structs.


    delete [] sales;
    sales = NULL
}