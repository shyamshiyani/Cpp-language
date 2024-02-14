#include <iostream>
using namespace std;

void swapCoins(int bowl1, int bowl2) {
    int temp;
    
    temp = bowl1;
    bowl1 = bowl2;
    bowl2 = temp;
    
    cout << "After 5 minutes, the first bowl has " << bowl1 << " rupee coin" << endl;
    cout << "After 5 minutes, the second bowl has " << bowl2 << " rupee coin" << endl;
}

int main() {
    int bowl1 = 1, bowl2 = 2; 

    cout << "The first bowl has " << bowl1 << " rupee coin" << endl;
    cout << "The second bowl has " << bowl2 << " rupee coin" << endl;
    
    swapCoins(bowl1, bowl2);

    return 0;
}

