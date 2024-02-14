#include<iostream>
using namespace std;

int main()
{
    int input[5][5], squared[5][5], i, j;
	
	for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cout << "Enter a number: ";
            cin >> input[i][j];
        }
    }
    
    cout << endl;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            squared[i][j] = input[i][j] * input[i][j];
            cout << squared[i][j] << "  ";
        }
        cout << endl;
    }


    int diagonalSum = 0;
    for(i = 0; i < 5; i++)
    {
        diagonalSum += squared[i][i];
    }
    
    cout << endl;
    cout << "Sum of diagonal elements: " << diagonalSum;

    return 0;
}

