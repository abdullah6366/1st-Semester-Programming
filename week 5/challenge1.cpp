// Table of 24,50 and 29
#include <iostream>
using namespace std;
int main()
{
    // Table of 24
    cout<<"Multiplication table of 24 : "<<endl;
    int table = 24;
    int multiple;
    for (int num = 1; num <= 10; num++)
    {
        multiple = table * num;
        cout << table << " * " << num << " = " << multiple<<endl;
    }
    cout<<"\n\n"<<endl;
    // Table of 50
    cout<<"Multiplication table of 50 : "<<endl;
    int table2 = 50;
    int multiple2;
    for (int num = 1; num <= 10; num++)
    {
        multiple2 = table2 * num;
        cout << table2 << " * " << num << " = " << multiple2<<endl;
}
    cout<<"\n\n"<<endl;
    // Table of 29
    cout<<"Multiplication table of 29 : "<<endl;
    int table3 = 29;
    int multiple3;
    for (int num = 1; num <= 10; num++)
    {
        multiple3 = table3 * num;
        cout << table3 << " * " << num << " = " << multiple3<<endl;
    }
}
