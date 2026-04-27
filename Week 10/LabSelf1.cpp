#include <iostream>
using namespace std;

float multiply ( float number1, float number2);
int main ()
{
    cout<<"Enter a number : ";
    int num;
    cin>> num;
    float x = multiply(num,5);
    cout<<"Value after multiplication is : "<<x <<endl;
}
float multiply ( float number1, float number2)
{
    float multiply2 = number1*number2;
    return multiply2;
}