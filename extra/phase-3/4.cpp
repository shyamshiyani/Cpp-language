#include <iostream>
using namespace std;

int main() {
    string first, last, pass1, pass2;

    cout << "Enter First Name: ";
    cin >> first;
    cout << "Enter Password: ";
    cin >> pass1;
    cout << "Enter Last Name: ";
    cin >> last;
    cout << "Re-enter Password: ";
    cin >> pass2;

    if (pass1 == pass2) {
        cout << "Account created successfully for " << first << " " << last << " with password: " << pass1 << endl;
    } else {
        cout << "Passwords do not match. Please enter the same password to create account." << endl;
    }

    return 0;
}

