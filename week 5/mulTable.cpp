#include <iostream>
using namespace std;
int main()
{
    int table;
    int multiple;
    cout<<"Enter the value of the table that you want to print : ";
    cin >>table;
    for (int num = 1; num <= 20; num++)
    {
        multiple = table * num;
        cout << table << " * " << num << " = " << multiple<<endl;
    }
}