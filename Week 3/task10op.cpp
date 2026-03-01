#include<iostream>
using namespace std;
int main() {
float wins, draws, losses, points;
cout << "Enter the number of wins : ";
cin >> wins;
cout << "Enter the number of draws : ";
cin >> draws;
cout << "Enter the number of losses : ";
cin >> losses;
points = (wins * 3) + (losses * 0) + (draws * 1);
cout << "The number of points of Pakistan in asia cup tournament is : " << points;
}