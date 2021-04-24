// Exercise 4B: Oscar Villagrana
// 


#include <iostream>
using namespace std;


int main()
{
    int numBurritos = 10;
    int newOrder[numBurritos];
    char EnteredType;


    cout << "How many burritos are in the order? " << endl;
    cin >> numBurritos >> endl;
    
    for (int i=0; i<numBurritos; i++)
    {
        cout << "What is the burrito?" << endl;
        cin >> EnteredType >> endl;

        if EnteredType == "carnitas"
            newOrder[i] = 0; 
        if EnteredType == "beef"
            newOrder[i] = 1; 
        if EnteredType == "shrimp"
            newOrder[i] = 2; 
        if EnteredType == "vegetarian"
            newOrder[i] = 3; 
    }



    shrimpAlert(newOrder[])
}

bool shrimpAlert(string newOrder[], int numBurritos)
{
    int counter = 0
    int Shrimp = 2
    
    while ((counter<numBurritos))
    {
        if (newOrder[counter] == Shrimp)
            cout << "There is a shrimp in the order!" << endl;
            hasShrimp = true;
        counter++;
    }
}