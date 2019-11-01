#include <string>
#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *s);
void swapper(int x, int y);
int replace(char *s, char target, char replacementChar);

int main()
{


    const int MAX_CHARS = 128;
    char slogan[MAX_CHARS] = "Go Giants!";

    cout << "This is your slogan: " << slogan << endl;

    reverse(slogan);

    cout << "Reversed: " << slogan << endl;

    // char target = a;
    // char replacement = "o";

    // replace(&slogan,target,replacement);


}


// 2.  
// This function alters any string that is passed in. It should reverse the string. 
// If “flower” gets passed in it should be reversed in place to “rewolf”.  
// To be clear, just printing out the string in reverse order is insufficient to receive credit, you must change the actual string to be in reverse order.

void reverse(char *s)
{
    int length = strlen(s)-1;


    // iterate starting at the end of the array
    for (int j = length; j!=0; j--)
    {
        // swap the first element to the end of the array
        for (int i=0; i<j; i++)
        {
            swapper(*(s+i),*(s+i+1));
        }
    }
}

void swapper(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}


// 3.  
// This function finds all instances of the char ‘target’ in the string and replaces them with ‘replacementChar’.  
// It also returns the number of replacements that it makes.  
// If the target char does not appear in the string it returns 0 and does not change the string.  
// For example, if s is “go giants”, target is ‘g’, and replacement is ‘G’, the function should change s to “Go Giants” and return 2.


int replace(char *s, char target, char replacementChar)
{
    int counter = 0;
    int length = strlen(s);

    // find the character
    for (int i=0; i<length; i++)
    {
        // replace the character
        if(s[i] == target)
            s[i] = replacementChar;
            counter += 1;

    }

    return counter;
}
