// b07-main.cpp

// CS110B Assignment 9: Circle Class

#include <string>
#include <iostream>
#include "Circle.h"
using namespace std;

// Write a main function that tests your class. It should instantiate a number of circle objects with different radius values and centers. 
// You should test all your member functions until you are confident that they work. 
// At minimum, make sure you try each of the following and provide sample output for each of the below:

// tests your class
int main()
{

        // trying to pass a member function to a printValue member function
        //-------------------------------------------------------------------
        // not working
        // want to use a pointer instead of creating a value each print call
        // double *printValue = NULL;
        // double printValue = 0;
        // printValue = &myCircle.getRadius();
        // printValue = myCircle.getX();
        // test variables
        // printValue = myCircle.getRadius();
        // cout << initAt << printValue << endl;
        // myCircle.printValue(getRadius())

    string prevValue = "previous value: ";
    string setTo = "value was set to: ";

    
    // instantiate a number of circle objects with different radius values and centers


    Circle myCircle1(10,20,30);
    cout << "X Value: " << myCircle1.getX() << endl;
    cout << "Y Value: " << myCircle1.getY() << endl;
    cout << "Radius: " << myCircle1.getRadius() << endl;
    cout << "Area: " << myCircle1.getArea() << endl;

    Circle myCircle2(3,4,5);
    cout << "X Value: " << myCircle2.getX() << endl;
    cout << "Y Value: " << myCircle2.getY() << endl;
    cout << "Radius: " << myCircle2.getRadius() << endl;
    cout << "Area: " << myCircle2.getArea() << endl;



    // Create a local circle object and set its x, y, and radius. Verify that its area is calculated correctly.
    // For example, let's say we have instantiated a Circle object named myCircle which has x=2.0, y=3.0, and radius=2.0.  
    Circle myCircle;
    cout << "\n--test get and set X" << endl;
    
    cout << prevValue << myCircle.getX() << endl;    
    myCircle.setX(2.0);
    cout << setTo << myCircle.getX() << endl;

    cout << "\n--test get and set Y" << endl;

    cout << prevValue << myCircle.getY() << endl;
    myCircle.setY(3.0);
    cout << setTo << myCircle.getY() << endl;

    cout << "\n--test get and set Radius" << endl;

    cout << prevValue << myCircle.getRadius() << endl;
    myCircle.setRadius(2.0);
    cout << setTo << myCircle.getRadius() << endl;

    
    // // Using your pointer, verify that your containsPoint() function works by trying a point which is in fact in your circle, and showing it returns true.  
    
    // should return true because (2.0, 4.0) is contained in myCircle.
    cout << "\n--test containsPoint" << endl;
    cout << myCircle.containsPoint(2.0, 4.0) << endl;
    

    // // Also, try a different point which is not in your circle and show it returns false.

    // should return false because (2.0, 10.0) is not contained in myCircle.
    cout << "\n--test containsPoint" << endl;    
    cout << myCircle.containsPoint(2.0, 10.0) << endl;


    // Create a circle pointer, and point it at your local circle object.  
    Circle *myCrclPtr = NULL;
    myCrclPtr = &myCircle;


    // Use this pointer to set its x, y, and radius values to new values.
    cout << "\n--test pointer setX" << endl;
    cout << prevValue << myCircle.getX() << endl;    
    myCrclPtr->setX(5);
    cout << setTo << myCircle.getX() << endl;

    cout << "\n--test pointer setY" << endl;
    cout << prevValue << myCircle.getY() << endl;
    myCrclPtr->setY(5);
    cout << setTo << myCircle.getY() << endl;

    cout << "\n--test pointer setRadius" << endl;
    cout << prevValue << myCircle.getRadius() << endl;
    myCrclPtr->setRadius(5);
    cout << setTo << myCircle.getRadius() << endl;

    cout << "\n--test getArea" << endl;
    cout << prevValue << myCircle.getArea() << endl;    
   
}

// Sample output

// In the custom Constructor!
// X Value: 10
// Y Value: 20
// Radius: 30
// Area: 2826
// In the custom Constructor!
// X Value: 3
// Y Value: 4
// Radius: 5
// Area: 78
// In the default Constructor!

// --test get and set X
// previous value: 0
// value was set to: 2

// --test get and set Y
// previous value: 0
// value was set to: 3

// --test get and set Radius
// previous value: 0
// value was set to: 2

// --test containsPoint
// True
// 1

// --test containsPoint
// False
// 0

// --test pointer setX
// previous value: 2
// value was set to: 5

// --test pointer setY
// previous value: 3
// value was set to: 5

// --test pointer setRadius
// previous value: 2
// value was set to: 5

// --test getArea
// previous value: 78

// Implement the Circle class in separate .h and .cpp files.  
// Circle.h contains your class declaration and 
// Circle.cpp contains your class implementation, i.e. the member function implementations.  
// Don't forget the #ifndef and #define preprocessor directives as necessary.  
// Put your main program into a separate file as well called main.cpp, and put your sample output at the end of main.cpp.


// To summarize, at the end of the assignment you should have three files with the following names: Circle.h, Circle.cpp, main.cpp

// When you are finished, create a zip file containing these three files, and submit the zip file via Canvas.  Do not submit the three files separately.
