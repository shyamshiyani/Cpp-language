#include <iostream>
using namespace std;

void serice(int n){
    int first = 0, second = 1, next;

    while(first <= n){
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    serice(num);
    
    return 0;
}

