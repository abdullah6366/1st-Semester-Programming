#include<iostream>
using namespace std;
int main(){
    char word[100];
    int size;
    cout<<"Enter the number of characters in your word : ";
    cin>>size;
    cout<<"Enter a word : ";
    cin>>word;
    for (int i = size; i>=0; i--){
        cout << word[i];
    }
}
