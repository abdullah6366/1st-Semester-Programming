#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of elements for the first array (must be 2 ) : ";
    cin>>n;
    int first[n];
    cout<<"Enter "<<n <<" elements for the first array one each line : "<<endl;
    for ( int i = 0; i<n; i++){
        cin>>first[i];
    }
    int num;
    cout<<"Enter the number of elements for the second array ";
    cin >> num;
    int second[num];
    cout<<"Enter "<<num <<" elements for the second array "<<endl;
    for ( int i = 0; i < num; i++){
        cin>>second[i];
    }
    cout <<"Resulting array is [ "<<first[0] ;
    for (int i = 0; i< num; i++){
        cout<<" , "<<second[i];
    }
    cout<<" , "<<first[1]<<" ]"<<endl;

}