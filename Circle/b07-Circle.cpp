// b07-Circle.cpp

// CS110B Assignment 9: Circle Class

#include <string>
#include <iostream>
#include "b07-Circle.h"
using namespace std;

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
