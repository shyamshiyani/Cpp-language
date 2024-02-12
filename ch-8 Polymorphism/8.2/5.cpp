#include<iostream>
using namespace std;

class Logical {
private:
    int a;

public:
    void setData(int k) {
        a = k;
    }

    Logical operator&&(const Logical& l) {
        Logical obj;
        obj.a = a && l.a;
        return obj;
    }

    void result() {
       cout<<"numbers are difrent...";
   }
};

int main() {
    Logical n1, n2, n3;

    n1.setData(11);
    n2.setData(21);

    n3 = n1 && n2;

    n3.result();  
    return 0;
}

