#include <string>
#include <iostream>
#include <cstring>
using namespace std;

class Rectangle
{
    private:
    double width;
    double length;
    char *name;
    public:
    //constructors
    Rectangle();
    Rectangle(double, double,char*);
    //destructor
    ~Rectangle();
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    void printName() const
    { cout << name; }
};


// b05-ex10A-Rectangle.cpp

//default constructor
Rectangle::Rectangle()
{
    width = length = 0;
    name = new char[128];
}

//constructor with initialization
Rectangle::Rectangle(double w,double l,char *n)
{
    width = w;
    length = l;
    name = new char[128];
    strcpy(name,n);
}

//destructor
Rectangle::~Rectangle()
{
    cout << "In the destructor!\n";
    delete [] name;
    name = NULL;
}

void Rectangle::setWidth(double x)
{
    width = x;
}

void Rectangle::setLength(double x)
{
    length = x;
}


// b05-ex10A-RectangleMain.cpp

int main() 
{
    // instantiate Bathroom
    Rectangle Bathroom (10,10,"Bathroom");

    cout << Bathroom.getWidth();
    cout << Bathroom.getLength();

    // instantiate Bedroom
    Rectangle Bedroom();

    Bedroom.setWidth(200);
    Bedroom.setLength(200);

    cout << Bedroom.getLength();
    cout << Bedroom.getWidth();

    // instantiate Garage
    Rectangle Garage(50,50,"Garage");

}