#include <iostream>
using namespace std;

main()
{

    int c_age, wm_price, ts_price;
    cout << "Enter Lilly's age: ";
    cin >> c_age;
    cout << "Enter the price of the washng mahine: ";
    cin >> wm_price;
    cout << "Enter the unit price of each toy: ";
    cin >> ts_price;

    int money = 0, toys = 0, saving;
    int i = 1, j = 1;

    while (i <= c_age)
    {

        if (i % 2 == 0)
        {
            money += (10 * j) - 1;
            j++;
        }
        else
        {
            toys++;
        }

        i++;
    }

    saving = money + (toys * ts_price);
    if (saving >= wm_price)
    {
        cout << "Yes! \n"
             << saving - wm_price;
    }
    else
    {
        cout << "No! \n"
             << wm_price - saving;
    }
}