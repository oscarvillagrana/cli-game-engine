// a24_C-Strings.cpp

// Implement the following functions.  Each function deals with null terminated C-strings.  You can assume that any char array passed into the functions will contain valid, null-terminated data.  Your functions must have the signatures listed below.  

int lastIndexOf(char *s, char target)
void reverse(char *s)
int replace(char *s, char target, char replacementChar)
int findSubstring(char *s, char substring[])
bool isPalindrome(char *s)
void reverseWords(char *s)

// 1.  
// This function returns the last index where the target char can be found in the string. 
// it returns -1 if the target char does not appear in the string.  For example, if s is “Giants” and target is ‘a’ the function returns 2.

int lastIndexOf(char *s, char target)
{
    // assigns the last index
    int length = strlen(s);

    // returns -1 if the target char does not appear
    if (length <= 0)
    {
        return -1;
    }
    else 
        return length - 1;
}

// 2.  
// This function alters any string that is passed in. It should reverse the string. 
// If “flower” gets passed in it should be reversed in place to “rewolf”.  
// To be clear, just printing out the string in reverse order is insufficient to receive credit, you must change the actual string to be in reverse order.

void reverse(char *s)
{
    int size = strlen(s)+1;

    for (int j = size-1; j!=0; j--)
    {
        for (int i=0; i<j; i++)
        {
        //now, swap the lowest element we found with element at position i
        swapper(array[i],array[i+1]);
        }
    }
}


void swapper(int& x, int& y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

//sorts array of length size using selection sort algorithm
void selectionSort(int array[], int size)
{
    int lowestValue, lowestPosition;
    for (int i=0; i<size-1; i++)
    {
        //first, find position of lowest element in positions i through size-1
        lowestValue = array[i];
        lowestPosition = i;
        for (int j=i+1; j<size; j++)
        {
            if (array[j]<lowestValue)
            {
                lowestPosition = j;
                lowestValue = array[j];
            }
        }
        //now, swap the lowest element we found with element at position i
        swapper(array[i],array[lowestPosition]);
    }
}

// 3.  
// This function finds all instances of the char ‘target’ in the string and replaces them with ‘replacementChar’.  
// It also returns the number of replacements that it makes.  
// If the target char does not appear in the string it returns 0 and does not change the string.  
// For example, if s is “go giants”, target is ‘g’, and replacement is ‘G’, the function should change s to “Go Giants” and return 2.

int replace(char *s, char target, char replacementChar)
{


    cout << "String: " << endl;
    int counter = 0;
    length = s;

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

// 4.  
// This function returns the index in string s where the substring can first be found. 
// For example if s is “Skyscraper” and substring is “ysc” the function would return 2.  
// It should return -1 if the substring does not appear in the string.

int findSubstring(char *s, char substring[])
{
    int length = strlen(s);
    int foundSubstring = 0;
    // find index of the string
    for(i=0; i<length; i++)
    {
        // compare two strings for equivalence
        if(!strcmp(s, substring))
            return [i]
            foundSubstring += 1;
    }
    if (foundSubstring = 0)
        return -1;
}



// 5. 
// This function returns true if the argument string is a palindrome. 
// It returns false if it is not.  A palindrome is a string that is spelled the same as its reverse.  
// For example “abba” is a palindrome. So is “hannah”, “abc cba”, and “radar”.
// Note: do not get confused by white space characters. They should not get any special treatment.  
// “abc ba” is not a palindrome. It is not identical to its reverse.

bool isPalindrome(char *s)
{
    if(s = reverse(s))
        return true;
    else
        return false;
}



// 6. 
// Extra Credit, up to 10 extra points.  
// This function should reverse the words in a string.  
// A word can be considered to be any characters, including punctuation, separated by spaces (only spaces, not tabs, \n etc.).  
// So, for example, if s is “The Giants won the Pennant!” the function should change s to “Pennant! the won Giants The”

void reverseWords(char *s)
{
    
    int length = strlen(s);
    int SpaceIndex=0;

    for (int i;i<length;i++)


        
        // find index of space
        if (s[i] != ' ' || s[i] != '\0')
            SpaceIndex = s[i];
            
            for (int j=0; j<=SpaceIndex; j++)
            {

                //now, swap the lowest element we found with element at position i
                swapper(s[j],s[j+1]);
            }


    // Locate the first space, or the null terminator if there are no spaces
    int WordCount=0;
    while (userName[count] != ' ' && userName[count] != '\0')
        count++ ;

    // If a space was found , replace it with a null terminator .
    if (userName[count] == ' ')
        userName [count] = '\0';
}


// You can get up to 5 extra credit points if you implement this correctly.  
// You can get up to another 5 extra credit points if you do it without using any extra memory, e.g. another array.  
// Note: this is one of the classic coding questions given during programming interviews.

// Requirements

// - You may use strlen(), strcmp(), and strncpy() if you wish, but you may not use any of the other C-string library functions such as strstr(), strncat(), etc.  
// - You will not receive credit for solutions which use C++ string objects, you must use C-Strings (null-terminated arrays of chars) for this assignment.

// Submission
// Submit a file containing your program and some sample output which demonstrates all of your functions working correctly and fully, at minimum with the examples listed above.  This means that you will need to write a simple main() function to call all of your functions and show that they work.  As usual, submit via Canvas.
