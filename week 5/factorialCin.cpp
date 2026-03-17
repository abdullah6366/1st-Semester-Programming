#include <iostream>
using namespace std;
int main()
{
    int factorial = 1;
    int number;
    cout<<"Enter the value you want to take factorial : ";
    cin >> number;

    for(int i = number; i >= 1; i--){
        factorial = factorial*i;
    }
cout<<"Factorial of " <<number << ": " <<factorial<<endl;
}