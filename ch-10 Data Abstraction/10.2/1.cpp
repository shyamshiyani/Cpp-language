#include<iostream>

using namespace std;

class Method {
public:
    virtual void calculate() = 0;
};

class Circle : public Method {
protected:
    float radius;
public:
	Circle(float num)
	{
		radius=num;
	}

    void calculate()  {
        cout << "Area of Circle: " << 3.14* radius* radius << endl;
    }
};

class Triangle : public Method {
protected:
    float base, height;
public:
	Triangle(float ba,float he) {
		base=ba;
		height=he;	
	}

    void calculate()  {
        cout << "Area of Triangle: " << base * height / 2  << endl;
    }
};

class Rectangle : public Method {
protected:
    float length, width;
public:
	Rectangle(float len,float wid) {
		
		length=len;
		width=wid;
	
	}

    void calculate()  {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Circle circle(5.53);
    Triangle triangle(20.2,25);
    Rectangle rectangle(60,38.5);

    circle.calculate();
    triangle.calculate();
    rectangle.calculate();

    return 0;
}



