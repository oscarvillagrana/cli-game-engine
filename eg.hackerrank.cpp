// eg.hackerrank.cpp

// Day 8:

int n;
string name;
long num;
cin >> n;
cin.ignore();
map <string, long> pBook;
for (int i = 0; i < n; i++) {
    cin >> name;
    cin >> num;
    pBook[name] = num;
}
while(cin >> name) {
    if (pBook.find(name) != pBook.end()) {
        cout << name << "=" << pBook.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}

// Day 9: Recursion

using System; 
using System.Collections.Generic; 
using System.IO; class Solution {

static void Main(String[] args) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */

    int n=Convert.ToInt32(Console.ReadLine());
    int result=Factorial(n);
    Console.WriteLine(result);
}   
public static int Factorial(int n)
  {
    if (n<=1){
        return 1; 
    }
      else {
    return n*Factorial(n-1);
            }
  }
}

// version 2

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int total, int num) {
    if (num <= 1) {
        cout << 1 << "\n";
    } else {
        cout << factorial(num, num - 1) << "\n";
    }
}

int main() {
    int num;
    cin >> num;
    cout << factorial(num, num - 1) << "\n";
    return 0;
}

// version 3
