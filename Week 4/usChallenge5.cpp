#include <iostream>
using namespace std;
int main()
{
    string name1, name2, name3;
    float age1, age2, age3;
    cout << "Enter the first brother name : ";
    cin >> name1;
    cout << "Enter the first brother age : ";
    cin >> age1;
    cout << "Enter the second brother name : ";
    cin >> name2;
    cout << "Enter the second brother age : ";
    cin >> age2;
    cout << "Enter the third brother name : ";
    cin >> name3;
    cout << "Enter the third brother age : ";
    cin >> age3;
    if (age1 < age2 && age1 < age3)
    {
        cout << name1 << " is youngest " << endl;
    }
    if (age2 < age1 && age2 < age3)
    {
        cout << name2 << " is youngest " << endl;
    }
    if (age3 < age2 && age3 < age1)
    {
        cout << name1 << " is youngest " << endl;
    }
}
