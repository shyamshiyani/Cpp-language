#include <iostream>
using namespace std;

int fac(int number)
{
    int cheak= 1,i;

    for (i=number;i>=1;i--)
    {
        cheak=cheak*i;
    }
    return cheak;
}

int main()
{
    int num;

    cout << "Enter Number To Factorial: ";
    cin >> num;

    cout << "Your Factorial Number Is: " << fac(num) << endl;

    return 0;
}
