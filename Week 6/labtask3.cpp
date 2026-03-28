#include<iostream>
using namespace std;
int main(){

    char word[100];
    cout<<"Write a word : ";
    cin>>word;
   for (int i = 0; word[i]!='\0'; i++){
       if (word[i]=='z'){word[i]='a';}
       else{ word[i]= (char)(word[i]+1);}
       cout<<word[i];
   }
    
}
