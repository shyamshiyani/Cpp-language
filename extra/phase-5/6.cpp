#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int digit, reversed = 0,remainder;
	
    digit = num;
    
    while (digit != 0) {
        remainder = digit % 10;
        reversed = reversed * 10 + remainder;
        digit = digit / 10;
    }
    
    cout << "Reverse is = " << reversed;
}

int main() {
    int number;
    cout << "Enter a number = ";
    cin >> number;
    
    reverseNumber(number);
    return 0;
}

