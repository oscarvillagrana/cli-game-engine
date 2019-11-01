// rectangleProgram.cpp

// Demonstrate your class works with a main function in
// RectangleProgram.cpp that instantiates a Rectangle object,
// creates a pointer to this object, and uses this pointer to call the
// member functions.



#include <string>
#include <iostream>
#include "rectangle.h"
using namespace std;



int main()
{
    Rectangle r;
    cout << r.getPerimeter() << endl;
}