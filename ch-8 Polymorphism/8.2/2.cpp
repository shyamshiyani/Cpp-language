#include<iostream>
using namespace std;

class Number {
private:
    int x;

public:
    void setdata() {
    	cout<<"Enter first number to divide whith second number :"<<endl;

    	cout<<"number :";  
    	cin>>this->x;
    }

    Number operator/(Number d) {
        Number divi;
        divi.x = this->x / d.x;
        return divi;
    }

    void getdata() {
        cout << "Division of numbers: " << this->x << endl;
    }
};

int main() {
    Number n1, n2, n3;

    n1.setdata();
    n2.setdata();

    n3 = n1 / n2;

    n3.getdata();

    return 0;
}

