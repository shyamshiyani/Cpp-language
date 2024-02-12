  #include<iostream>
using namespace std;

class Number {
private:
    int x;

public:
    void setdata(int num) {
        this->x = num;
    }

    Number operator++() {
        Number temp;
        temp.x = ++(this->x);
        return temp;
    }

    void getdata() {
        cout << "after incriment: " << this->x << endl;
    }
};

int main() {
    Number n1, n2;

    n1.setdata(20);

    
	n2=++n1;

    n2.getdata();


    return 0;
}
