#include <iostream>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
#include <iomanip>
using namespace std;

const int SIZE = 10;

// ───── Fill array with random numbers between 10 and 200 ─────
void fillRandom(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] = 10 + rand() % 191;   // range: 10 to 200
}

// ───── Display array ─────
void displayArray(const string& label, int arr[], int size) {
    cout << left << setw(12) << label << ": [ ";
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << " ]\n";
}

// ───── Manual swap of entire arrays using third variable ─────
void swapArrays(int arr1[], int arr2[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp     = arr1[i];   // save arr1 value
        arr1[i]  = arr2[i];   // put arr2 into arr1
        arr2[i]  = temp;      // put saved value into arr2
    }
}

int main() {
    srand((unsigned int)time(0));   // seed random number generator

    int array1[SIZE];
    int array2[SIZE];

    // ───── Fill arrays ─────
    fillRandom(array1, SIZE);
    fillRandom(array2, SIZE);

    // ───── Display BEFORE swap ─────
    cout << "==========================================\n";
    cout << "       Manual Array Swap Program          \n";
    cout << "==========================================\n";
    cout << "\n--- Before Swap ---\n";
    displayArray("Array 1", array1, SIZE);
    displayArray("Array 2", array2, SIZE);

    // ───── Perform manual swap ─────
    swapArrays(array1, array2, SIZE);

    // ───── Display AFTER swap ─────
    cout << "\n--- After Swap ---\n";
    displayArray("Array 1", array1, SIZE);
    displayArray("Array 2", array2, SIZE);

    cout << "\n==========================================\n";
    cout << "Swap complete! Array1 now holds Array2's\n";
    cout << "original values, and vice versa.\n";
    cout << "==========================================\n";

    return 0;
}