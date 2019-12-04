// b26-intCollection.cpp

// Assignment 11 - Int Collection
// CS110B Assignment 11: Int Collection

#include "IntCollection.cpp"
#include <iostream>
using namespace std;



// Take a close look at the code in IntCollection.zip on my web site. The IntCollection class is a dynamic storage mechanism for storing integers.  It could be used in place of an integer array.  

// For this assignment you will add a copy constructor, a destructor, and three overloaded operators to the IntCollection class.  In the design diagram below, the black member functions represent code that has already been implemented.  You will be implementing the green items.  Each item that you will be adding to the class is described below the diagram.

// class IntCollection 
// {
//   private:
//     int size            // the number of ints currently stored in the int collection
//     int capacity        // total number of elements available in data array
//     int* data           // a pointer to the dynamically allocated data array
//     void addCapacity(); // private function to allocate more memory if necessary
//   public:
//     IntCollection()
//     ~IntCollection()
//     IntCollection(const IntCollection &c)
//     void add(int value)
//     int get(int index)
//     int getSize()
//     IntCollection& operator=(const IntCollection &c)
//     bool operator==(const IntCollection &c)
//     IntCollection& operator<<(int value)
// }

void addOnce(IntCollection &c);
void addTwice(IntCollection &c);
void printTest1 (IntCollection &c);




// 6.  addCapacity
// Note that addCapacity() is a private member function.  
// What happens if you try to call it from outside the class, i.e. by adding the line below to main()?
// c.addCapacity();


int main()
{

  IntCollection c;
  addOnce(c);

  // c.addCapacity();
  // addCapacity()’ is private within this context
  // this is not accesable from outside of memeber funcitons


  cout << " ---- printing c ---- " << endl;
  printTest1(c);
  
  IntCollection d(c);

  cout << " ---- printing d ---- " << endl;
  printTest1(d);
  addTwice(d);
  
  cout << " ---- printing d ---- " << endl;
  printTest1(d);

  d = c;
  d == c;
  c << 10;
  cout << " ---- printing d ---- " << endl;
  printTest1(d);

  IntCollection a;
  addTwice(a);
  a == c;

  // IntCollection f(c);
  // IntCollection e;
  // f = e;
  // printTest1(f);
}


// The following code creates an IntCollection object named ‘c’.  It adds seven integers to ‘c’, then uses a for loop to display the seven integers:
void addOnce (IntCollection &c) {

  cout << " ---- in add function 1 ----" << endl;

  c.add(45);
  c.add(-210);
  c.add(77);
  c.add(2);
  c.add(-21);
  c.add(42);
  c.add(7);
}

void addTwice (IntCollection &c) {

  cout << " ---- in add function 2 ----" << endl;

  c.add(4);
  c.add(-21);
  c.add(7);
  c.add(2);
  c.add(-2);
  c.add(4);
  c.add(7);
}

void printTest1 (IntCollection &c) {

  for (int i = 0; i < c.getSize(); i++) {
    cout << c.get(i) << endl;
  }
}


// ***********************************************************
// --------------------sample output------------------------//
// ***********************************************************


//  ---- in add function 1 ----
//  ---- printing c ---- 
// 45
// -210
// 77
// 2
// -21
// 42
// 7
//  ---- in copy constructor ---- 
//  ---- in Assignment Operator ---- 
//  ---- printing d ---- 
// 45
// -210
// 77
// 2
// -21
// 42
// 7
//  ---- in add function 2 ----
//  ---- printing d ---- 
// 45
// -210
// 77
// 2
// -21
// 42
// 7
// 4
// -21
// 7
// 2
// -2
// 4
// 7
//  ---- in Assignment Operator ---- 
//  ---- in Equals Operator ---- 
// true
// true
// true
// true
// true
// true
// true
// finaly true
//  ---- in Insertion Operator ---- 
//  ---- printing d ---- 
// 45
// -210
// 77
// 2
// -21
// 42
// 7
//  ---- in add function 2 ----
//  ---- in Equals Operator ---- 
// false
//  ---- in destructor ---- 
//  ---- in destructor ---- 
//  ---- in destructor ---- 


// ***********************************************************
// ----------------answer to question 6---------------------//
// ***********************************************************

// c.addCapacity();
// addCapacity()’ is private within this context
// this is not accesable from outside of memeber funcitons