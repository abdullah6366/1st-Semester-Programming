#include<iostream>
using namespace std;
int main(){
    int num[5];
    for(int i = 0; i < 5 ; i++){
        cout<<"Enter a number ";
        cin>>num[i];
    }
   cout<<"The first element of the array is : "<<num[0]<<endl;
    cout<<"The last element of the array is : "<<num[4]<<endl;
}