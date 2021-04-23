// a24_C-Strings.cpp

// Implement the following functions.  Each function deals with null terminated C-strings.  You can assume that any char array passed into the functions will contain valid, null-terminated data.  Your functions must have the signatures listed below.  

#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int lastIndexOf(char *s, char target);
void reverse(char *s);
int replace(char *s, char target, char replacementChar);
int findSubstring(char *s, char substring[]);
bool isPalindrome(char *s);
void reverseWords(char *s);
void swapperChar(char& x, char& y);

void testLastIndex();
void testReverse();
void testReplace();
void testFindSubstring();
void testIsPalindrome();
void testReverseWords();

int main()
{
    testLastIndex();
    testReverse();
    testReplace();
    testFindSubstring();
    testIsPalindrome();
    testReverseWords();
}

// 1.  
// This function returns the last index where the target char can be found in the string. 
// it returns -1 if the target char does not appear in the string.  For example, if s is “Giants” and target is ‘a’ the function returns 2.


int lastIndexOf(char *s, char target)
{
    // assigns the last index
    int length = strlen(s);

    int count = 0;          // count targets found
    int hIndex = 0;         // highest index
    int newIndex = 0;

    // iterate through whole string
    for(int i=0; i<length; i++)
    {
        // count how many target characters found
        if(s[i] == target)
        {
            count+=1;
            newIndex=i;
        }

        // assign highest index to variable
        if(newIndex>hIndex)
            hIndex=newIndex;
    }
    // returns -1 if the target char does not appear
    if (count < 1)
        return -1;
    else 
        return hIndex;
}

void testLastIndex()
{   
    cout << "\n 1. LastIndex() \n" << endl;
    const int MAX_CHARS = 128;
    char slogan[MAX_CHARS] = "I have many apples!";

    cout << slogan << endl;

    int length = strlen(slogan);
    char finding = 'a';

    cout << "Char to search for: " << finding << endl;
    cout << "Last location: " << lastIndexOf(slogan, finding) << endl;
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
            // char x= s[i];
            // char y= s[i+1];
            // swapper(&x,&y);

            swapperChar(s[i],s[i+1]);
        }
    }
}

void swapperChar(char& x, char& y)
{
    char temp = x;
    x = y;
    y = temp;
}


void testReverse()
{
    cout << "\n 2. Reverse() \n" << endl;
    const int MAX_CHARS = 128;
    char slogan[MAX_CHARS] = "Go Giants!";

    cout << slogan << endl;

    reverse(slogan);

    cout << "after: " << slogan << endl;    

}



// 3.  
// This function finds all instances of the char ‘target’ in the string and replaces them with ‘replacementChar’.  
// It also returns the number of replacements that it makes.  
// If the target char does not appear in the string it returns 0 and does not change the string.  
// For example, if s is “go giants”, target is ‘g’, and replacement is ‘G’, the function should change s to “Go Giants” and return 2.

// works
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


void testReplace()
{
    cout << "\n 3. Replace() \n" << endl;
    const int MAX_CHARS = 128;
    char slogan[MAX_CHARS] = "Go Giants, all day long!";

    cout << slogan << endl;

    char target = 'a';
    char replacementChar = 'o';

    replace(slogan, target, replacementChar);
    cout << "after: " << slogan << endl;    

}


// 4.  
// This function returns the index in string s where the substring can first be found. 
// For example if s is “Skyscraper” and substring is “ysc” the function would return 2.  
// It should return -1 if the substring does not appear in the string.

// works
int findSubstring(char *s, char substring[])
{
    int length = strlen(s)+1;
    int foundSubstring = 0;
    int subLength = strlen(substring);
    int counter = 1;
    // find index of the string
    for(int i=0; i<length; i++)
    {
        // compare two strings for equivalence
        if(s[i]==substring[0])
        {
            for(int j=1; j<subLength; j++)
            {
                if(s[i+j]==substring[j])
                    counter += 1;

                    if(counter == subLength)
                        return i;
            }
        }
    }
    if (counter == 1)
        return -1;
}



void testFindSubstring()
{
    const int MAX_CHARS = 128;

    cout << "\n 4. FindSubstring() \n" << endl;
    char slogan[MAX_CHARS] = "Go Giants!";

    cout << slogan << endl;

    char substring[MAX_CHARS] = "ants";

    cout << "Substring: " << substring << endl;

    cout << "Location: " << findSubstring(slogan,substring) << endl;
}


// 5. 
// This function returns true if the argument string is a palindrome. 
// It returns false if it is not.  A palindrome is a string that is spelled the same as its reverse.  
// For example “abba” is a palindrome. So is “hannah”, “abc cba”, and “radar”.
// Note: do not get confused by white space characters. They should not get any special treatment.  
// “abc ba” is not a palindrome. It is not identical to its reverse.

bool isPalindrome(char *s)
{
    int length = strlen(s);
    
    // first make a copy of string
    char scopy[length];

    strcpy(scopy,s);

    // then reverse the copy
    reverse(scopy);
    cout << scopy << endl;


    // finally compare the two
    if(strcmp(s,scopy) == 0)
        cout << "True " << endl;
        // return true;
    else
        cout << "False " << endl;
        // return false;
}


void testIsPalindrome()
{
    const int MAX_CHARS = 128;
    char slogan[MAX_CHARS] = "hannah";
    char slogan2[MAX_CHARS] = "Max";
    
    cout << "\n 5. IsPalindrome() \n" << endl;

    cout << slogan << endl;
    cout << isPalindrome(slogan) << endl;

    cout << slogan2 << endl;
    cout << isPalindrome(slogan2) << endl;
    // cout << "after: " << slogan << endl;    

}

// 6. 
// Extra Credit, up to 10 extra points.  
// This function should reverse the words in a string.  
// A word can be considered to be any characters, including punctuation, separated by spaces (only spaces, not tabs, \n etc.).  
// So, for example, if s is “The Giants won the Pennant!” the function should change s to “Pennant! the won Giants The”

void reverseWords(char *s)
{
    
    int length = strlen(s);
    
    cout << length << endl;
    
    int lastIndex=0;
    int newIndex=0;
    int spaceCount=0;

    for (int i=0;i<length;i++)
    {   
        // cout << "i: " << i << endl;
        // find the space char
        if (s[i] == ' ' or s[i] == '\0')
        {    
            newIndex = i;

            // cout << "newIndex: " << newIndex << endl;
            // cout << "i: " << i << endl;

            // iterate starting at the end of the array
            for (int j = newIndex; j!=0; j--)
            {
                // cout << "j: " << j << endl;

                // swap the first element to the end of the array
                for (int h=lastIndex; h<j-1; h++)
                {
                    // cout << "h: " << h << endl;
                    swapperChar(s[h],s[h+1]);
                    cout << s << endl;
                }
            }
            // cout << "lastIndex: " << lastIndex << endl;
        }    
        lastIndex = newIndex;

        spaceCount += 1;
    }
}

void testReverseWords()
{
    cout << "\n 6. ReverseWords() \n" << endl;
    const int MAX_CHARS = 128;

    char slogan[MAX_CHARS] = "All in one full days work";

    cout << slogan << endl;

    reverseWords(slogan);

    cout << "after: " << slogan << endl;    
}


// Sample Output

//  1. LastIndex() 

// I have many apples!
// Char to search for: a
// Last location: 12

//  2. Reverse() 

// Go Giants!
// after: !stnaiG oG

//  3. Replace() 

// Go Giants, all day long!
// after: Go Gionts, oll doy long!

//  4. FindSubstring() 

// Go Giants!
// Substring: ants
// Location: 5

//  5. IsPalindrome() 

// hannah
// hannah
// True 
// 32
// Max
// xaM
// False 
// 32

//  6. ReverseWords() 

// All in one full days work
// 25
// lAl in one full days work
// llA in one full days work
// llA in one full days work
// llAi n one full days work
// llAin  one full days work
// llAni  one full days work
// llAni o ne full days work
// llAni on e full days work
// llAni one  full days work
// llAni noe  full days work
// llAni neo  full days work
// llAni eno  full days work
// llAni eno f ull days work
// llAni eno fu ll days work
// llAni eno ful l days work
// llAni eno full  days work
// llAni eno ufll  days work
// llAni eno ulfl  days work
// llAni eno ullf  days work
// llAni eno lulf  days work
// llAni eno lluf  days work
// llAni eno lluf  days work
// llAni eno lluf d ays work
// llAni eno lluf da ys work
// llAni eno lluf day s work
// llAni eno lluf days  work
// llAni eno lluf adys  work
// llAni eno lluf ayds  work
// llAni eno lluf aysd  work
// llAni eno lluf yasd  work
// llAni eno lluf ysad  work
// llAni eno lluf syad  work
// after: llAni eno lluf syad  work



// You can get up to 5 extra credit points if you implement this correctly.  
// You can get up to another 5 extra credit points if you do it without using any extra memory, e.g. another array.  
// Note: this is one of the classic coding questions given during programming interviews.

// Requirements

// - You may use strlen(), strcmp(), and strncpy() if you wish, but you may not use any of the other C-string library functions such as strstr(), strncat(), etc.  
// - You will not receive credit for solutions which use C++ string objects, you must use C-Strings (null-terminated arrays of chars) for this assignment.

// Submission
// Submit a file containing your program and some sample output which demonstrates all of your functions working correctly and fully, at minimum with the examples listed above.  This means that you will need to write a simple main() function to call all of your functions and show that they work.  As usual, submit via Canvas.
