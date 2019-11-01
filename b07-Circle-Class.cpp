// b07-Circle-Class.cpp

// CS110B Assignment 9: Circle Class

// When working on this assignment, focus on memorizing the syntax for writing classes.

// Write a simple class named Circle, with three private variables: doubles named x, y and radius.  The center of the circle is denoted by coordinates (x,y), and the radius of the circle is denoted by radius.  It should have public member functions with the following signatures:

class Circle
{
    private:
    double x, y, radius;
    public:
    void setRadius(double r);
    void setX(double value);
    void setY(double value);
    double getRadius();
    double getX();
    double getY();
    // returns the area of the circle
    double getArea();
    bool containsPoint(double xValue, double yValue);
}

// The first six member functions are straightforward functions to set and get the private member variables.

// This member function should return the area of the circle.  When you are calculating the area you can use 3.14 for pi.  The formula is radius * radius * pi.  

// return the area of the circle
double getArea()
{
    //  for pi
    double pi = 3.14;
    return radius * radius * pi;
}


// This member function should return true if the point at (xValue, yValue) is contained in the circle, and false if not.  You can determine whether or not a point is in a circle by calculating the distance from the center of the circle (its x and y coordinates) to the point (parameters xValue, yValue).  If this distance is less than or equal to the radius then the point is inside the circle.  For your reference, here is how to calculate distance between two points.  

// return true if the point at (xValue, yValue) is contained in the circle, and false if not
bool containsPoint(double xValue, double yValue)
{

}



// For example, let's say we have instantiated a Circle object named myCircle which has x=2.0, y=3.0, and radius=2.0.  

// myCircle.containsPoint(2.0, 4.0) should return true because (2.0, 4.0) is contained in myCircle.  
// myCircle.containsPoint(2.0, 10.0) should return false because (2.0, 10.0) is not contained in myCircle.

// Write a main function that tests your class.  It should instantiate a number of circle objects with different radius values and centers.  You should test all your member functions until you are confident that they work.  At minimum, make sure you try each of the following and provide sample output for each of the below:

Create a local circle object and set its x, y, and radius. Verify that its area is calculated correctly.
Create a circle pointer, and point it at your local circle object.  Use this pointer to set its x, y, and radius values to new values.
Using your pointer, verify that your containsPoint() function works by trying a point which is in fact in your circle, and showing it returns true.  Also, try a different point which is not in your circle and show it returns false.

Implement the Circle class in separate .h and .cpp files.  Circle.h contains your class declaration and Circle.cpp contains your class implementation, i.e. the member function implementations.  Don't forget the #ifndef and #define preprocessor directives as necessary.  Put your main program into a separate file as well called main.cpp, and put your sample output at the end of main.cpp.


To summarize, at the end of the assignment you should have three files with the following names:

Circle.h
Circle.cpp
main.cpp

When you are finished, create a zip file containing these three files, and submit the zip file via Canvas.  Do not submit the three files separately.