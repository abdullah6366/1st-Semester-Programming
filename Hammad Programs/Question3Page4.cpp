#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int minNum, minCount = 0;

    cout << "======================================\n";
    cout << "   Count Numbers > Minimum Entered    \n";
    cout << "======================================\n";
    cout << "Enter 10 numbers:\n";

    // ───── Input & find minimum simultaneously ─────
    for (int i = 0; i < SIZE; i++) {
        cout << "  Number [" << (i + 1) << "]: ";
        cin >> numbers[i];

        if (i == 0)
            minNum = numbers[0];          // first number is initial min
        else if (numbers[i] < minNum)
            minNum = numbers[i];          // update minimum
    }

    // ───── Count occurrences of minimum ─────
    for (int i = 0; i < SIZE; i++)
        if (numbers[i] == minNum)
            minCount++;

    // ───── Count greater than minimum ─────
    // Total numbers - count of minimums = count greater than min
    int greaterCount = SIZE - minCount;

    // ───── Display Results ─────
    cout << "\n--------------------------------------\n";
    cout << "Numbers entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << "\n--------------------------------------\n";
    cout << "Minimum Number is        : " << minNum      << "\n";
    cout << "Minimum appears          : " << minCount    << " time(s)\n";
    cout << "Count greater than min   : " << greaterCount << "\n";
    cout << "======================================\n";

    return 0;
}