#include <iostream>

using namespace std;

int main()
{ 
    int size = 5;
    int list[size] = {3, 3, 3, 4, 5};
    int value = 3;

    int pos = 0;
    bool isFound = false;

    while (!isFound && pos < size)
    {
        if (list[pos] == value)
            cout << "1" << endl;
            // isFound == true;
            // if (isFound)
        pos++;
    }
    return isFound;
}
