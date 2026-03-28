#include<iostream>
using namespace std;
int main(){
//   string word = "C++";
//   cout<<word[3];

// string word;
// char letter;
// cout<<"Enter a word : ";
// cin>>word;
// cout<<"Enter a character : ";
// cin>>letter;
// bool isfound = false;
// for (int idx = 0 ; word[idx] != '\0'; idx++){
//     if(word [idx] == letter){isfound= true; break ;}
// }
// if(isfound){cout<<" Found ";}
// else { cout<<"Not Found";}

// string names[100];
// int IDs [100];
// float GPA [100];
// int count;
// cout<<"How many records you want to enter : ";
// cin >> count;
// for ( int idx = 0 ; idx<count ; idx++){
//     cout<<"Name :";
//     cin >>names[idx];
//     cout<<"IDs :";
//     cin >>IDs[idx];
//     cout<<"GPA :";
//     cin>> GPA[idx];
// }
// cout<<"Name "<<"\t"<<"ID"<<"\t"<<"GPA"<<endl;
// for (int idx = 0; idx, count; idx++){
//     cout<<names[idx] <<"\t"<<IDs[idx]<<"\t"<<GPA[idx]<<endl;

// }

// Comparing the largest in array: 
// int nums[] = {20, 2, 45, 3, 65};
// int smallest = INT_MAX;
// int size=6;
// for ( int idx = 0 ; idx < 6; idx++ ){
//     if( nums[idx] < smallest ){ smallest = nums[idx];}
// }
// cout<<"The smallest number is : ";
// cout<< smallest <<endl;

// int nums[] = {20, 2, 45, 3, 65};
// int smallest = INT_MAX;
// int size=5;
// int smallestidx = -1;
// for ( int idx = 0 ; idx < 5; idx++ ){
//     if( nums[idx] < smallest ){ smallest = nums[idx];
//     smallestidx = idx;}
// }
// cout<<"The smallest number is : ";
// cout<< smallest <<endl;
// cout<<"The smallest index is present in index : ";
// cout<<smallestidx<<endl;

int number;
int arr[] ={2, 4, 5, 8, 10};
int targetArr = -1;
cout<<"Enter the number you want to find in array : ";
cin>>number;
for ( int i = 0; i<6; i++){
    if ( arr[i]==number){targetArr=arr[i] ;}
}
cout<<targetArr<<endl;



}