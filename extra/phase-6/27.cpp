#include <iostream>
using namespace std;

class Bank {
protected:
    float roi;

public:
    Bank(float interest) : roi(interest) {}

    virtual float getInterestRate() {
        return roi;
    }
};

class PrivateBank : public Bank {
public:
    PrivateBank(float interest) : Bank(interest) {}

    float getInterestRate() override {
        return roi + 1.0f; 
    }
};

int main() {

    Bank* pubBank = new Bank(5.0f); 
    PrivateBank* priBank = new PrivateBank(6.0f); 

  
    cout << "Interest Rate for Public Bank: " << pubBank->getInterestRate() << "%" << endl;
    cout << "Interest Rate for Private Bank: " << priBank->getInterestRate() << "%" << endl;

    delete pubBank;
    delete priBank;

    return 0;
}

