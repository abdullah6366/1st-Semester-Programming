#include <iostream>
using namespace std;

main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    int count = 0;
    for (int i = num; i > 0; i /= 10)
    {
        count++;
    }
    cout << "Total number of digits: " << count;
}