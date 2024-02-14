#include <iostream>
using namespace std;

int main() {
    int number, i, check = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1) {
    	cout<< "Number is not Prime." <<endl;
    } else {
        for (i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                check = 1;
            }
        }

        if (check == 0)
		{
		cout << "Number is Prime." <<endl;	
		}
        else
        {
        cout << "Number is not Prime." << endl;
		}
    }

    return 0;
}

