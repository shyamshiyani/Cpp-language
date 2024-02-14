#include <iostream>
using namespace std;

int main() {
    float math, phy, chem;

    cout << "Enter maths Marks: ";
    cin >> math;
    cout << "Enter Physics Marks: ";
    cin >> phy;
    cout << "Enter Chemistry Marks: ";
    cin >> chem;

    if (math >= 80 && phy >= 75 && chem >= 72)
        cout << "You got A grade congratulation..." << endl;
    else if ((math >= 60 && math < 80) && (phy >= 55 && phy < 75) && (chem >= 50 && chem < 72))
        cout << "You got B grade congratulation..." << endl;
    else if ((math >= 40 && math < 60) && (phy >= 35 && phy < 55) && (chem >= 35 && chem < 50))
        cout << "Your got C grade...congratulation..." << endl;
    else
        cout << "fail....work hard...better luck next time..." << endl;

    return 0;
}
