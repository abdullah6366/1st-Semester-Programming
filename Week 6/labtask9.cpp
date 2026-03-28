#include<iostream>
using namespace std;
int main(){
    int coins[4];
cout << "Enter number of quarters : ";
cin >> coins[0];
cout << "Enter number of dimes : ";
cin >> coins[1];
cout << "Enter number of nickels : ";
cin >> coins[2];
cout << "Enter number of pennies : ";
cin >> coins[3];
float due;
cout << "Enter the amount due in dollars : ";
cin >> due;
float totalCents = ((coins[0]*25)+(coins[1]*10)+(coins[2]*5)+(coins[3]*1));
float dueCents = due*100;
cout<<"Can you pay the amount ? ";
if( totalCents >= dueCents){
    cout<<"Yes"<<endl;
}
else { cout<<"Nope "<<endl;}
}