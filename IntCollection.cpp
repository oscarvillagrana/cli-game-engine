// IntCollection class implementation
// CS 110B Max Luttrell

#include "IntCollection.h"
#include <iostream>
using namespace std;

// ***********************************************************//
// **********************included code************************//
// ***********************************************************//

IntCollection::IntCollection()
{
  //initialize member data to reflect an empty IntCollection
  size = capacity = 0;
  data = NULL;
}

void IntCollection::addCapacity()
{
  //create a new, bigger buffer, copy the current data to it, delete 
  //the old buffer, and point our data pointer to the new buffer
  //
  //note: there is a more efficient way to do this using the C 
  //memory management function realloc(), but that is beyond the 
  //scope of our course
  int *newData;
  capacity += CHUNK_SIZE;
  newData = new int[capacity];
  for (int i=0; i<size; i++)
    newData[i] = data[i];
  delete [] data;
  data = newData;
}

void IntCollection::add(int value)
{  
  //first, allocate more memory if we need to
  if (size == capacity)
    addCapacity();

  //now, add the data to our array and increment size
  data[size++] = value;
}

int IntCollection::get(int index)
{  
  if (index<0 || index>=size)
  {
  	cout << "ERROR: get() trying to access index out of range.\n";
  	exit(1);
  }

  return data[index];
}

int IntCollection::getSize()
{
	return size;
}

// ***********************************************************//
// *************************my code***************************//
// ***********************************************************//


// 1. The Copy Constructor
// The copy constructor should perform a deep copy of the argument object, 
// i.e. it should construct an IntCollection with the same size and capacity as the argument, 
// with its own complete copy of the argument's data array.

IntCollection::IntCollection(IntCollection &c)      // copy constructor, to be added!
{
  cout << " ---- in copy constructor ---- " << endl;

  *this = c;
}


// 2. The Assignment Operator (=)
// The assignment operator should also perform a deep copy of the argument object.  
// It must return itself (or more efficiently, a reference to itself) in order to support multiple assignments on the same line, 
// e.g. a = b = c.  
// If you implement your assignment operator first it could be used in the copy constructor, but this is not a requirement.

IntCollection& IntCollection::operator =(IntCollection &c) // to be added!
{
  cout << " ---- in Assignment Operator ---- " << endl;

  // I removed delete because it created following error:
  // munmap_chunk(): invalid pointer
  // Aborted (core dumped)

  // delete [] data;

  size = c.getSize();

  capacity = c.capacity;

  data = new int[size];

  for (int i=0; i<size; i++)
    data[i] = c.get(i);

  return *this;
}


// 3. The Is Equals operator (==)
// The "is equals" operator should return true if the argument object has the same size as the receiving object, 
// and the values in both objects’ data arrays are identical.

bool IntCollection::operator ==(IntCollection &c)    // to be added!
{
  cout << " ---- in Equals Operator ---- " << endl;

  if (c.getSize() == getSize())
  {
    for (int i=0; i<size; i++)
    {
        if (c.get(i) == get(i))
          cout << "true" << endl;
    }
    cout << "finaly true" << endl;
    return true;

  }
  else
    cout << "false" << endl;
    return false;
}

// 4. The insertion operator (<<). 
// The insertion operator should add the int parameter into the receiving IntCollection.  
// The functionality is the same as the add() function, i.e. add ints to the collection.  
// Note, however, that this function must return a reference to itself in order to support multiple insertions on the same line, 
// e.g. c << 45 << -210.  
// Unlike the assignment operator, this return must be done by reference, because each insertion actually modifies the IntCollection object, and insertion is done from left to right.  

IntCollection& IntCollection::operator <<(int value)     // to be added!
{
  cout << " ---- in Insertion Operator ---- " << endl;

  //first, allocate more memory if we need to
  if (size == capacity)
    addCapacity();

  //now, add the data to our array and increment size
  data[size++] = value; 
  
  return *this;
}


// 5.  The destructor
// Function add() calls addCapacity() to allocate memory when it needs more room.  
// Nowhere in this program is the memory deallocated with delete [], which means we have a memory leak!  
// Add a destructor which correctly handles this.  

IntCollection::~IntCollection()                 // destructor, to be added!
{
  cout << " ---- in destructor ---- " << endl;
  delete [] data;
  data = NULL;
}


/*
What to Submit?

You should test the new constructor and operators to your own satisfaction using a test program, e.g. a main() function in main.cpp.  Make sure your tests demonstrate all of the required functionality including multiple assignments on the same line and multiple insertions on the same line.  Paste sample output showing your test results at the bottom of your main program file main.cpp.  In addition to sample output, include an answer to question 6 above.


Submit a zip file containing three files to Canvas:

IntCollection.h (or IntCollection.hpp)

IntCollection.cpp

main.cpp, including sample output and your answer to question 6 at the bottom.  
*/
