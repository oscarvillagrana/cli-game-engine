// b19-Ex11A-overload-opperator.cpp
// Oscar Villagrana

#include <string>
#include <iostream>
#include <cstring>
 // #include "b07-Circle.h"
using namespace std;

// Rectangle.h
class Rectangle
{
    private:
    double width;
    double length;
    char *name;
    void initName(char* n);
    public:
    Rectangle();
    Rectangle(double, double,
    char*);
    //Copy Constructor
    Rectangle(Rectangle &);
    ~Rectangle();
    Rectangle& operator=(const Rectangle &);
};


// Rectangle.cpp
// overloaded = operator, returns a rectangle by reference
Rectangle& Rectangle::operator=(const Rectangle &r)
{
    length = r.length;
    width = r.width;
    strcpy(name,r.name);
    return *this;
}

bool Rectangle::operator<(const Rectangle &r)



bool Rectangle::operator>(const Rectangle &r)


main() {
    Rectangle r1(10,10,"Kitchen");
    Rectangle r2, r3;
    r3 = r2 = r1;
}
