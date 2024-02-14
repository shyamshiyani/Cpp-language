#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;
    cout << endl;

    int nums[num], evenNums[num], oddNums[num];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums[i];
    }

    cout << endl;

    for (int i = 0; i < num; i++)
    {
        if (nums[i] % 2 == 0)
        {
            evenNums[evenCount] = nums[i];
            evenCount++;
        }
        else
        {
            oddNums[oddCount] = nums[i];
            oddCount++;
        }
    }

    cout << "Even numbers: ";
    for (int i = 0; i < evenCount; i++)
    {
        cout << evenNums[i] << " ";
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < oddCount; i++)
    {
        cout << oddNums[i] << " ";
    }
    cout << endl;

    return 0;
}

