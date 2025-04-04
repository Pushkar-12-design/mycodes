#include <iostream>
using namespace std;


void readMatrix(int** matrix, int m = 3, int n = 3) {
    cout << "Enter elements of the " << m << " x " << n << " matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int** matrix, int m = 3, int n = 3) {
    cout << "\nThe matrix is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    char choice;
    
    cout << "Do you want to enter the number of rows? (y/n): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter number of rows (m): ";
        cin >> m;
    } else {
        m = 3; 
        cout << "Using default row size (m = 3).\n";
    }

    cout << "Enter number of columns (n): ";
    cin >> n;

    
    int** matrix = new int*[m];
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    readMatrix(matrix, m, n);
    displayMatrix(matrix, m, n);

    for (int i = 0; i < m; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
