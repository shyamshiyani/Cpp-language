#include <iostream>

using namespace std;

class BMI_Calculator {
public:
    float calculateBMI(float weight, float height) {
        return weight / (height * height);
    }

    void displayBMI(float bmi) {
        cout << "BMI: " << bmi << endl;
        if (bmi < 18.5) {
            cout << "Underweight" << endl;
        } else if (bmi >= 18.5 && bmi < 25) {
            cout << "Normal weight" << endl;
        } else if (bmi >= 25 && bmi < 30) {
            cout << "Overweight" << endl;
        } else {
            cout << "Obese" << endl;
        }
    }
};

int main() {
    float weight, height;
    BMI_Calculator calculator;

    char choice;
     {
        cout << "Enter weight (in kg): ";
        cin >> weight;
        cout << "Enter height (in meters): ";
        cin >> height;

        float bmi = calculator.calculateBMI(weight, height);
        calculator.displayBMI(bmi);

	  }  

    return 0;
}

