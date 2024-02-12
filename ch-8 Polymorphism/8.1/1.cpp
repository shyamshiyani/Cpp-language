#include <iostream>
using namespace std;

class Calculator {
public:
    void method_1(int a, int b) {
        cout << "The division is: " << a / b << endl;
    }

    void method_1(int a, int b, int c) {
        cout << "The substraction is: " << a - b - c << endl;
    }

    void method_1(int a, int b, int c, int d) {
        cout << "The multiplication is: " << a * b * c * d << endl;
    }

    void method_1(int a, int b, int c, int d, int e) {
        cout << "The addition is: " << a + b + c + d + e << endl;
    }
};

int main() {
    Calculator cal;

    cal.method_1(10, 2);
    cal.method_1(10, 2, 2);
    cal.method_1(1, 2, 3, 4);
    cal.method_1(1, 2, 3, 4, 5);

    return 0;
}




