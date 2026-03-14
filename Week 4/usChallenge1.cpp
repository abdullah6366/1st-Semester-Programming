#include <iostream>
using namespace std;
int main()
{
    float bill, dis_bill;
    cout <<"Enter the amount of bill : ";
    cin>> bill;
    if ( bill <= 5000){
        dis_bill = ( bill - ( bill * 5/100));
        cout <<"Your bill is : "<<bill <<" Rupees "<<endl;
        cout <<"Your discounted bill is : "<< dis_bill<< " Rupees "<<endl;}
        if ( bill > 5000){
            dis_bill = (bill - (bill * 10/100));
             cout <<"Your bill is : "<<bill <<" Rupees "<<endl;
            cout<<"Your discounted bill is : "<<dis_bill << " Rupees "<<endl;

        }
    }