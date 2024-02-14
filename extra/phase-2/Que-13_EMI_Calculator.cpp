#include <iostream>

using namespace std;

class LoanCalculator
{
private:
    float carPrice, downPayment, interestRate, loanTerm;

public:
    LoanCalculator(float carPrice, float downPayment, float interestRate, float loanTerm) : carPrice(carPrice), downPayment(downPayment), interestRate(interestRate), loanTerm(loanTerm) {}

    float calculateEMI()
    {
        float monthlyInterestRate = interestRate / 12.0 / 100.0;

        float power = 1;
        for (int i = 0; i < loanTerm; ++i)
        {
            power *= (1 + monthlyInterestRate);
        }

        float numerator = carPrice * monthlyInterestRate * power;
        float denominator = power - 1;
        float emi = numerator / denominator;
        return emi;
    }
};

int main()
{
    float carPrice, downPayment, interestRate, loanTerm;

    cout << "Enter car price (in Rs.): ";
    cin >> carPrice;
    cout << "Enter down payment (in Rs.): ";
    cin >> downPayment;
    cout << "Enter annual interest rate (%): ";
    cin >> interestRate;
    cout << "Enter loan term (in months): ";
    cin >> loanTerm;

    LoanCalculator loanCalculator(carPrice, downPayment, interestRate, loanTerm);
    float emi = loanCalculator.calculateEMI();
    cout << "Monthly EMI: Rs. " << emi << endl;

    return 0;
}

