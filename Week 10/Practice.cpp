#include <iostream>
#include <windows.h>
#include <cmath>
#include <climits>
using namespace std;

// //Sum of two functions
// int add(int num1, int num2);

// int main(){
//     cout<<"Enter number 1 : ";
//     int n1;
//     cin>>n1;
//     cout<<"Enter number 2 : ";
//     int n2;
//     cin >> n2;
// int x = add(n1, n2);
// cout<<"The sum of the two numbers is : "<<x <<endl;

// }
// int add(int num1, int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// }

// Sleep Function :

// int main(){
//     while ( true )
//     {
//         cout<<"Abdullah ";
//         Sleep(900);
//     }
// }

// int main(){
//     cout<<"Enter number 1 : ";
//     int num1;
//     cin>>num1;
//     cout<<"Enter number 2 : ";
//     int num2;
//     cin >> num2;
//     cout<<"The greater number is : "<<max(num1,num2)<<endl;
// }

// // Power Function
// int main(){
//     cout<<"Enter a number : ";
//     int n1;
//     cin >> n1;
//     cout<<"Enter the power : ";
//     int n2;
//     cin >> n2;
//     cout<<"The value of " << n1 <<" raised to power "<<n2 << " is : "<< pow(n1 , n2);
//     return 0;
// }

// int main(){
//     cout<<"Number 1 : ";
//     int n1;
//     cin>> n1;
//     cout<<"Square root "<<sqrt(n1);
//     return 0;
// }

// float height( float dis, float angle);
// int main(){
//     cout <<"Enter the distance from tree : ";
//     float distance;
//     cin>>distance;
//     cout<<"Enter the angle of elevation ( in degrees ) : ";
//     float angle;
//     cin >> angle;
//     // Height = distance*tan(theta)
//     float t = height(distance,angle);
//     cout<<"Height : "<<t <<endl;

// }

// float height( float dis, float angle)
// {
//     float height1 = dis*tan(angle/57.3);
//     return height1;
// }

// int main ()
// {
//     cout<<"Enter the value of a : ";
//     float a;
//     cin >> a;
//     cout<<"Enter the value of b : ";
//     float b;
//     cin >> b;
//     cout<<"Enter the value of c : ";
//     float c;
//     cin >> c;
//     double det = (b*b)-4*a*c;
//     double root1,root2;
//     if ( det = 0 )
//     {
//         cout<<"Only one real root. "<<endl;
//         root1 = -b/(2*a);
//         root2 = root1;
//     }
//     else if ( det > 0 )
//     {
//       cout<<"Only two real roots. "<<endl;
//       root1 = (-b+sqrt(det))/2*a;
//       root2 = (-b-sqrt(det))/2*a;
//     }
//     else if ( det < 0 )
//     {
//         cout<<"Only two complex roots . "<<endl;
//         root1 = -b/(2*a) + (sqrt(-det))/2*a;
//         root2 = -b/(2*a) - (sqrt(-det))/2*a;
//         cout<<root1 <<" and "<<root2<<"i"<<endl;
//     }
//     cout<<root1 <<" and "<<root2<<endl;

// }

// Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.

// Note: If the second largest element does not exist, return -1.

// int main(){
//     int max = 0, max2=0, max3 = 0;
//     int arr[6] = {2,34,54,33,22,12};
//     for ( int i = 0; i < 6; i++){
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout<<"The max value is "<<max<<endl;
//     for ( int j = 0; j<6; j++){
//         if ( arr[j] > max2 && arr[j]< max ){
//             max2 = arr[j];
//         }
//     }
//     cout<<"The second max value is : "<<max2<<endl;
//     for (int k = 0; k < 6; k++){
//         if ( arr[k]>max3 && arr[k] < max2){
//             max3 = arr[k];
//         }
//     }
//     cout<<"The third max value is : "<<max3<<endl;
// }

// int main()
// {
//     int max = 0, max2 = 0, count = 0;
//     int arr[5] = {10, 12, 10, 9, 8};
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     for (int j = 0; j < 5; j++)
//     {
//         if (arr[j] > max2 && arr[j] < max)
//         {
//             max2 = arr[j];
//         }
//     }
//     for (int k = 0; k < 5; k++)
//     {
//         if (arr[k] == max2)
//         {
//             count = count + 1;
//         }
//     }
//     if ( count > 1 ){
//         cout<<"More than one 2nd max values "<<"  ( -1 ) printed successfully... "<<endl;
//     }
//     else {
//         cout<<"2nd max value is : "<<max2<<endl;
//     }
// }

// int main()
// {
//     int min = INT_MAX, min2 = INT_MAX, min3 = INT_MAX, count = 0;
//     int arr[5] = {10, 12, 12};
//     for (int i = 0; i < 3; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     for (int j = 0; j < 3; j++)
//     {
//         if (arr[j] < min2 && arr[j] > min)
//         {
//             min2 = arr[j];
//         }
//     }

// for (int l = 0; l < 3; l++)
// {
//     if (arr[l] < min3 && arr[l] > min2)
//     {
//         min3 = arr[l];
//     }
// }
// for (int k = 0; k < 3; k++)
// {
//     if (arr[k] == min3)
//     {
//         count = count + 1;
//     }
// }
// if ( count == 0 ){
//     cout<<"No third value Only two values are present in this array "<<endl;
// }
// else if (count > 1)
// {
//     cout << "More than one 3rd min values " << "  ( -1 ) printed successfully... " << endl;
// }
// else
// {
//     cout << "3rd min value is : " << min3 << endl;
// }
// }

// int main()
// {
//     cout<<"Enter the number of values that you want to store in an array : ";
//     int values;
//     cin>>values;
//     float arr[values];
//     for ( int i = 0; i < values; i++)
//     {
//         cout<<"Enter the value that you want to store at index "<< i <<" ";
//         cin >> arr[i];
//     }
//     for ( int i = 0; i < values; i++)
//     {
//         cout<<"The values of inputs at index " <<i << " is "<< arr[i]<<endl;
//     }
// }

// Reverse an order of Array ( Manually )

// int main()
// {
//     int arr[3] = {1, 2, 3};

//        int  temp = arr[0];
//         arr[0] = arr[2];
//         arr[2] = temp;

//         for ( int i = 0; i < 3; i++)
//         {
//             cout<<"The value stored at index "<<i <<" is "<<arr[i] <<endl;
//         }
// }

// Using for loop
//  int main()
//  {
//     cout<<"Enter the number of elements that you want to add in a array : ";
//     int num;
//     cin>> num;
//     int arr[num];
//     for ( int i = 0; i < num; i++)
//     {
//         cout<<"Enter the value that you wanna store at index "<< i <<" : ";
//         cin >> arr[i];
//     }
//     for ( int i = 0; i < num/2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[num-1-i];
//         arr[num-1-i] = temp;
//     }
//     cout<<"The reverse order of array is : "<<endl;
//     cout<<"[ ";
//     for ( int i = 0; i < num; i++)
//     {
//         cout<<arr[i];
//         if ( i != num-1)
//         {
//             cout<<" , ";
//         }
//     }
//     cout<<" ] "<<endl;
//  }

int main()
{
    cout << "Enter the number of elements that you want to add in a array : ";
    int num;
    cin >> num;
    cout << "Enter the value of k ( the numbers rplacement limit )";
    int k;
    cin >> k;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the value that you wanna store at index " << i << " : ";
        cin >> arr[i];
    }
    int numArr = num / k;
    int arr1[k];
    for (int i = 0; i < k; i++)
    {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < k / 2; i++)
    {
        int temp1 = arr1[i];
        arr1[i] = arr1[k - 1 - i];
        arr1[k - 1 - i] = temp1;
    }
    int arr2[k];
    for (int i = 0; i < k; i++)
    {
        arr2[i] = arr[i + k];
    }
    for (int i = 0; i < k / 2; i++)
    {
        int temp2 = arr2[i];
        arr2[i] = arr2[k - 1 - i];
        arr2[k - 1 - i] = temp2;
    }
    cout << " [ ";
    for (int i = 0; i < k; i++)
    {
        cout << arr1[i] << ", ";
    }
    for ( int i = 0; i < k ; i++)
    {
        cout << arr2[i];
        if ( i != k-1 )
        {
            cout<<", ";
        }
    }
    cout<<" ] "<<endl;
}
