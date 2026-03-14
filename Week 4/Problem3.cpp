#include <iostream>
using namespace std;
int main()
{
    float tem1, tem2, difference;
    cout <<"Enter the temperature of city 1 : ";
    cin >>tem1;
    cout <<"Enter the temperature of city 2 : ";
    cin >>tem2;
    difference = tem1-tem2;
    if( difference > 10 || difference < -10 ){
        cout <<"Difference is too big"<<endl;
        cout << "Program ends"<<endl;}
        else{
            cout <<"Program ends"<<endl;
        }

    }
