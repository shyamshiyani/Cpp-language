#include <iostream>
using namespace std;

class Shape {
protected:
    double w,h;

public:
    Shape(double width, double height) : w(width), h(height) {}

    virtual double calculateArea() = 0;
};

class Triangle : public Shape {
public:
    Triangle(double width, double height) : Shape(width, height) {}

    double calculateArea() override {
        return 0.5 * w * h;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : Shape(width, height) {}

    double calculateArea() override {
        return w * h;
    }
};

int main() {
    Triangle tri(5.0, 4.0);
    Rectangle rect(6.0, 8.0);

    cout << "Triangle Area: " << tri.calculateArea() << endl;
    cout << "Rectangle Area: " << rect.calculateArea() << endl;

    return 0;
}

