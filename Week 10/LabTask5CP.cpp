#include <iostream>
#include <cmath>
using namespace std;


int main ()
{
    cout<<"Enter the value of a : ";
    float a;
    cin >> a;
    cout<<"Enter the value of b : ";
    float b;
    cin >> b;
    cout<<"Enter the value of c : ";
    float c;
    cin >> c;
    double det = (b*b)-4*a*c;
    double root1,root2;
    if ( det = 0 )
    {
        cout<<"Only one real root. "<<endl;
        root1 = -b/(2*a);
        root2 = root1;
    }
    else if ( det > 0 )
    {
      cout<<"Only two real roots. "<<endl;
      root1 = (-b+sqrt(det))/2*a;
      root2 = (-b-sqrt(det))/2*a;
    }
    else if ( det < 0 )
    {
        cout<<"Only two complex roots . "<<endl;
        root1 = -b/(2*a) + (sqrt(-det))/2*a;
        root2 = -b/(2*a) - (sqrt(-det))/2*a;
        cout<<root1 <<" and "<<root2<<"i"<<endl;
    }
    cout<<root1 <<" and "<<root2<<endl;
    

}