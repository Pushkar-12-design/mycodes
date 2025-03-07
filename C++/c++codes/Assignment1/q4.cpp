#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows (m): ";
    cin >> rows;
    cout << "Enter the number of columns (n): ";
    cin >> cols;

    
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    
    cout << "Enter the elements of the matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    
    cout << "The matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
