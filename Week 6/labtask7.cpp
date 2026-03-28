#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number of resistors in series: ";
    cin>>number;
    float resis[number];
    for(int i=0; i<number; i++){
        cin>>resis[i];
    }
    
    float sum=0;
    for(int i=0; i<number; i++){
        sum=sum+resis[i];
    }
    cout<<"Total resistance in the circuit is : "<<sum<<" ohms."<<endl;
}