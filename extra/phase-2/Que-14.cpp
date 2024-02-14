#include <iostream>
using namespace std;

double calculateIncomeTax(double income)
{
    double tax = 0;

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = 12500 + (income - 500000) * 0.1;
    }
    else
    {
        tax = 62500 + (income - 1000000) * 0.15;
    }

    return tax;
}

int main()
{
    double income;

    cout << "Enter your annual income (in rupees): ";
    cin >> income;

    double tax = calculateIncomeTax(income);

    cout << "The income tax you need to pay: " << tax << " rupees" << endl;

    return 0;
}

