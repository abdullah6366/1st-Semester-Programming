#include<iostream>
using namespace std;
int main() {
float i, p, chances;
cout << "Enter the number of imposters : ";
cin >> i;
cout << "Enter the number of players : ";
cin >> p;
chances = (i/p)*100;
cout << "Total chances : " << chances << " percent";
}