#include <iostream>
using namespace std;

int main() {
    int rows, columns;
	
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> columns;
	
	int matrix[rows][columns], i, j;
	
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			cout << "Enter the element at position (" << i << "," << j << "): ";
			cin >> matrix[i][j];
		}
	}
	cout << endl;

	cout << "Transposed matrix:" << endl;
	for (i = 0; i < columns; i++) {
		for (j = 0; j < rows; j++) {
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}

	return 0;
}

