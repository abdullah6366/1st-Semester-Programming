#include <iostream>
using namespace std;
int main()
{
    float salary = 10000;
    float laptop_pkr = 50000;
    float advance_sal = 5000;
    float months = 6;
    float total_pkr = advance_sal*months;
    if ( total_pkr > laptop_pkr){
        cout << "You can buy the laptop"<<endl;}
    else {
       float req_months = laptop_pkr/advance_sal;
       cout <<"Months required to buy the laptop : "<<req_months <<endl;
    }
    }