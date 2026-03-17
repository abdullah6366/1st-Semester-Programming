#include <iostream>
using namespace std;
int main()
{
    int factorial = 1;

    for(int i = 4; i >= 1; i--){
        factorial = factorial*i;
    }
cout<<"Factorial of 4 : "<<factorial<<endl;
}