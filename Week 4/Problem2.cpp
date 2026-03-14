#include <iostream>
using namespace std;
int main()
{
    float speed;
    cout << "Enter the speed of the vehicle : ";
    cin >> speed;
    if (speed > 100)
    {
        cout << "Halt... You will be challaned!!!" << endl;
    }
    else
    {
        cout << "Perfect! You are going good!" << endl;
    }
}