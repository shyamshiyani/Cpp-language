#include<iostream>
using namespace std;

struct Soldier {
    string name;
    int score;
};

int main() {
    struct Soldier soldiers[10];
    int i;

    cout << "Enter the name and score for each soldier:" << endl;

    for (i = 0; i < 10; i++) {
        cout << "Soldier " << i + 1 << endl;
        cout << "Name: ";
        cin >> soldiers[i].name;
        cout << "Score: ";
        cin >> soldiers[i].score;
    }

    int maxScore = soldiers[0].score;
    string maxName = soldiers[0].name;

    for (i = 1; i < 10; i++) {
        if (soldiers[i].score > maxScore) {
            maxScore = soldiers[i].score;
            maxName = soldiers[i].name;
        }
    }

    cout << "The soldier with the highest score:" << maxName << endl;
    cout << "Highest score:" << maxScore << endl;

    return 0;
}

