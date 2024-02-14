#include<iostream>
using namespace std;

int main() {
    int containerA[2], containerB[4], containerC[6], k, i;
    
    for (i = 0; i < 2; i++) {
        cout << "Enter elements for Container A: ";
        cin >> containerA[i];
        containerC[i] = containerA[i];
    }

    k = i;
    cout << endl;
    for (i = 0; i < 4; i++) {
        cout << "Enter elements for Container B: ";
        cin >> containerB[i];
        containerC[k] = containerB[i];
        k++;
    }

    for (i = 0; i < k; i++) {
        cout << "Zombies transferred to new Container C: " << containerC[i] << endl;
    }

    return 0;
}

