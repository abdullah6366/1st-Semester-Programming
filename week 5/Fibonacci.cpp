#include <iostream>
using namespace std;
int main()
{
    int n1 = 0;
    int n2 = 1;
    int next;
    cout<<n1<<" , "<<n2 <<" , ";
    for (int x =0; x<5; x++){
        next = n1+n2;
        cout<<next<<" , ";
        n1 = n2;
        n2 = next; }
    }