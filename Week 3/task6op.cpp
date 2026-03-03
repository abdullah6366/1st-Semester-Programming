#include<iostream>
using namespace std;
int main() {
	float megabytes, bits;
	cout << "Enter the value of megabytes : ";
	cin >> megabytes;
	bits = megabytes*1024*1024*8;
	cout << "The value of bits : " << bits ;

}