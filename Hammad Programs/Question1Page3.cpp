#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // ───── Constants ─────
    const int    MAX_EXECUTIVE = 4000;
    const int    MAX_STANDARD  = 8000;
    const int    MAX_STUDENT   = 15000;
    const int    MAX_TOTAL     = 27000;
    const double PRICE_EXEC    = 500.0;
    const double PRICE_STD     = 350.0;
    const double PRICE_STU     = 100.0;

    int execPasses, stdPasses, stuPasses;

    cout << "============================================\n";
    cout << "     Tech Conference Pass Sales System      \n";
    cout << "============================================\n";
    cout << "\nPass Limits:\n";
    cout << "  Executive  : Max " << MAX_EXECUTIVE << " @ Rs. 500\n";
    cout << "  Standard   : Max " << MAX_STANDARD  << " @ Rs. 350\n";
    cout << "  Student    : Max " << MAX_STUDENT   << " @ Rs. 100\n";
    cout << "--------------------------------------------\n";

    // ───── Input ─────
    cout << "\nEnter number of Executive passes sold : ";
    cin  >> execPasses;
    cout << "Enter number of Standard  passes sold : ";
    cin  >> stdPasses;
    cout << "Enter number of Student   passes sold : ";
    cin  >> stuPasses;

    // ───── Validation ─────
    bool error = false;

    if (execPasses < 0 || execPasses > MAX_EXECUTIVE) {
        cout << "\nError: Executive passes must be between 0 and "
             << MAX_EXECUTIVE << ".\n";
        error = true;
    }
    if (stdPasses < 0 || stdPasses > MAX_STANDARD) {
        cout << "Error: Standard passes must be between 0 and "
             << MAX_STANDARD << ".\n";
        error = true;
    }
    if (stuPasses < 0 || stuPasses > MAX_STUDENT) {
        cout << "Error: Student passes must be between 0 and "
             << MAX_STUDENT << ".\n";
        error = true;
    }

    int totalPasses = execPasses + stdPasses + stuPasses;
    if (!error && totalPasses > MAX_TOTAL) {
        cout << "\nError: Total passes (" << totalPasses
             << ") exceed conference capacity of "
             << MAX_TOTAL << ".\n";
        error = true;
    }

    if (error) {
        cout << "\nPlease re-run the program with valid values.\n";
        return 1;
    }

    // ───── Revenue Calculation ─────
    double execRevenue  = execPasses * PRICE_EXEC;
    double stdRevenue   = stdPasses  * PRICE_STD;
    double stuRevenue   = stuPasses  * PRICE_STU;
    double totalRevenue = execRevenue + stdRevenue + stuRevenue;

    // ───── Display Results ─────
    cout << "\n============================================\n";
    cout << "              Sales Summary                 \n";
    cout << "============================================\n";
    cout << left  << setw(15) << "Category"
         << right << setw(10) << "Passes"
         << right << setw(12) << "Price (Rs)"
         << right << setw(16) << "Revenue (Rs)" << "\n";
    cout << string(53, '-') << "\n";

    cout << left  << setw(15) << "Executive"
         << right << setw(10) << execPasses
         << right << setw(12) << fixed << setprecision(2) << PRICE_EXEC
         << right << setw(16) << execRevenue << "\n";

    cout << left  << setw(15) << "Standard"
         << right << setw(10) << stdPasses
         << right << setw(12) << PRICE_STD
         << right << setw(16) << stdRevenue << "\n";

    cout << left  << setw(15) << "Student"
         << right << setw(10) << stuPasses
         << right << setw(12) << PRICE_STU
         << right << setw(16) << stuRevenue << "\n";

    cout << string(53, '-') << "\n";
    cout << left  << setw(15) << "TOTAL"
         << right << setw(10) << totalPasses
         << right << setw(28) << totalRevenue << "\n";
    cout << "============================================\n";

    return 0;
}