#include <iostream>
using namespace std;
int main()
{
    string country;
    float ticket_price;
    cout << "Enter the country name : ";
    cin >> country;
    cout << "Enter the ticket price : ";
    cin >> ticket_price;
    if (country == "Ireland")
    {
        cout << "Ticket price is : " << ticket_price << " Dollars " << endl;
        float dis_price = ticket_price - (ticket_price * 10 / 100);
        cout << "Your discounted price is : " << dis_price << " Dollars " << endl;
    }
    else
    {
        float dis_price = ticket_price - (ticket_price * 5 / 100);
        cout << "Ticket price is : " << ticket_price << " Dollars " << endl;
        cout << "Your discounted price is : " << dis_price << " Dollars " << endl;
    }
}