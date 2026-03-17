#include <iostream>
using namespace std;
int main()
{
    // for (int rows = 5; rows >= 1; rows--)
    // {
    //     for (int cols = 1; cols <= rows; cols++)
    //     {
    //         cout << "*";
    //     }
    //      cout << endl;
    // }

    // for ( int rows=1; rows<=5; rows++){
    //     for ( int space=1 ; space<=5-rows; space++){
    //         cout<<" "; }
    //     for( int cols=1; cols<=rows; cols++){
    //         cout<<"*";  }
    //         cout<<endl;
    // }

    for ( int rows=5; rows>=1; rows--){
        for ( int space=1 ; space<=5-rows; space++){
            cout<<" "; }
        for( int cols=1; cols<=rows; cols++){
            cout<<"*";  }
            cout<<endl;
        }
}