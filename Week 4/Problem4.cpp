#include <iostream>
using namespace std;
int main()
{
    float red_rose = 2, white_rose = 4.10, tulips = 2.50;
    float no_red, no_white, no_tulips;
    cout << "Enter the number of white rosses : ";
    cin >> no_white;
    cout << "Enter the number of red rosses : ";
    cin >> no_red;
    cout << "Enter the number of tulips : ";
    cin >> no_tulips;
    float total_price = (red_rose * no_red) + (white_rose * no_white) + (tulips * no_tulips);
    if (total_price > 200)
    {
        float dis_price = total_price - (total_price * 20 / 100);
        cout << "Orignal Price : " << total_price << " Dollars " << endl;
        cout << "Price after discount : " << dis_price << " Dollars " << endl;
    }
    else
    {
        cout << "Orignal Price : " << total_price << " Dollars " << endl;
    }
}