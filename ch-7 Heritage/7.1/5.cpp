#include<iostream>
using namespace std;

class Num {
private:
    int number;

public:
    void getNum() {
        cout<<"Enter the number:";
        cin>>number;
    }

    int getNumber() const {
        return number;
    }
};

class Square : public Num {
private:
    int square;

public:
    void sq() {
        getNum();
        square=getNumber()*getNumber();
        cout<<"The square of the number is:"<<square<<endl;
    }
};

class Cube : public Num {
private:
    int cube;

public:
    void cu() {
        getNum();
        cube=getNumber()*getNumber()*getNumber();
        cout<<"The cube of the number is:"<<cube<<endl;
    }
};

int main() {
    Square squareObj;
    squareObj.sq();

    Cube cubeObj;
    cubeObj.cu();

    return 0;
}

