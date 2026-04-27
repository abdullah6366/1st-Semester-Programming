#include <iostream>
#include <iomanip>
using namespace std;

double calculateCharges(double hours) {
    const double MINIMUM_FEE   = 2.00;
    const double HOURLY_RATE   = 0.50;
    const double FREE_HOURS    = 3.0;
    const double MAXIMUM_FEE   = 10.00;

    double charge;

    if (hours <= FREE_HOURS) {
        charge = MINIMUM_FEE;
    } else {
        // Extra hours (round up partial hours using ceil)
        double extraHours = hours - FREE_HOURS;
        int extraCeil = (int)extraHours;
        if (extraHours > extraCeil) extraCeil++; // round up partial hour
        charge = MINIMUM_FEE + (extraCeil * HOURLY_RATE);
    }

    // Cap at maximum
    if (charge > MAXIMUM_FEE)
        charge = MAXIMUM_FEE;

    return charge;
}

int main() {
    const int NUM_CUSTOMERS = 3;
    double hours[NUM_CUSTOMERS];
    double charges[NUM_CUSTOMERS];
    double total = 0.0;

    cout << "=== Car Park Charges ===\n\n";

    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        cout << "Enter hours parked for Customer " << (i + 1) << ": ";
        cin >> hours[i];

        while (hours[i] <= 0 || hours[i] > 24) {
            cout << "  Invalid! Enter hours between 0 and 24: ";
            cin >> hours[i];
        }

        charges[i] = calculateCharges(hours[i]);
        total += charges[i];
    }

    // Display table
    cout << "\n";
    cout << left  << setw(12) << "Customer"
         << right << setw(10) << "Hours"
         << right << setw(12) << "Charge (£)" << "\n";
    cout << string(34, '-') << "\n";

    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        cout << left  << setw(12) << (i + 1)
             << right << setw(10) << fixed << setprecision(1) << hours[i]
             << right << setw(12) << fixed << setprecision(2) << charges[i]
             << "\n";
    }

    cout << string(34, '-') << "\n";
    cout << left  << setw(22) << "Total Receipts"
         << right << setw(12) << fixed << setprecision(2) << total << "\n";

    return 0;
}