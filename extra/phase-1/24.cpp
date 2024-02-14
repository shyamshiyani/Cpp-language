#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char string[100];
    int len, i;

    cout << "Enter the string to check palindrome or not: ";
    cin >> string;

    len = strlen(string);

    for (i = 0; i < len / 2; i++) {
        if (string[i] != string[len - i - 1]) {
            cout << "The string is not a palindrome." << endl;
        }
    }

    cout << "The string is a palindrome." << endl;

    return 0;
}

