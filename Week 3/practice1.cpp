#include<iostream>
using namespace std;
int main() {
int sides, interior_angles;
cout << "Enter the number of sides : ";
cin >> sides;
interior_angles = (sides - 2) * 180;
cout << "The sum of interior angles : " << interior_angles;
}