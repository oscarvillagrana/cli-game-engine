// Ex.10B Rectangle Private Member Function
// By Oscar Villagrana

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
    void initName(char* n);
    public:
    //constructors
    Rectangle();
    Rectangle(double, double,char*);
    //destructor
    ~Rectangle();
    void setWidth(double);
    void setLength(double);
    void setName(char*);
    double getWidth() const;
    double getLength() const;
    void printName() const
    { cout << name; }
};

// b05-ex10A-Rectangle.cpp

//initialize our name
void Rectangle::initName(char* n)
{
    int MAX_CHARS = 128;
    name = new char[MAX_CHARS];
    strcpy(name,n);
}


void setName(char* n)
{
    initName(n)
}


//default constructor using initName
Rectangle::Rectangle()
{
    width = 0;
    length = 0;
    initName("Default");
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
    // // instantiate Bathroom
    // Rectangle Bathroom (10,10,"Bathroom");


    // // cout << Bathroom.getWidth();
    // // cout << Bathroom.getLength();

    // // instantiate Bedroom
    // Rectangle Bedroom();
    // Bedroom.setName("myBedroom");

    // // Bedroom.setWidth(200);
    // // Bedroom.setLength(200);

    // cout << Bedroom.getLength();
    // cout << Bedroom.getWidth();

    // // instantiate Garage
    // Rectangle Garage(50,50,"Garage");

    char input[128];
    
    Rectangle bedroom();

    cout << "Please enter the name:\n";

    cin.getline(input,128);

    bedroom.setName(input);

    cout << "Please enter the width:\n";

    cin.getline(input,128);

    bedroom.setWidth(input);

    cout << "Please enter the length:\n";

    cin.getline(input,128);

    bedroom.setLength(input);

}