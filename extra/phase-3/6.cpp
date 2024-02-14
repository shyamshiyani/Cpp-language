#include <iostream>
#include <string>

using namespace std;

int main() {
    string dare1, dare2;

    cout << "Player 1, please enter your dare: ";
    cin >> dare1;

    cout << "Player 2, please enter your dare: ";
    cin >> dare2;

    string temp = dare1;
    dare1 = dare2;
    dare2 = temp;

    cout << endl << "Player 1's dare: " << dare1 << endl;
    cout << "Player 2's dare: " << dare2 << endl;

    return 0;
}

