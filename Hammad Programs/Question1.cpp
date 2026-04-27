#include <iostream>
using namespace std;

int** allocateMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];
    return matrix;
}

void inputMatrix(int** matrix, int rows, int cols, string name) {
    cout << "Enter elements of Matrix " << name << ":\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "  [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
}

void displayMatrix(int** matrix, int rows, int cols, string label) {
    cout << "\n" << label << ":\n";
    for (int i = 0; i < rows; i++) {
        cout << "  ";
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << "\t";
        cout << "\n";
    }
}

int** addMatrices(int** A, int** B, int rows, int cols) {
    int** result = allocateMatrix(rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] + B[i][j];
    return result;
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;
}

int main() {
    int rows, cols;
    cout << "=== Matrix Addition ===\n";
    cout << "Enter number of rows: ";    cin >> rows;
    cout << "Enter number of columns: "; cin >> cols;

    int** A = allocateMatrix(rows, cols);
    int** B = allocateMatrix(rows, cols);

    inputMatrix(A, rows, cols, "A");
    inputMatrix(B, rows, cols, "B");

    int** C = addMatrices(A, B, rows, cols);

    displayMatrix(A, rows, cols, "Matrix A");
    displayMatrix(B, rows, cols, "Matrix B");
    displayMatrix(C, rows, cols, "Result (A + B)");

    freeMatrix(A, rows);
    freeMatrix(B, rows);
    freeMatrix(C, rows);

    return 0;
}