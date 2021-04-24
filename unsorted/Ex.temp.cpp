// Exercise 7B: Oscar Villagrana

#include <string>
using namespace std;

int main {

    int num = NULL;

    cout << "How many types store in num?" << endl;
    cin >> num >> endl;


    string *burritoPtr = new string [num];

    cout << "Enter burrito types: " << num endl;
    for (int i=0; i<num; i++)
        cin >> *(burritos+i);
}


string getData() {
    
    string numBurritos = NULL;


}

write
int *ptr


string names[3] = {"Carnitas", "Pollo", "Veggies"};
float prices[3] = {6.95, 6.25, 5.95};

int *namePtr = names[];
int *pricePtr = prices[]; 


for (int i = 0; i < 3; i++)
    *(namePtr+i) = names[i] + "Especial";
    *(pricePtr+i) += 2;