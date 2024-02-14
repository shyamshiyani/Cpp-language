#include<iostream>
using namespace std;

int main() {
    int years[] = {1990, 2000, 2021, 2037, 1967, 2022, 2000, 2052, 1990, 1987},i,j,duplicateYears[10], k = 0;

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) 
		{
            if (years[i] == years[j]) 
			{
                duplicateYears[k] = years[i];
                k++;
                break;
            }
        }
    }

    if (k == 0) 
	{
        cout << "No duplicate years found." << endl;
    } 
	else
	{
        cout << "Duplicate years found: ";
        for (i = 0; i < k; i++)
		{
            cout << duplicateYears[i] << " ";
    	}
        cout << endl;
    }

    return 0;
}

