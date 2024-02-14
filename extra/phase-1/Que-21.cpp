#include<iostream>
using namespace std;

int main()
{
    int num, temp = 0;

    cout << "Enter the number: ";
    cin >> num;

    if (num == 0) {
        cout << "Digits number is: 1" << endl;
    } else {
        while (num > 0)
        {
            num /= 10;
            temp++;
        }
        cout << "Digits number is: " << temp << endl;
    }

    return 0;
}

