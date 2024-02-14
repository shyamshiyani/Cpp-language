#include <iostream>
using namespace std;

class Box {
private:
    double len,wid,hei,vol;

public:
    Box(double l, double w, double h) {
        len = l;
        wid = w;
        hei = h;
        vol = len * wid * hei;
    }

    bool Even(int num) {
        return num % 2 == 0;
    }

    void displayVolume() {
        cout << "Volume: " << vol << endl;
        if (Even(static_cast<int>(vol))) {
            cout << "Volume is even." << endl;
        } else {
            cout << "Volume is odd." << endl;
        }
    }
};

int main() {
    Box b(3.0, 4.0, 5.0);
    b.displayVolume();

    return 0;
}

