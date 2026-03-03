#include<iostream>
using namespace std;
int main()
{
float aggregate ,matric, inter, ecat;
cout << "Enter your matric marks : ";
cin >> matric;
cout << "Enter your inter marks : ";
cin >> inter;
cout << "Enter your ecat marks : ";
cin >> ecat;
aggregate = (matric/1100 * 17) + (inter/1200 * 50) + (ecat/400 * 33);
cout << "Your aggregate is : " << aggregate;
}