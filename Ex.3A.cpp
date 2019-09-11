// Exercise 3B: Oscar Villagrana
// This program prints out as many asterisks as the user wants.


#include <iostream>
using namespace std;


int main()
{
    float temperature = 0.0;

    cout << "Enter temperature in Fahrenheit: " << endl;
    cin >> temperature >> endl;

    cout << "Your temperature in Celcius: " << toCelciusByReference(temperature) << endl;
}

bool toCelciusByReference(float &temperature)
{
    float result = 0.0;

    result = 5 .0 / 9.0 * (temperature - 32);
    temperature = result;

    if (temperature > 32)
        return True;
    else
        return False;
}