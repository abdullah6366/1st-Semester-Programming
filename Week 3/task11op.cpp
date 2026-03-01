#include<iostream>
using namespace std;
int main() {
float n, population, decades;
cout << "Enter the value of n : ";
cin >> n;
cout << "Enter the population : ";
cin >> population;
decades = (12 * 30 * n) + population;
cout << "The number of people after 3 decades : " << decades;
}