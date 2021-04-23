#include <string>
#include <iostream>
#include <cstring>
using namespace std;

void swapperInt(int *x, int *y);
void swapperChar(char &x, char &y);
int lastIndexOf(char *s, char target);
void reverse(char *s);
int findSubstring(char *s, char substring[]);
bool isPalindrome(char *s);
void reverseWords(char *s);

int main()
{
    
    const int MAX_CHARS = 128;

    char slogan[MAX_CHARS] = "an on in";

    cout << slogan << endl;

    reverseWords(slogan);

    cout << "after: " << slogan << endl;    


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
    
    int SpaceIndex=0;

    for (int i=0;i<length;i++)
    {   
        // find the space char
        if (s[i] == ' ')
            
            SpaceIndex = i;

                    // iterate starting at the end of the array
            for (int j = SpaceIndex; j!=0; j--)
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
            
            cout << SpaceIndex << endl;

            // // for the first word in string
            // for (int j=0; j<=SpaceIndex; j++)
            // {
            //     // swap the lowest word to the end of the string
            //     for (int h=0; h<length-1; h++)   
            //         swapperChar(s[h],s[h+1]);
            //         cout << s << endl;
            // }

        // Swap the \0 to the end of the string
        if (s[i] == '\0')
            {
            // swap the null terminator with the last element
            swapperChar(s[i], s[length]);

            // bubble sort the null index to the end of the array
            // int nullIndex = s[i];
            // for (int j=s[i]; j<length; j++)
            // {
            //     // swap the lowest word to the end of the string
            //     for (int h=0; h<length; h++)   
            //         swapper(s[h],s[h+1]);
            // }

            }
    }
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
    char scopy[length];

    // first make a copy of string
    cout << strcpy(scopy,s) << endl;

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



// 4.  
// This function returns the index in string s where the substring can first be found. 
// For example if s is “Skyscraper” and substring is “ysc” the function would return 2.  
// It should return -1 if the substring does not appear in the string.

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

// 2.  
// This function alters any string that is passed in. It should reverse the string. 
// If “flower” gets passed in it should be reversed in place to “rewolf”.  
// To be clear, just printing out the string in reverse order is insufficient to receive credit, you must change the actual string to be in reverse order.


void reverse(char *s)
{
    // swapperChar(s[0],s[1]);


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
    const int MAX_CHARS = 128;
    char slogan[MAX_CHARS] = "Go Giants!";
    // slogan[5] = '\0';
    cout << slogan << endl;
    int length = strlen(slogan);
    cout << length << endl;
    cout << lastIndexOf(slogan, 'a') << endl;
}


void testReverse()
{
    const int MAX_CHARS = 128;
    char slogan[MAX_CHARS] = "Go Giants!";

    cout << slogan << endl;

    reverse(slogan);

    cout << "after: " << slogan << endl;    

}

void testFindSubstring()
{
    const int MAX_CHARS = 128;

    char slogan[MAX_CHARS] = "Go Giants!";

    cout << slogan << endl;

    char substring[MAX_CHARS] = "ants";

    cout << findSubstring(slogan,substring) << endl;
}


void testIsPalindtrome()
{
    const int MAX_CHARS = 128;
    char slogan[MAX_CHARS] = "hannah";

    cout << slogan << endl;

    cout << "after: " << slogan << endl;    

    cout << isPalindrome(slogan) << endl;
}

void testReverseWords()
{
    const int MAX_CHARS = 128;

    char slogan[MAX_CHARS] = "an on in";

    cout << slogan << endl;

    reverseWords(slogan);

    cout << "after: " << slogan << endl;    
}


// other tester

    // *ptr1 = 75000;

    // cout << "The score is now: " << score1 << endl;
    // cout << "The score is now: " << *ptr1 << endl;

    // // checking for pointer in array notation

    // const int NUMCARDS = 4;
    // int cards[NUMCARDS];
    
    // cout << "Enter " << NUMCARDS << " cards:\n";
    // for (int i=0; i<NUMCARDS; i++)
    //     cin >> *(cards+i);
    //     cout << "Here are the cards: " << endl;
    
    // for (int i=0; i<NUMCARDS; i++)
    //     cout << *(cards+i) << endl;    

// void swapperInt(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }



// swap tester

    // // checking for pointer in swapper

    // int score1 = 10;
    // int score2 = 5;
    
    // int *ptr1 = NULL;
    // int *ptr2 = NULL;

    // ptr1 = &score1;
    // ptr2 = &score2;
    // cout << ptr1 << " " << *ptr1 << endl;
    
    // cout << "score 1: " << score1 << endl;
    // cout << "score 2: " << score2 << endl;
    // cout << "pointer 1: " << *ptr1 << endl;
    // cout << "pointer 2: " << *ptr2 << endl;
    
    // swapper(ptr1,ptr2);

    // cout << "score 1: " << score1 << endl;
    // cout << "score 2: " << score2 << endl;
    // cout << "pointer 1: " << *ptr1 << endl;
    // cout << "pointer 2: " << *ptr2 << endl;

