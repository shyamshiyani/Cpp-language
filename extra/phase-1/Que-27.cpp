#include <iostream>
using namespace std;

int main() {
    int number, sum = 0,digit;

    
    cout << "Enter a number: ";
    cin >> number;

    
    for (int temp = number; temp != 0; temp /= 10) {
        digit = temp % 10;
        sum += digit;
    }


    cout << "The sum of digits of the number is: " << sum << endl;

    return 0;
}

