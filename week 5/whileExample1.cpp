// I am happy using while loop:
#include <iostream>
using namespace std;
int main()
{
    char ch = 'y';
    while ( ch == 'y'){
        cout<<"I am happy "<<endl;
        cout<<"Press y to continue or any key to exit : ";
        cin >> ch;
    }
}