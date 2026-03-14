#include <iostream>
using namespace std;
int main()
{
    float speed;
    cout << "Enter the value of speed : ";
    cin >> speed;
    if (speed <= 10)
    {
        cout << "Slow" << endl;
    }
    if (speed > 10 && speed <= 50)
    {
        cout << "Average" << endl;
    }
    if (speed > 50 && speed <= 150)
    {
        cout << "Fast" << endl;
    }
    if (speed > 150 && speed <= 1000)
    {
        cout << "Ultra Fast" << endl;
    }
    if (speed > 1000)
    {
        cout << "Extremely Fast" << endl;
    }
}
