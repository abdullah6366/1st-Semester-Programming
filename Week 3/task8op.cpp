#include<iostream>
using namespace std;
int main() {
float voltage,current, power;
cout << "Enter the amount of voltage : ";
cin >> voltage;
cout << "Enter the amount of current : ";
cin >> current;
power = voltage*current;
cout << "The value of power : " << power << " watts ";
}