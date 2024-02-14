#include<iostream>
using namespace std;

void fibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " numbers: ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int N;

    cout << "Enter the number of terms for Fibonacci Series: ";
    cin >> N;

    fibonacci(N);

    return 0;
}

