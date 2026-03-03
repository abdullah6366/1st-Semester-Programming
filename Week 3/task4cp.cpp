#include<iostream>
using namespace std;
int main() {
float charge, time, current;
cout << "Enter the amount of charge : ";
cin >> charge;
cout << "Enter the value of time : ";
cin >> time;
current = charge / time;
cout << "The value of current : " << current << " ampere";
}