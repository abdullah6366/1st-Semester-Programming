// Finding the frequency of a digit in a number :
#include <iostream>
using namespace std;
int main()
{
    int number, digit, count = 0;
    cout<<"Enter the number : ";
    cin >> number;
    cout<<"Enter the digit your want to find the frequency : ";
    cin>> digit;
    for ( int i = number ; i > 0 ; i = i/10 ){
       int lastDigit = i % 10; 
        if (lastDigit == digit){
            count = count+1;
        }}
    cout <<"The frequency of "<< digit <<" in the number "<<number << " is "<<count<<endl;
    }