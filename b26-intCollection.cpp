b26-intCollection.cpp

Assignment 11 - Int Collection
CS110B Assignment 11: Int Collection
City College of San Francisco

Instructor: Max Luttrell

Fall 2019


Take a close look at the code in IntCollection.zip on my web site. The IntCollection class is a dynamic storage mechanism for storing integers.  It could be used in place of an integer array.  


The following code creates an IntCollection object named ‘c’.  It adds seven integers to ‘c’, then uses a for loop to display the seven integers:


int main()

{

IntCollection c;

c.add(45);

c.add(-210);

c.add(77);

c.add(2);

c.add(-21);

c.add(42);

c.add(7);


for (int i = 0; i < c.getSize(); i++)

{

        cout << c.get(i) << endl;

}

}


For this assignment you will add a copy constructor, a destructor, and three overloaded operators to the IntCollection class.  In the design diagram below, the black member functions represent code that has already been implemented.  You will be implementing the green items.  Each item that you will be adding to the class is described below the diagram.


Private:

  int size            // the number of ints currently stored in the int collection

  int capacity        // total number of elements available in data array

  int* data           // a pointer to the dynamically allocated data array

  void addCapacity(); // private function to allocate more memory if necessary

Public:

  IntCollection()

  ~IntCollection()

  IntCollection(const IntCollection &c)

  void add(int value)

  int get(int index)

  int getSize()

  IntCollection& operator=(const IntCollection &c)

  bool operator==(const IntCollection &c)

  IntCollection& operator<<(int value)


1. The Copy Constructor.  The copy constructor should perform a deep copy of the argument object, i.e. it should construct an IntCollection with the same size and capacity as the argument, with its own complete copy of the argument's data array.


2. The Assignment Operator (=). The assignment operator should also perform a deep copy of the argument object.  It must return itself (or more efficiently, a reference to itself) in order to support multiple assignments on the same line, e.g. a = b = c.  If you implement your assignment operator first it could be used in the copy constructor, but this is not a requirement.


3. The Is Equals operator (==). The "is equals" operator should return true if the argument object has the same size as the receiving object, and the values in both objects’ data arrays are identical.


4. The insertion operator (<<). The insertion operator should add the int parameter into the receiving IntCollection.  The functionality is the same as the add() function, i.e. add ints to the collection.  Note, however, that this function must return a reference to itself in order to support multiple insertions on the same line, e.g. c << 45 << -210.  Unlike the assignment operator, this return must be done by reference, because each insertion actually modifies the IntCollection object, and insertion is done from left to right.  


5.  The destructor. Function add() calls addCapacity() to allocate memory when it needs more room.  Nowhere in this program is the memory deallocated with delete [], which means we have a memory leak!  Add a destructor which correctly handles this.  


6.  addCapacity.  Note that addCapacity() is a private member function.  What happens if you try to call it from outside the class, i.e. by adding the line below to main()?

c.addCapacity();


What to Submit?

You should test the new constructor and operators to your own satisfaction using a test program, e.g. a main() function in main.cpp.  Make sure your tests demonstrate all of the required functionality including multiple assignments on the same line and multiple insertions on the same line.  Paste sample output showing your test results at the bottom of your main program file main.cpp.  In addition to sample output, include an answer to question 6 above.


Submit a zip file containing three files to Canvas:

IntCollection.h (or IntCollection.hpp)

IntCollection.cpp

main.cpp, including sample output and your answer to question 6 at the bottom.  



Published by Google Drive–Report Abuse–Updated automatically every 5 minutes