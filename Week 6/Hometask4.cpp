#include<iostream>
using namespace std;
int main(){
    string names[5];
    cout<<"Enter the student names : "<<endl;
    for ( int i = 0; i<5; i++){
        getline ( cin, names[i]);
    }
    cout<<"Student names are "<<endl;
    for ( int i = 0; i<5; i++){
        cout<<names[i]; if ( names[i]!=names[4]){cout<<","; }
}}