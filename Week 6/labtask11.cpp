#include<iostream>
using namespace std; 
int main(){
    char vowels[10]= {'a','e','i','o','u','A','E','I','O','U'};
    string sent;
    cout<<"Enter a string : ";
    getline(cin, sent);
    for (int i = 0; sent[i]!='\0'; i++){
      char c=sent[i];
      if(c!='a'&& c!='e' && c!='i' && c!='o' && c!='u' && c!='A' && c!='E' && c!='I' && c!='O' && c!='U'){
        cout<<c;

      }
    }
}
    
