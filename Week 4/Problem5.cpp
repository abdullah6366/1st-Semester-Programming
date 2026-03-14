#include <iostream>
using namespace std;
int main()
{
    float holidays, workingdays, time_for_games,hours,minutes;
    int difference;
    cout<<"Enter the number of holidays : ";
    cin >> holidays;
    workingdays = (365-holidays);
    time_for_games = (workingdays*63+holidays*127);
    difference = 30000-time_for_games;
    hours= difference/60;
    minutes = (difference) % 60;
    if (time_for_games < 30000){
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    } else {
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    }

    }
