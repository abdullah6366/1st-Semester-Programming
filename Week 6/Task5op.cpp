#include<iostream>
using namespace std;
int main()
{
    int numbers;
    cout<<"Enter how many numbers you want to enter : ";
    cin >> numbers;
    int num[100];
    for ( int i = 0; i<numbers; i++ ){
        cout<<"Enter numbers : ";
        cin>>num[i];
    }
for (int i = 0; i<numbers ; i++){
     cout<<"Your entered number is : "<<num[i]<<endl;
}
    
    }


