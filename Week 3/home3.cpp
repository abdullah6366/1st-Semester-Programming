#include<iostream>
using namespace std;
int main() {
	float initial, final, acc, time;
	cout << " Enter the value of initial velocity : ";
	cin >> initial;
	cout << "Enter the value of time : ";
	cin >> time;
	cout << "Enter the value of accelaration : ";
	cin >> acc;
	final = (acc * time) + initial;
	cout << " The value of final velocity is : " << final << " m/s " << endl;

}