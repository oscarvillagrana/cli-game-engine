// Ex.9B.cpp

// Take your Rectangle program from exercise A and split it into three
// files:
// Rectangle.h - class declaration
// Rectangle.cpp - class implementation
// RectangleProgram.cpp - main program

// rectangle.h

class Rectangle
{
    private:
    double width;
    double length;
    public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const = {return width};
    double getLength() const = {return length};
    double getArea() const;
    double getPerimeter();
    bool isSquare();
};

// rectangle.cpp

// Modify your Rectangle program so that getWidth() and getLength()
// are inline member functions, defined in the class declaration in
// Rectangle.h. The other member functions should be defined in
// Rectangle.cpp.


#include <string>
#include <iostream>
using namespace std;

// returns true if the rectangle is a square
// i.e. length is equal to width, returns false if not
bool Rectangle::isSquare()
{
    if (length = width)
    {
        return true;
    }
    else
        return false;
}

// returns the perimeter of the rectangle
// i.e. 2*width+2*length
void Rectangle::getPerimeter(double length, double width)
{
    return length * 2 + width * 2;
}

void Rectangle::setWidth(double *w)
{
    width = w; 
}

void Rectangle::setLength(double *l)
{
    length = l;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{ 
    return length * width;
}


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