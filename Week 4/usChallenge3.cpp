#include <iostream>
using namespace std;
int main()
{
    float first_num, second_num, perform;
    char operation;
    cout <<"Enter the first number : ";
    cin >> first_num;
    cout <<"Enter the second number : ";
    cin >> second_num;
    cout << "Enter the operator : ";
    cin >> operation;
    if ( operation == '+'){
     perform = first_num - second_num;
     cout <<first_num <<" - "<<second_num <<" = "<<perform;}
     if ( operation == '-'){
     perform = first_num + second_num;
     cout <<first_num <<" + "<<second_num <<" = "<<perform;}
     if ( operation == '*'){
     perform = first_num / second_num;
     cout <<first_num <<" / "<<second_num <<" = "<<perform;}
     if ( operation == '/'){
     perform = first_num * second_num;
     cout <<first_num <<" * "<<second_num <<" = "<<perform;}
    }
