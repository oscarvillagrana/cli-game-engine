Ex.5A.cpp

void sortArray(int array[], int size)
{
    bool swapped; //set swapped true if any swap occurs
    do
    {  
        swapped = false;
        for (int i = 0; i < (size-1); i++)
        {
            if (array[i] > array[i+1])
            {
                swapper(array[i], array[i+1]);
                swapped = true;
            }
        }
    } while (swapped);
}

// file input
long int creditCard;
ifstream inputFile;
inputFile.open("creditcard.txt");
if (!inputFile)
{
cout << "ERROR: Invalid filename\n";
exit(1);
}
inputFile >> creditCard;
cout << "The credit card number is: " << creditCard << endl;
inputFile.close();