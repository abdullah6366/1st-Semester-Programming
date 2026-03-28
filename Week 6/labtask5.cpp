#include<iostream>
using namespace std;
int main(){
        int number;
        cout<<"Enter the number of elements : " ;
        cin>>number;
        int arr[100];
        cout<<"Enter "<<number <<" numbers one per line : "<<endl;
        for(int i = 0; i < number; i++){
            cin>>arr[i];
            for (int j = 0; j < i; j++){
             if (arr[j] == arr[i]){
            cout << "Already Entered" << endl;
        }
        
                  }      }
}
