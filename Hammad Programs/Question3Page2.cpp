#include <iostream>
using namespace std;

int main() {
    // ───── Array Definition ─────
    int arr[] = {10, 12, 14, 16, 18, 20, -12, 0, 0, 0};
    //            [0]  [1]  [2]  [3]  [4]  [5]  [6]
    // Based on the question values: 10, -12, 14, 16, 18, 20
    int num[] = {10, 12, -12, 14, 16, 18, 20};
    int n = 7;

    int* ptr = num;   // pointer pointing to first element

    cout << "========================================\n";
    cout << "       Array Traversal - 4 Notations    \n";
    cout << "========================================\n";

    // ─── 1. arr[i] notation ───
    cout << "\n[1] Printing array using arr[i] notation:\n    ";
    for (int i = 0; i < n; i++)
        cout << num[i] << "  ";
    cout << "\n";

    // ─── 2. ptr[i] notation ───
    cout << "\n[2] Printing array using ptr[i] notation:\n    ";
    for (int i = 0; i < n; i++)
        cout << ptr[i] << "  ";
    cout << "\n";

    // ─── 3. *(arr + i) notation ───
    cout << "\n[3] Printing array using *(arr + i) notation:\n    ";
    for (int i = 0; i < n; i++)
        cout << *(num + i) << "  ";
    cout << "\n";

    // ─── 4. *(ptr + i) notation ───
    cout << "\n[4] Printing array using *(ptr + i) notation:\n    ";
    for (int i = 0; i < n; i++)
        cout << *(ptr + i) << "  ";
    cout << "\n";

    cout << "\n========================================\n";

    // ───── Bonus: Show index labels like the question diagram ─────
    cout << "\nIndex reference (as shown in question):\n";
    for (int i = 0; i < n; i++)
        cout << "  num[" << i << "] = " << num[i] << "\n";

    return 0;
}