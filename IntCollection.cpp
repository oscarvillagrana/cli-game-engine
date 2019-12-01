// IntCollection class implementation
// CS 110B Max Luttrell

#include "IntCollection.h"
#include <iostream>
using namespace std;

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


// ~IntCollection();                 // destructor, to be added!

// IntCollection::IntCollection(const IntCollection &c);      // copy constructor, to be added!

// IntCollection& operator=(const IntCollection &c); // to be added!

// bool operator==(const IntCollection &c);    // to be added!

// IntCollection& operator<<(int value);     // to be added!



/*
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
*/
