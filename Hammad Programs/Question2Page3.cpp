#include <iostream>
using namespace std;

// ───── Recursive Function ─────
// T(1)=2, T(2)=3, T(3)=5
// T(N) = T(N-1) + T(N-2) + T(N-3)
int tribonacciX(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    if (n == 3) return 5;
    return tribonacciX(n - 1) + tribonacciX(n - 2) + tribonacciX(n - 3);
}

// ───── Recursive Print ─────
void printSeries(int n, int current = 1) {
    if (current > n) {
        cout << "\n";
        return;
    }
    cout << tribonacciX(current);
    if (current < n) cout << ", ";
    printSeries(n, current + 1);
}

int main() {
    int n;

    cout << "==============================\n";
    cout << "    Tribonacci-X Series       \n";
    cout << "==============================\n";
    cout << "Series rule: T(n) = T(n-1) + T(n-2) + T(n-3)\n";
    cout << "Starting values: 2, 3, 5\n";
    cout << "------------------------------\n";
    cout << "Enter N (number of terms): ";
    cin  >> n;

    // ───── Input Validation ─────
    if (n <= 0) {
        cout << "\nError: N must be a positive integer (N > 0).\n";
        cout << "Please re-run with a valid value.\n";
        return 1;
    }

    cout << "\nTribonacci-X series with " << n << " terms:\n";
    printSeries(n);

    // ───── Verification table for first few terms ─────
    if (n <= 10) {
        cout << "\nTerm-by-term breakdown:\n";
        cout << string(20, '-') << "\n";
        for (int i = 1; i <= n; i++)
            cout << "  T(" << i << ") = " << tribonacciX(i) << "\n";
    }

    return 0;
}