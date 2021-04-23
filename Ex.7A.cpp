// Exercise 7A: Oscar Villagrana

#include <string>

string names[3] = {"Carnitas", "Pollo", "Veggies"};
float prices[3] = {6.95, 6.25, 5.95};

int *namePtr = names[];
int *pricePtr = prices[]; 


for (int i = 0; i < 3; i++)
    *(namePtr+i) = names[i] + "Especial";
    *(pricePtr+i) += 2;