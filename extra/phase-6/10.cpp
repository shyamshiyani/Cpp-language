#include <iostream>
using namespace std;

class Complex {
public:
    float real;
    float imag;

public:
    
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}


    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    
    Complex operator-(const Complex &c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    
    Complex operator*(const Complex &c) const {
        float realPart = real * c.real - imag * c.imag;
        float imagPart = real * c.imag + imag * c.real;
        return Complex(realPart, imagPart);
    }

    
    Complex operator/(const Complex &c) const {
        float denominator = c.real * c.real + c.imag * c.imag;
        float realPart = (real * c.real + imag * c.imag) / denominator;
        float imagPart = (imag * c.real - real * c.imag) / denominator;
        return Complex(realPart, imagPart);
    }

    
    void display() {
        if (imag < 0)
            cout << real << " - " << -imag;
        else
            cout << real << " + " << imag;
    }
};

int main() {
    Complex num1, num2;

    cout << "Enter first number: ";
    cin >> num1.real >> num1.imag;

    cout << "Enter second number: ";
    cin >> num2.real >> num2.imag;

    Complex result;

    
    result = num1 + num2;
    cout << "Addition: ";
    result.display();
    cout << endl;

    
    result = num1 - num2;
    cout << "Subtraction: ";
    result.display();
    cout << endl;

    
    result = num1 * num2;
    cout << "Multiplication: ";
    result.display();
    cout << endl;

    
    result = num1 / num2;
    cout << "Division: ";
    result.display();
    cout << endl;

    return 0;
}

