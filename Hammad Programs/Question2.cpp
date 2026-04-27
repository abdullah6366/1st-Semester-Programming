#include <iostream>
using namespace std;

// Returns the Nth Fibo-Plus number (1-indexed)
// F(1)=1, F(2)=2, F(N) = F(N-1) + F(N-2) + 1
int fiboPlus(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return fiboPlus(n - 1) + fiboPlus(n - 2) + 1;
}

void printSeries(int n, int current = 1) {
    if (current > n) {
        cout << "\n";
        return;
    }
    cout << fiboPlus(current);
    if (current < n) cout << ", ";
    printSeries(n, current + 1);
}

int main() {
    int n;
    cout << "=== Fibo-Plus Series ===\n";
    cout << "Enter N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: N must be a positive integer.\n";
        return 1;
    }

    cout << "\nFibo-Plus series of " << n << " terms:\n";
    printSeries(n);

    return 0;
}