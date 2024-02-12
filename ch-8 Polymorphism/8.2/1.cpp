 
#include<iostream>
using namespace std;

class Number {
private:
    int x;

public:
    void setdata() {
        cout << "Enter the number: ";
        cin >> this->x;
    }

    bool operator<(Number d) {
        return this->x < d.x;
    }

    void getdata_true() {
        cout << "number_2 is a higher value." << endl;
    }

    void getdata_false() {
        cout << "number_1 is a higher value." << endl;
    }
};

int main() {
    Number n1, n2, n3;

    n1.setdata();
    n2.setdata();

    if (n1 < n2) {
        n3.getdata_true();
    } else {
        n3.getdata_false();
    }

    return 0;
}


