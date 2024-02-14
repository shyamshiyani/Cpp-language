#include <iostream>
using namespace std;

class Calculat
{
private:
    int a, b;

public:
    double Addition(double a, double b)
    {
        return a + b;
    }
    double Subtract(double a, double b)
    {
        return a - b;
    }
    double Multiply(double a, double b)
    {
        return a * b;
    }
    double Divide(double a, double b)
    {
        return a / b;
    }
    double Modulo(int a, int b)
    {
        return a % b;
    }
};

int main()
{

    Calculat mathod;
    double num1,num2, choice;

    while (1)
    {

        cout << "Press 1 For Addition(+):" << endl;
        cout << "Press 2 For Substraction(-):" << endl;
        cout << "Press 3 For Multipication(*):" << endl;
        cout << "Press 4 For Division(/):" << endl;
        cout << "Press 5 For Modulor(%):" << endl;
        cout << "Press 0 For Exit The Progrtam.........." << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << endl;
        if (choice >= 1)
        {

            cout << "Enter The Value Of A: ";
            cin >> num1;
            cout << "Enter The Value Of B: ";
            cin >> num2;
            cout << endl;

            switch ((int)choice)
            {
            case 1:
                cout << "Addition Of "<< num1 <<" and "<<num2<<" is: " << mathod.Addition(num1,num2) << endl << endl;
                break;
            case 2:
                cout << "Substrictin Of "<< num1 <<" and "<<num2<<" is: " << mathod.Subtract(num1,num2) << endl << endl;
                break;
            case 3:
                cout << "Multiplication Of "<< num1 <<" and "<<num2<<" is: " << mathod.Multiply(num1,num2) << endl << endl;
                break;
            case 4:
                cout << "Division Of "<< num1 <<" and "<<num2<<" is: " << mathod.Divide(num1,num2) << endl << endl; 
                break;
            case 5:
                cout << "Modulo Of "<< num1 <<" and "<<num2<<" is: " << mathod.Modulo(num1,num2) << endl << endl;
                break;
            default:
                cout << "Enter Valid CHoice...............\nTry Again Later............" << endl;
            }
        }
        else
        {
            cout << "Exiting The Program................." << endl;
            break;
        }
    }

    return 0;
}
