// not in hw but usefull
// sorts array of length size using selection sort algorithm
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

// not in hw but usefull example
void findSpacesCount()
{
    // Locate the first space, or the null terminator if there are no spaces
    int WordCount=0;
    while (userName[count] != ' ' && userName[count] != '\0')
        count++ ;

    // If a space was found , replace it with a null terminator .
    if (userName[count] == ' ')
        userName [count] = '\0';
}
