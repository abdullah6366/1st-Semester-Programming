#include <iostream>
using namespace std;

main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    int sum = 0;
    for (int i = num; i > 0; i /= 10)
    {
        sum += (i % 10);
    }
    cout << "Sum : " << sum;
}