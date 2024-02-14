#include <iostream>
using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    Triangle(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    string getType() {
        float sides[3] = {side1, side2, side3};
        if (sides[0]*sides[0] + sides[1]*sides[1] > sides[2]*sides[2])
            return "Acute";
        else if (sides[0]*sides[0] + sides[1]*sides[1] == sides[2]*sides[2])
            return "Right";
        else
            return "Obtuse";
    }
};

int main() {
    float s1, s2, s3;

    cout << "Enter the length of first side of triangle: ";
    cin >> s1;

    cout << "Enter the length of second side of triangle: ";
    cin >> s2;

    cout << "Enter the length of third side of triangle: ";
    cin >> s3;

    Triangle triangle(s1, s2, s3);

    string type = triangle.getType();

    cout << "The triangle is " << type << endl;

    return 0;
}

