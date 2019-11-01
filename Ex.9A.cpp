// Ex.9A.cpp

// instantiates a Rectangle object
// shows sample output for these functions working
// Implements the Rectangle class
// enhances the Rectangle class with new member functions

#include <string>
#include <iostream>
using namespace std;


class Rectangle
{
    private:
    double width;
    double length;
    public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    double getPerimeter();
    bool isSquare();
};

int main()
{
    Rectangle r;
    cout << r.getPerimeter() << endl;

}


// returns true if the rectangle is a square
// i.e. length is equal to width, returns false if not
void Rectangle::isSquare()
{
    if (l = w)
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

void setWidth(double *w)
{
    Rectangle.width = w; 
}

void setLength(double *l)
{
    Rectangle.length = l;
}

double getWidth() const
{
    return Rectangle.width;
}

double getLength() const
{
    return Rectangle.width;
}

double getArea() const
{ 
    return length * width;
}
