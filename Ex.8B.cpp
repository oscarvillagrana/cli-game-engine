// Ex.8B.cpp

#include <string>
#include <iostream>
using namespace std;

float getProfit(SalesRecord r);
void printReport(SalesRecord* records, int size);

int numTypes;

struct Cost
{
    double wholesale;
    double retail;
};

struct SalesRecord
{
    string burritoType;
    int numSold;
    Cost pricing;
};


int main()
{


SalesRecord myRecord;
myRecord.burritoType = "Carnitas";
myRecord.numSold = 8;
myRecord.pricing.wholesale = 3.25;
myRecord.pricing.retail = 7.25;

unitProfit = myRecord.pricing.retail - myRecord.pricing.wholesale;
totalProfit = myRecord.numSold*unitProfit;


void inputRecord(SalesRecord *r)

void printReport(SalesRecord* records, int size);

}


void oldInputRecord()
{
    for (int i; i < numTypes; i++)
    {
        cout << "Enter burrito type" << i+1 << ": " << end;
        cin >> sales[i].burritoType >> endl;
        cout << "Enter burritos sold: " << end;
        cin >> sales[i].numSold >> endl;
        cout << "Enter burrito type" << i+1 << "wholeSaleCost: " << end;
        cin >> sales[i].burritoType >> endl;
        cout << "Enter burrito type" << i+1 << "retailCosts: " << end;
        cin >> sales[i].burritoType >> endl;

    }
}

// then get the names of the types and the number of burritos sold of each type of that day. 
void inputRecord(SalesRecord *r)
{
    cout << "Please enter burrito type: \n";
    cin >> r->burritoType;
    cout << "Please enter number sold: \n";
    cin >> r->numSold;
    cout << "Please enter wholesale cost: \n";
    cin >> r->pricing.wholesale;
    cout << "Please enter retail cost: \n";
    cin >> r->pricing.retail;
}

// takes a SalesRecord as a parameter (by value), and returns the total profit from selling all the burritos of this type
float getProfit(SalesRecord r)
{
    // returns total profits of this type
    double unitProfit, totalProfit;
    Cost wholesale, retail;

    wholesale = r.pricing.wholesale;
    retail = r.pricing.retail;
    numSold = r.numSold;

    unitProfit = retail - wholesale; 
    totalProfit = unitProfit * numSold;

    return totalProfit;
}

// steps through your array of SalesRecords and prints out the total profit for all burritos sold
void printReport(SalesRecord* r, int size)
{

    double unitProfit, totalProfit;


    // print total profit for all burritos
    for (i = 0; i < size; i++)
        getProfit();
        cout << "Type: " << r[i].burritoType << endl;
        cout << "Number sold: " << r[i].numSold << endl;

        unitProfit = r[i].pricing.retail - r[i].pricing.wholesale;
        totalProfit = unitProfit*r.numSold;

        cout << "Unit profit: " << unitProfit << endl;
        cout << "Total profit: " << totalProfit << endl;



}
