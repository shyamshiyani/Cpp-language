#include <iostream>
using namespace std;

void Multi_Table(int num, int start, int end) {
    for(int i = start; i <= end; i++) {
        cout << num << " X " << i << " = " << num * i << endl;
    }
}

int main() {
    int number, start, end;
    
    cout << "Enter the number whose multiplication table you want to generate: ";
    cin >> number;
    
    cout << "Enter the starting value of the range: ";
    cin >> start;
    
    cout << "Enter the ending value of the range: ";
    cin >> end;
    
    Multi_Table(number, start, end);
    
    return 0;
}

