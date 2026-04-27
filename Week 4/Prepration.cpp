#include <iostream>
using namespace std;
int main()
{
    // int number;
    // cout<<"Enter a number : ";
    // cin >> number;
    // if ( number % 3 == 0 && number % 5 == 0){
    //     cout<<"The number is divisible by both"<<endl;
    // }
    // else if ( number % 3 == 0){
    //     cout<<" The number is divisible by 3"<<endl;
    // }
    // else if ( number % 5 == 0){
    //     cout<<"Number is divisible by 5"<<endl;
    // }
    // else { cout <<"Not divisible" <<endl;}

    // Task 2
    // int n1, n2, n3;
    // cout << "Enter number 1 : ";
    // cin >> n1;
    // cout << "Enter number 2 : ";
    // cin >> n2;
    // cout << "Enter number 3 : ";
    // cin >> n3;
    // if(n1 < n2 && n1 < n3)
    // {
    //     cout << n1 << "is smallest" << endl;
    // }
    // else if (n2 < n1 && n2 < n3)
    // {
    //     cout << n2 << "is smallest" << endl;
    // }
    // else
    // {
    //     cout <<n3 <<" is smallest " << endl;
    // }

    // int num, sum = 0;

    // cout << "Enter a number (negative to stop): ";
    // cin >> num;

    // while (num >= 0)  // Continue while number is NOT negative
    // {
    //     sum = sum + num;  // Add only non-negative numbers

    //     cout << "Enter a number (negative to stop): ";
    //     cin >> num;
    // }

    // cout << "The total sum is " << sum << endl;

    // return 0;

    //     int num, sum = 0;
    //     float average;
    //     float count = 0;
    //     cout<<"Enter a number ( positive integer ) : ";
    //     cin >> num;
    //     while ( num != 0 ){
    //     sum = sum + num;
    //     cout<<"Enter a number : ";
    //     cin>>num;
    //     count = count + 1;
    //   }

    // cout<<"The total count of numbers entered : "<<count <<endl;
    // average = sum/count;
    // cout<<"The average of total numbers entered is : "<<average <<endl;

    // string name;
    // while ( name != "END"){
    // cout<<"Enter a name : ";
    // cin>> name;
    // if ( name != "END"){
    // cout<<"Hello "<<name<<endl;
    // }}
    // cout<<"END"<<endl;

    // int n1 = 0, n2= 1;
    // int sum = 0;
    // cout<<n1 <<" , "<<n2 <<" , ";
    // for ( int i=1; i<=5; i++){
    //     sum = n1 + n2;
    //     cout<<sum;
    //     if ( i != 5){
    //         cout<<" , ";
    //     }
    //     n1 = n2;
    //     n2 = sum;
    // }

    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int fac = 1;
    // for ( int i = n ; i >= 1; i--){
    //     fac = fac*i;
    // }
    // cout<<"The factorial of number "<<n <<" is "<<fac <<endl;

    // for ( int i = 5; i>= 1 ; i-- ){
    //     for ( int j=1; j<=i; j++ ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int rows;

    // cout << "Enter number of rows: ";
    // cin >> rows;

    // // Method 1: i goes from rows down to 1
    // for (int i = rows; i >= 1; i--)
    // {
    //     // Print spaces
    //     for (int s = 1; s <= rows - i; s++)
    //     {
    //         cout << " ";
    //     }
    //     // Print stars
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // return 0;

    // int arr[5];
    // int greatest;
    // int num;
    // for ( int i = 0 ; i < 5; i++){
    //     cout <<"Enter number "<<i+1 <<" : ";
    //     cin>> arr[i];
    // }
    // greatest = arr[0];
    // for ( int i = 0; i < 5; i++){
    //    if ( arr[i] > greatest){
    //     greatest = arr[i];
    //    }
    // }
    // cout<<"The greatest number is "<<greatest <<endl;

    string name;
    cout<<"Enter a name : ";
    cin >>name;
    int length = 0;
    for (int i = 0; name[i]!='\0'; i++){
    length++;
    }
    if (length % 2 == 0) {
        cout << "true" << endl;  // Even length
    } else {
        cout << "false" << endl; // Odd length
    }
    
    return 0;
}

