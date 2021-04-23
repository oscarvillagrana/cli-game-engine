// b07-Circle-Class.cpp
// CS110B Assignment 9: Circle Class

#include <string>
#include <iostream>
using namespace std;

// When working on this assignment, focus on memorizing the syntax for writing classes.
// Write a simple class named Circle, with three private variables: doubles named x, y and radius.  The center of the circle is denoted by coordinates (x,y), and the radius of the circle is denoted by radius.  It should have public member functions with the following signatures:

class Circle
{
    private:
    double x=0;
    double y=0;
    double radius=0;
    public:
    Circle();
    Circle(double x,double y,double radius);
    void setRadius(double r);
    void setX(double value);
    void setY(double value);
    double getRadius() const 
    { return radius; }
    double getX() const 
    { return x; }
    double getY() const 
    { return y; }
    // returns the area of the circle
    double getArea();
    bool containsPoint(double xValue, double yValue);
    // double printValue(double printValue);
    // void printTest(double testToPrint);
};

// The first six member functions are straightforward functions to set and get the private member variables.
// This member function should return the area of the circle. When you are calculating the area you can use 3.14 for pi.
// The formula is radius * radius * pi.

Circle::Circle()
{
    // testing the constructor
    cout << "In the default Constructor!" << endl;
}

Circle::Circle(double a,double b,double c)
{
    // testing the constructor
    cout << "In the custom Constructor!" << endl;
    x = a;
    y = b;
    radius = c;
}

void Circle::setX(double value)
{
    x = value;
}

void Circle::setY(double value)
{
    y = value;
}

void Circle::setRadius(double r)
{
    radius = r;
}

// return the area of the circle
double Circle::getArea()
{
    //  for pi
    double pi = 3.14;
    
    int area = radius * radius * pi;

    return area;
}


// This member function should return true if the point at (xValue, yValue) is contained in the circle, and false if not.  You can determine whether or not a point is in a circle by calculating the distance from the center of the circle (its x and y coordinates) to the point (parameters xValue, yValue).  If this distance is less than or equal to the radius then the point is inside the circle.  For your reference, here is how to calculate distance between two points.  


// return true if the point at (xValue, yValue) is contained in the circle, and false if not
bool Circle::containsPoint(double xValue, double yValue)
{
    if((xValue - x) * (xValue - x) + (yValue - y) * (yValue - y) <= radius * radius)
    {    
        cout << "True" << endl;
        return true;
    }
    else
    {
        cout << "False" << endl;
        return false;
    }
}

// double Circle::printValue(double valueToPrint)
// {
//     cout << valueToPrint << endl;
// }

// void printTest(double testToPrint)
// {
//     cout << testToPrint << endl;
// }

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
    

// Implement the Circle class in separate .h and .cpp files.  
// Circle.h contains your class declaration and 
// Circle.cpp contains your class implementation, i.e. the member function implementations.  
// Don't forget the #ifndef and #define preprocessor directives as necessary.  
// Put your main program into a separate file as well called main.cpp, and put your sample output at the end of main.cpp.


// To summarize, at the end of the assignment you should have three files with the following names: Circle.h, Circle.cpp, main.cpp

// When you are finished, create a zip file containing these three files, and submit the zip file via Canvas.  Do not submit the three files separately.