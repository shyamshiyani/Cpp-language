#include <iostream>
using namespace std;

void checkCurtains(int l, int w) {
    int requiredLength = 10, requiredWidth = 4, totalLength, totalWidth;
    
    totalLength = requiredLength + 4;
    totalWidth = requiredWidth + 4;
    
    if (l >= totalLength && w >= totalWidth) {
        cout << "The curtains meet the specified criteria." << endl;
    } else {
        cout << "The curtains do not meet the specified criteria." << endl;
    }
}

int main() {
    int l, w;
    cout << "Enter the length of the curtains: ";
    cin >> l;
    cout << "Enter the width of the curtains: ";
    cin >> w;
    
    checkCurtains(l, w);
    return 0;
}

