// b07-test.cpp

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
};

int main() {
    cout << "This is just a test" << endl;
}