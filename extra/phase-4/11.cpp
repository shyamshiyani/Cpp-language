#include<iostream>
using namespace std;

int main()
{
    int numbers[5],i;
    
    for(i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }
    
    cout << "Reversed numbers: " << endl;
    for(i = 4; i >= 0; i--)
    {
        cout << numbers[i] << endl;
    }
    
    return 0;
}

