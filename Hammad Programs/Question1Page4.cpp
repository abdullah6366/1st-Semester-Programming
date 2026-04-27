#include <iostream>
using namespace std;

// ───── Swap function using pointers (call by reference) ─────
void swapThree(int* a, int* b, int* c) {
    // Rotate: a → c, c → b, b → a
    // 5, 6, 7  →  7, 5, 6
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int e1, e2, e3;

    cout << "==============================\n";
    cout << "   Swap Using Pointers        \n";
    cout << "==============================\n";

    cout << "Input the value of 1st element: "; cin >> e1;
    cout << "Input the value of 2nd element: "; cin >> e2;
    cout << "Input the value of 3rd element: "; cin >> e3;

    // ───── Before Swap ─────
    cout << "\nThe value before swapping are:\n";
    cout << "  Element 1 = " << e1 << "\n";
    cout << "  Element 2 = " << e2 << "\n";
    cout << "  Element 3 = " << e3 << "\n";

    // ───── Perform Swap ─────
    swapThree(&e1, &e2, &e3);

    // ───── After Swap ─────
    cout << "\nThe value after swapping are:\n";
    cout << "  Element 1 = " << e1 << "\n";
    cout << "  Element 2 = " << e2 << "\n";
    cout << "  Element 3 = " << e3 << "\n";
    cout << "==============================\n";

    return 0;
}