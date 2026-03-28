#include<iostream>
using namespace std;
int main(){
    string word;
char letter;
cout<<"Enter a word : ";
cin>>word;
cout<<"Enter a character : ";
cin>>letter;
bool isfound = false;
for (int idx = 0 ; word[idx] != '\0'; idx++){
    if(word [idx] == letter){isfound= true; break ;}
}
if(isfound){cout<<" Found ";}
else { cout<<"Not Found";}
}