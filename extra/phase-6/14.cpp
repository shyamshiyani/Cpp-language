#include <iostream>
using namespace std;

int main() {
    double rate,units,bill; 

    cout << "Enter the unit rate: ";
    cin >> rate;

    cout << "Enter the total units: ";
    cin >> units;

    bill = rate * units;

    cout << "Total Electricity Bill: $" << bill << endl;

    return 0;
}

