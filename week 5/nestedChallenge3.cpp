// ATM Management System :
#include <iostream>
using namespace std;
int main()
{
    int pin=0,option, balance = 1000;
    for ( int i = 1 ; i <=3 ; i++){
        cout<<"Enter ATM pin ";
        cin>>pin;
        if ( pin == 1234){
            cout<<"Login Successful !!! "<<endl;
            break;}
        else if (pin!=1234 && i!=3){ cout<<"Invalid pin , Try again "<<endl;}
          if ( i == 3 && pin != 1234){
                cout<<"Two many tries , login failed "<<endl;
            break;  } 
    }
      for ( int i = 1 ; i <= 10; i++){
        cout<<"---------- ATM MENU ----------"<<endl;
        cout<<"1. Check balance "<<endl;
        cout<<"2. Deposit money "<<endl;
        cout<<"3. Withdraw money "<<endl;
        cout<<"4. Exit "<<endl;
        cout<<"Enter option : ";
        cin >>option;
        if ( option == 1 )
        { cout<<"Current balance = "<<balance<<endl;}
        else if ( option == 2 )
        { int add_amount; 
         cout<<"Enter amount to deposit : ";
        cin >> add_amount;
        balance = balance + add_amount; 
       cout<< "Money deposited successfully!!! "<<endl;}
       else if ( option == 3)
       { int sub_amount;
        cout << "Enter amount to withdraw : ";
        cin >> sub_amount; 
        if ( sub_amount > balance )
         { cout<<"Sorry! No enough money in your account "<<endl; }
         else if (balance > sub_amount) { balance = balance - sub_amount;
       cout<<"Please collect your cash !!! "<<endl;}}
       else if (option == 4){
        cout<<"Thanks for using the ATM "<<endl;
            break; }
      }
}