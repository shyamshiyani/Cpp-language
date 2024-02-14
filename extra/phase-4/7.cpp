#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3], i, j;

    cout << "Enter elements for first matrix:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> matrix1[i][j];
        }
    }


    cout << endl << "Enter elements for second matrix:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> matrix2[i][j];
        }
    }

    cout << endl << "Sum of matrices:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

