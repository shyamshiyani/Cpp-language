#include<iostream>
using namespace std;

int main()
{
    int weights[3][3], i, j;

  
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "Enter the weight at position (" << i << "," << j << "): ";
            cin >> weights[i][j];
        }
    }

    int maxWeight = weights[0][0];
    int minWeight = weights[0][0];

   
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(weights[i][j] > maxWeight)
                maxWeight = weights[i][j];
        }
    }

   
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(weights[i][j] < minWeight)
                minWeight = weights[i][j];
        }
    }


    cout << "The highest weight is: " << maxWeight << endl;
    cout << "The lowest weight is: " << minWeight << endl;

    return 0;
}

