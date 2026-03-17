// Counting with both loops:
#include <iostream>
using namespace std;
int main()
{
    //Using for loop:
    // int sum = 0;
    // for (int n = 1 ; n <= 5 ; n++){
    // sum= sum+i;}
    //     cout <<sum <<endl;

    //Using while loop : 
    int i = 1 ,sum = 0;
    while ( i <= 5 ){
        sum = sum + i;
        i = i+1;
    }
    cout << sum<<endl;
}