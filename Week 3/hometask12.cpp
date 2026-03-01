#include<iostream>
using namespace std;
int main() {
	int n, w, h, walls_done;
	cout << "Enter paint area : ";
	cin >> n;
	cout << "Enter width : ";
	cin >> w;
	cout << "Enter height : ";
	cin >> h;
	walls_done = n / (w * h);
	cout << "Number of walls painted are : " << walls_done << endl;

}