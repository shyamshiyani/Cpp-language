#include <iostream>

using namespace std;

void convertDays(int totalDays) {
    int years, months, weeks, days;

    years = totalDays / 365;
    totalDays %= 365;
    months = totalDays / 30;
    totalDays %= 30;
    weeks = totalDays / 7;
    days = totalDays % 7;

    cout << "Years: " << years << endl;
    cout << "Months: " << months << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;
}

int main() {
    int totalDays;

    cout << "Enter the total number of days: ";
    cin >> totalDays;

    convertDays(totalDays);

    return 0;
}

