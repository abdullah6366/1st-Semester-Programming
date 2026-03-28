#include<iostream>
using namespace std;
int main(){
int number,num;
cout<<"Enter the number of elements : ";
cin>>number;
cout<<"Enter "<<number <<" numbers one per line : "<<endl;
 int largest=INT_MIN;
for (int i = 0; i < number ; i++){
    cin>>num;
     if( num>largest){largest = num;}
    }
cout<<"The largest number is : "<<largest <<endl; }
    
