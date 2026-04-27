#include <iostream>
using namespace std;

int main() {
    long long seconds;

    cout << "========== Seconds Converter ==========\n";
    cout << "Enter number of seconds: ";
    cin >> seconds;

    // ───── Input Validation ─────
    if (seconds < 0) {
        cout << "\nError: Invalid seconds entered! "
             << "Seconds cannot be negative.\n";
        return 1;
    }

    cout << "\n---------- Conversion Results ----------\n";
    cout << seconds << " second(s) = \n";

    // ───── Always show seconds ─────
    cout << "  Seconds : " << seconds << "\n";

    // ───── Minutes ─────
    if (seconds >= 60) {
        long long minutes = seconds / 60;
        long long remSec  = seconds % 60;
        cout << "  Minutes : " << minutes
             << " minute(s) and " << remSec << " second(s)\n";
    }

    // ───── Hours ─────
    if (seconds >= 3600) {
        long long hours  = seconds / 3600;
        long long remMin = (seconds % 3600) / 60;
        long long remSec = seconds % 60;
        cout << "  Hours   : " << hours
             << " hour(s), "   << remMin << " minute(s) and "
             << remSec         << " second(s)\n";
    }

    // ───── Days ─────
    if (seconds >= 86400) {
        long long days   = seconds / 86400;
        long long remHr  = (seconds % 86400) / 3600;
        long long remMin = (seconds % 3600)  / 60;
        long long remSec =  seconds % 60;
        cout << "  Days    : " << days
             << " day(s), "    << remHr  << " hour(s), "
             << remMin         << " minute(s) and "
             << remSec         << " second(s)\n";
    }

    cout << "----------------------------------------\n";
    return 0;
}