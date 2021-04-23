// testReview.cpp


// 13?
int main()
{
    int array[] = {2, 6, 8};
    cout << countMult(array,3);
}

int countMult(const int array[], int size)
{
    int count =0;

    for (int i=0; i<size; i++)
    {
        if (array[i] % 3 == 0)
            count += 1;
    }
    return count;
}

// 19

int total =0;

for (int i= 0; i < NUM_PLAYERS; i++)
{
    for (int j = 0; j<NUM_CARDS; j++)
    {
        total += cards [i][j];
    }
}

// 24

int findMax (int array [], int size)
{
    int max = array[0];

    for(int i=0; i<size; i++)
    {
        if(array[1] > max)
            max = array[i];
    }
    return max;
    
}
