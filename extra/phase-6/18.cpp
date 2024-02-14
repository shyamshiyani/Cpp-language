#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    n += 8;

    n *= 3;

    n -= 12;

    n += 5;

    int birthYear;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    n += birthYear;

    int currentYear = 2024; 
    n -= currentYear;

    cout << "The result after all operations: " << n << endl;

    if (n % 7 == 0) {
        cout << "The result is divisible by 7." << endl;
    } else {
        cout << "The result is not divisible by 7." << endl;
    }

    return 0;
}

