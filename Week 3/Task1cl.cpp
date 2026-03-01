#include<iostream>
using namespace std;
int main() {
	float aggregate;
	string name;
	char section;
	int roll_no;
	cout << "Enter your name : ";
	cin >> name;
	cout << "Enter your roll number : ";
	cin >> roll_no;
	cout << "Enter your section : ";
	cin >> section;
	cout << "Enter your aggregate : ";
	cin >> aggregate;
	cout << "\n \n";
	cout << " --- Student info --- \n" << endl;
	cout << "Your name is : " << name << endl;
	cout << "Roll no is : " << roll_no << endl;
	cout << "Your section is : " << section << endl;
	cout << "Your aggregate is : " << aggregate << endl;


}