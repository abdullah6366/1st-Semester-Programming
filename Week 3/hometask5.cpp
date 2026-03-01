#include<iostream>
using namespace std;
int main() {
	float target, days;
	string name;
	cout << "Enter the name of the person : ";
	cin >> name;
	cout << "Enter the target weight lose in kilograms : ";
	cin >> target;
	days = target * 15;
	cout << name << " will need " << days << " days to lose " << target << " kilogram of weight by following doctor suggestion. " << endl;


}