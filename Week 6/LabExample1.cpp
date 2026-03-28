#include<iostream>
using namespace std;
int main(){
    int correctPIN = 1234;
    int pin[3];
    bool login=false;
    int choice, balance= 1000, amount;
    for ( int i = 0 ; i<3; i++){
        cout<<"Enter ATM pin : ";
        cin>>pin[i];
        if( pin[i]==correctPIN){
            login = true;
            cout<<"Login Successfull \n";
            break; }
            else {cout << " Incorrect Pin \n"; }
    }
    if(login == true){
        while(true){
            cout << "\n--- ATM Menu ---\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout <<"Enter your Choice : ";
            cin>>choice;
            if(choice == 1 ){ cout<<"Current balance :"<<balance <<endl;}
            else if (choice ==2 ){ cout<<"Enter the amount that you want to deposit : ";
            cin >> amount;
            balance= balance + amount ; 
        cout<<"Updated balance is : "<<balance<<endl;}
        else if ( choice == 3 ){ cout<<"Enter the amount that you want to withdraw : ";
        cin>> amount; 
        if ( amount <= balance && amount > 0){ balance = balance-amount;
        cout<<"Remaining balance after withdraw is : "<< balance <<endl;}
        else {cout<<"Insufficent balance \n";}}
        else if ( choice == 4 ){ cout<<"Thanks for using ATM \n";
             break; }
             else { cout<<"Invalid choice \n";}

        }
    }
    else{ cout<<"Too many incorrect attempts. Access denied.\n";}
}