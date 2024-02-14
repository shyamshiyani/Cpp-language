#include <iostream>
using namespace std; 

class Swapper {
private:
    int num1;
    int num2;

public:
    Swapper(int x, int y) : num1(x), num2(y) {}

    void swap() {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    void display() {
        cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Swapper s(a, b);

    cout << "Before swap: num1 = " << a << ", num2 = " << b << endl;

    s.swap();

    s.display();

    return 0;
}

