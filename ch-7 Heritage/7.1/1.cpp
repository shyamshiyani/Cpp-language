#include<iostream>
using namespace std;

class Shape {
private:
    float width, height;

public:
    void gethw() {
        cout << "Enter the Width: ";
        cin >> width;
        cout << "Enter the Height: ";
        cin >> height;
    }

    float getWidth() const {
        return width;
    }

    float getHeight() const {
        return height;
    }
};

class Triangle : public Shape {
private:
    float area;

public:
    void Area() {
        gethw();
        area = (((0.5)*getWidth() )* getHeight());
        cout << "The area of the triangle: " << area << endl;
    }
};

class Rectangle : public Shape {
private:
    float area;

public:
    void Area() {
        gethw(); 
        area = getWidth()*getHeight();
        cout << "The area of the rectangle: " << area << endl;
    }
};

int main() {
    Triangle triangle;
    triangle.Area();

    Rectangle rectangle;
    rectangle.Area();

    return 0;
}
