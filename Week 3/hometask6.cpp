<<<<<<< HEAD
#include<iostream>
using namespace std;
int main() {
	float weight, cp, area, price_per_pound, cp_square_foot, cost_per_square;
	cout << "Enter the size of fertilizer bag in pounds : ";
	cin >> weight;
	cout << "Enter the cost of the bag : ";
	cin >> cp;
	cout << "Enter the area in the square feet that can be covered by the bag : ";
	cin >> area;
	price_per_pound = cp / weight;
	cost_per_square = cp / area;
	cout << "Cost of fertilizer per pound = " << price_per_pound << endl;
	cout << "Cost of fertilizing per square foot : " << cost_per_square << endl;


=======
#include<iostream>
using namespace std;
int main() {
	float weight, cp, area, price_per_pound, cp_square_foot, cost_per_square;
	cout << "Enter the size of fertilizer bag in pounds : ";
	cin >> weight;
	cout << "Enter the cost of the bag : ";
	cin >> cp;
	cout << "Enter the area in the square feet that can be covered by the bag : ";
	cin >> area;
	price_per_pound = cp / weight;
	cost_per_square = cp / area;
	cout << "Cost of fertilizer per pound = " << price_per_pound << endl;
	cout << "Cost of fertilizing per square foot : " << cost_per_square << endl;


>>>>>>> 6928e432922971c0dd3cd7ac34905dfb9482a3b3
}