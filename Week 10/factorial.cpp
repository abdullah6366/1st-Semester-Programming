#include<iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, next;
    for ( int i = 0; i <=5; i++ ){
    cout<<n1 <<" , ";
    next = n1 + n2;
    n1 = n2;
    n2 = next;
  }
}