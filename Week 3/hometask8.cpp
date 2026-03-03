<<<<<<< HEAD
#include<iostream>
using namespace std;
int main() {
	string movie_name;
	float veg_price, fruit_price, total_veg, total_fruit, pkr;
	cout << "Enter vegetables price in coins : ";
	cin >> veg_price;
	cout << "Enter fruits price in coins : ";
	cin >> fruit_price;
	cout << "Enter total number of vegetables sold : ";
	cin >> total_veg;
	cout << "Enter total number of fruits sold : ";
	cin >> total_fruit;
	pkr = ((veg_price * total_veg) + (total_fruit * fruit_price)) / 1.94;
	cout << " Total earning in rupees : " << pkr;


=======
#include<iostream>
using namespace std;
int main() {
	string movie_name;
	float veg_price, fruit_price, total_veg, total_fruit, pkr;
	cout << "Enter vegetables price in coins : ";
	cin >> veg_price;
	cout << "Enter fruits price in coins : ";
	cin >> fruit_price;
	cout << "Enter total number of vegetables sold : ";
	cin >> total_veg;
	cout << "Enter total number of fruits sold : ";
	cin >> total_fruit;
	pkr = ((veg_price * total_veg) + (total_fruit * fruit_price)) / 1.94;
	cout << " Total earning in rupees : " << pkr;


>>>>>>> 6928e432922971c0dd3cd7ac34905dfb9482a3b3
}