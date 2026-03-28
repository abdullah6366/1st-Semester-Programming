#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    float average=0;
    int numbers[5]={1,2,3,4,5};
    for (int i=0; i<5; i++){
        sum=sum+numbers[i];
    }
    average= sum/5;
    cout<<"The sum of first five natural numbers is : "<<sum<<endl;
    cout <<"The average of first five natural numbers is :"<<average<<endl;
    
    }


