#include<iostream>
using namespace std;
int main(){
    int total=0;
    int number=0 ;
    while(number >= 0){
        cout<<"Please enter any number : ";
        cin>>number;
        total = total + number;
    }
    cout<<"Sum : "<<total<<endl;
}