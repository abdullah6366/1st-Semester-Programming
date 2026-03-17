#include <iostream>
using namespace std;
int main()
{
    string name;
    while (name != "end")
    {
        cout << "Enter a name : ";
        cin >> name;
        if (name != "end")
        {
            cout << "Hello " << name << endl;
        }
    }
    cout << "End" << endl;
}