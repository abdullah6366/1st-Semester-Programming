#include <iostream>
using namespace std;

main()
{
    cout << "Enter length of the fibonachi series: ";
    int len;
    cin >> len;
    int num1 = 0;
    int num2 = 1;
    int next;
    for (int i = 1; i <= len; i++)
    {
        cout << num1 << "  ";
        next = num1 + num2;
        num1 = num2;
        num2 = next;
    }
}