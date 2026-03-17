// I am happy using while loop:
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Please enter a positive number : ";
    cin >> number;
    while ( number <= 0 ){
        cout<<"error "<< number <<" is not a positive number "<<endl;
        cout<<"Please enter a positive number : ";
        cin>>number;
    }
    cout<<"Program ends "<<endl;
}