
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum =0;
    cout<<"Enter the number of elements : ";
    cin >>n;
    int num[n];
    cout<<"Enter "<<n<<" elements :"<<endl;
    for ( int i = 0 ; i<n; i++){
        cin >>num[i];
    }
   for ( int i = 0 ; i<n; i++){
    sum= sum+num[i];
}
cout<<"Sum of all elements is : "<<sum <<endl; 
}
