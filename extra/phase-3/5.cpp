#include <iostream>
#include <string>

using namespace std;

int main() {
    string message;
    cout << "Enter the message: ";
    getline(cin, message);

    int vowels = 0, consonants = 0, digits = 0, specials = 0;

    int i = 0;
    while (i < message.length()) {
        char ch = message[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else 
                consonants++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            specials++;
        }
        i++;
    }

    cout << "Vowels count: " << vowels << endl;
    cout << "Consonants count: " << consonants << endl;
    cout << "Digits count: " << digits << endl;
    cout << "Special symbols count: " << specials << endl;

    return 0;
}

