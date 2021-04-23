// IntCollection class header
// CS 110B Max Luttrell

#ifndef INTCOLLECTION_H
#define INTCOLLECTION_H

const int CHUNK_SIZE=5;	// allocate memory in chunks of ints of this size

class IntCollection
{
  private:
    int size;           // the number of ints currently stored in the int collection
    int capacity;       // the total number of elements available for stoarge in the data array 
    int* data;          // a pointer to the dynamically allocated data array
    void addCapacity(); // a private member function to allocate more memory if necessary
  public:
  	IntCollection();									// constructor
  	~IntCollection();									// destructor, to be added!
	  IntCollection(IntCollection &c);			// copy constructor, to be added!
	  void add(int value);
	  int get(int index);
	  int getSize();
	  IntCollection& operator=(IntCollection &c);	// to be added!
	  bool operator==(IntCollection &c);		// to be added!
	  IntCollection& operator<<(int value);			// to be added!
};

#endif
