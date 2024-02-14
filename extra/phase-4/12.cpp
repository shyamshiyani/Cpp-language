#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int matrix[size][size], i, j;

    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            cout << "Enter an element for the upper half of the triangle matrix: ";
            cin >> matrix[i][j];
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < i; j++)
        {
            matrix[i][j] = matrix[j][i];
        }
    }

    cout << endl << endl;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

