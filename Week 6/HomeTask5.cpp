#include<iostream>
using namespace std;
int main(){
    int number,count=0;
    cout<<"Enter the number of the customers : "<<endl;
    cin>> number;
    cin.ignore();
    string names[number];
    cout<<"Enter the names of the customers : "<<endl;
    for ( int i = 0; i<number ; i++){
        getline( cin , names[i]);
    }
    char letter;
    cout<<"Enter a letter to check : ";
    cin>> letter;
    for(int i =0 ; i<number; i++){
      if ( names[i][0]==letter ){ count= count+1;}
    }
    cout<<"Total names starting with " <<letter << " are : "<<count<<endl;
}
    