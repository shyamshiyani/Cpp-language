#include<iostream>
using namespace std;

class Cricket {
public:
    void match_total_over() {
        int totalover = 70;
        cout << "Total overs in match: " << totalover << endl;
    }
};

class T20_Match : public Cricket {
public:
    void match_t20() {
    	match_total_over();
        cout << "Total overs in T20 match: " << 20 << endl;
    }
};

class TestMatch : public Cricket {
public:
    void match_test() {
        cout << "Total overs in Test match: " << 50 << endl;
    }
};

int main() {
    T20_Match over;
    over.match_t20();

    TestMatch over1;
    over1.match_test();

    return 0;
}
