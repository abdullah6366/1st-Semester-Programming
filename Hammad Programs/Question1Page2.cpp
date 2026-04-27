#include <iostream>
using namespace std;

// ───── Function Prototypes ─────
int** allocateMatrix(int rows, int cols);
void  freeMatrix(int** matrix, int rows);
void  inputMatrix(int** matrix, int rows, int cols, string name);
void  displayMatrix(int** matrix, int rows, int cols, string label);
int** addMatrices(int** A, int** B, int rows, int cols);
int** subtractMatrices(int** A, int** B, int rows, int cols);

// ───── Memory Allocation ─────
int** allocateMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols]{0};
    return matrix;
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;
}

// ───── Input ─────
void inputMatrix(int** matrix, int rows, int cols, string name) {
    cout << "\nEnter elements of Matrix " << name << ":\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "  [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
}

// ───── Display ─────
void displayMatrix(int** matrix, int rows, int cols, string label) {
    cout << "\n" << label << ":\n";
    cout << string(cols * 6, '-') << "\n";
    for (int i = 0; i < rows; i++) {
        cout << "  ";
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << "\t";
        cout << "\n";
    }
    cout << string(cols * 6, '-') << "\n";
}

// ───── Addition ─────
int** addMatrices(int** A, int** B, int rows, int cols) {
    int** result = allocateMatrix(rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] + B[i][j];
    return result;
}

// ───── Subtraction ─────
int** subtractMatrices(int** A, int** B, int rows, int cols) {
    int** result = allocateMatrix(rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] - B[i][j];
    return result;
}

// ───── Main ─────
int main() {
    int rows, cols;

    cout << "========== Matrix Operations ==========\n";
    cout << "Enter number of rows    : "; cin >> rows;
    cout << "Enter number of columns : "; cin >> cols;

    int** A = allocateMatrix(rows, cols);
    int** B = allocateMatrix(rows, cols);

    inputMatrix(A, rows, cols, "A");
    inputMatrix(B, rows, cols, "B");

    int** sum  = addMatrices(A, B, rows, cols);
    int** diff = subtractMatrices(A, B, rows, cols);

    displayMatrix(A,    rows, cols, "Matrix A");
    displayMatrix(B,    rows, cols, "Matrix B");
    displayMatrix(sum,  rows, cols, "A + B (Addition)");
    displayMatrix(diff, rows, cols, "A - B (Subtraction)");

    freeMatrix(A,    rows);
    freeMatrix(B,    rows);
    freeMatrix(sum,  rows);
    freeMatrix(diff, rows);

    return 0;
}