#include<iostream>
using namespace std;
int main(){
int number,num;
cout<<"Enter the number of elements : ";
cin>>number;
cout<<"Enter "<<number <<" numbers one per line : "<<endl;
 int largest=INT_MIN;
 int smallest=INT_MAX;
for (int i = 0; i < number ; i++){
    cin>>num;
     if (num > largest){ largest = num; }
    if (num < smallest){ smallest = num; }
    }
cout<<"The largest number is : "<<largest <<endl; 
 cout<<"The smallest number is : "<<smallest <<endl;
}   
