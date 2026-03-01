#include<iostream>
using namespace std;
int main() {
float lbs, kgs;
cout << "Enter the weight in lbs : ";
cin >> lbs;
kgs = lbs * 0.45359237;
cout << "The weight in kgs : " << kgs << " kilograms";
}