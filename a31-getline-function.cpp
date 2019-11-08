// char* getLine() 
//   - read in a line of text and return it in a dynamically allocated array
// Max Luttrell

#include<iostream>
#include<cstring>
using namespace std;

// read in a line of text and return it in a dynamically allocated array
char* getLine() 
{
  const int BUFFER_SIZE = 1000;

  // Allocate a buffer local to this function
  char buffer[BUFFER_SIZE];
    
  // Use cin.getline() to input the buffer from the user
  cin.getline(buffer, BUFFER_SIZE);
    
  // Find the length of the string in buffer
  int length = strlen(buffer);

  // Dynamically allocate an array, to be returned
  char *rValue = new char[length + 1];

  // Copy the string into the dynamically allocated array
  strncpy(rValue, buffer, length);

  // Return the address of the dynamically allocated array
  return rValue;
}   


int main() {
  char *name;

  cout << "String: ";
  name = getLine();
  cout << name << endl;

  // we are done with name now, return memory to system 
  // and set to NULL
  delete [] name;      
  name = NULL;

  return 0;
}
