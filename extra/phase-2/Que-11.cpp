#include <iostream>
using namespace std;

class Temprature_Converter
{
public:
    float Celcious;

public:
    Temprature_Converter()
    {
        cout << "Enter Temperature in Celsius: ";
        cin >> this->Celcious;
        cout << endl;
    }
};

class Fohrainheat : public Temprature_Converter
{
public:
    Fohrainheat()
    {
        cout << "Your temperature in Fahrenheit is: " << (Celcious * 9 / 5) + 32 << endl;
    }
};

class Kelvin : public Temprature_Converter
{
public:
    Kelvin()
    {
        cout << "Your temperature in Kelvin is: " << Celcious + 273.15 << endl;
    }
};

int main()
{

    Temprature_Converter p ;
    
    int choice;
    while (1)
    {
        cout << "Press 1 for Temperature Celsius to Fahrenheit....." << endl;
        cout << "Press 2 for Temperature Celsius to Kelvin....." << endl;
        cout << "Press 0 for Exit the Program....." << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        if (choice >= 1)
        {
            switch (choice)
            {
            case 1:
                Fohrainheat a;
                break;
            case 2:
                Kelvin b;
                break;
            default:
                cout << "Enter Valid Choice....." << endl;
                break;
            }
        }
        else
        {
            cout << "Exiting the Program.............." << endl;
            break;
        }
    }

    return 0;
}