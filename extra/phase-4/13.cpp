#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int i,j,matrixA[MAX_SIZE][MAX_SIZE], matrixB[MAX_SIZE][MAX_SIZE], resultMatrix[MAX_SIZE][MAX_SIZE],rowsA, colsA, colsB;

    cout << "Enter the number of rows and columns of the first matrix (m x n): ";
    cin >> rowsA >> colsA;

    cout << "Enter the number of columns of the second matrix (n x p): ";
    cin >> colsB;
    
    cout << "Enter elements of the first matrix:" << endl;
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsA; j++) {
            cin >> matrixA[i][j];
        }
    }
    
    cout << "Enter elements of the second matrix:" << endl;
    for (i = 0; i < colsA; i++) {
        for (j = 0; j < colsB; j++) {
            cin >> matrixB[i][j];
        }
    }

    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsB; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "Dot Product (Matrix C = A * B):" << endl;
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsB; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

