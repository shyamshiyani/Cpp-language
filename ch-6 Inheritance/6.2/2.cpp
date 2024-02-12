#include<iostream>
using namespace std;

class A {
private:
    int a;

public:
    void a1() {
        cout << "Enter the value of a:";
        cin >> a;
    }

    int getA() const {
        return a;
    }
};

class B : public A {
private:
    int b;

public:
    void b2() {
        cout << "Enter the value of b:";
        cin >> b;
    }

    int getB() const {
        return b;
    }
};

class C : public A {
private:
    int c;

public:
    void c3() {
        cout << "Enter the value of c:";
        cin >> c;
    }

    int getC() const {
        return c;
    }
};

class D : public B, public C {
private:
    int d;

public:
    void d4() {
        cout << "Enter the value of d:";
        cin >> d;
    }

    int getD() const {
        return d;
    }

    int calculateSum() const {
        return B::getA() + getB() + getC() + getD();
    }
};

int main() {
    D d1;
    d1.B::a1(); 
    d1.b2(); 
    d1.c3(); 
    d1.d4();    

  
    cout << "Sum of all values:" << d1.calculateSum() << endl;

    return 0;
}


