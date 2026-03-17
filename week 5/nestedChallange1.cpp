#include <iostream>
using namespace std;
int main()
{
    for ( int rows=1; rows<=4; rows++){
        for( int cols=1; cols<=rows; cols++){
            cout<<"*";  }
            cout<<endl;
        }
        for ( int rows = 4; rows>=1; rows--){
            for (int cols=1; cols<=rows; cols++){
          cout<<"*";  }
            cout<<endl;
        }
}