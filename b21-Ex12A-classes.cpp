// b21-Ex12A-classes.cpp

// CS110B Assignment 

#include <string>
#include <iostream>
using namespace std;


class FeetInches
{
private:
    int feet;
    int inches;
public:
    FeetInches()
    {feet = inches = 0;}
    FeetInches(int f, int i)
    {feet = f; inches = i;}
    void setFeet(int f)
    {feet = f;}
    void setInches(int i)
    {inches = i;}
    int getFeet()
    {return feet;}
    int getInches()
    {return inches;}
    operator double();
    operator int();
};

class FieldGoal
{
private:
    int goals;
    int attempts;
public:
    FieldGoal()
    {goals = attempts = 0;}
operator double();
};


class Person
{
private:
    string firstName;
    string lastName;
    FeetInches height;
    int weight;
    FieldGoal percentage;

public:
    Person()
    {firstName = lastName = "";
    weight = 0;}
    Person(string, string,FeetInches, int);
    void print();
    int getPercentage();
    
};

FeetInches::operator double()
{
    return feet + (inches/12.0);
}

FeetInches::operator int()
{
    return feet;
}

FieldGoal::operator double()
{
    return goals / attempts;
}

Person::Person(string fName,string lName,FeetInches h,int w)
{
    firstName = fName;
    lastName = lName;
    height = h;
    weight = w;
}

int Person::getPercentage()
{

}

void Person::print()
{
    // cout << firstName << " " << lastName;
    // cout << "\nHeight: " << height.getFeet();
    // cout << "\'" << height.getInches() << "\"\n";
    // cout << "Weight: " << weight << " lb.\n";
    
    cout << "FieldGoal percentage: " << getPercentage() << endl;
}

int main()
{
    
    FeetInches height(6,3);
    Person pointGuard("Stephen", "Curry",height, 190);
    pointGuard.print();

    FeetInches height2(6,7);
    int intHeight = height;
    double dHeight = height;
    cout << "intHeight: " << intHeight << endl;
    cout << "dHeight: " << dHeight << endl;
}