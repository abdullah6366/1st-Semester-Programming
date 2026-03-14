#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Please enter a number : ";
    cin >> num1;
    cout << "Please enter 2nd number : ";
    cin >> num2;
    if (num1 < num2)
    {
        cout << " Number " << num2 << " is greater than " << num1;
    }
    else
    {
        cout << " Number " << num1 << " is greater than " << num2;
    }
}
