#include<iostream>
using namespace std;

// string character( char a);
// int main()
// {
//     cout<<"Enter a character1 ( A/a ) : ";
//     char character1;
//     cin >> character1;
//    cout<<character(character1) <<endl;
    
//     return 0;
    
// }
// string character(char x)
// {
//     if ( x == 'A'){
//         return "You have entered Capital A";
//     }
//     else if ( x == 'a'){
//         return "You have entered small letter ";
//     }
//     else {
//         return "You have entered wrong character ";
//     }
// }

// Find the greater number using functions
string greatest( float num1, float num2, float num3); 
int main()
{
float number1, number2, number3;
cout<<"Enter number 1 : ";
cin >> number1 ;
cout<<"Enter number 2 : ";
cin>>number2;
cout<<"Enter number 3 : ";
cin>> number3;
cout<<greatest( number1, number2, number3);
return 0;
}
string greatest( float num1, float num2, float num3)
{
    if ( num1 > num2 && num1 > num3 )
    {
        return "Num 1 is largest";
    }
    if ( num2 > num1 && num2 > num3 )
    {
        return "Num 2 is largest ";
    }
    if ( num3 > num1 && num3 > num2 )
    {
        return "Num 3 is largest ";
    }
    else {
        return "Any two or all three numbers are equal ";
    }
}