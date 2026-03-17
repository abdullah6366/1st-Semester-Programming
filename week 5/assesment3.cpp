#include <iostream>
using namespace std;

int main() {
    int total = 0;
    int number;
    for (int i = 1; i<=5; i++){
        cout<<"Enter a number "<<i <<" : ";
        cin>>number;
        total = total + number; }
        cout <<" Sum : "<<total <<endl;
    }
