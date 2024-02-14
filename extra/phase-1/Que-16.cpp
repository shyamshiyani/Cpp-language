#include <iostream>
using namespace std;

void evenodd(int cheak)
{

    if (cheak % 2 == 0)
        cout << "number is Even..." << endl;
    else
        cout << "number is Odd..." << endl;
}

int main()
{
    int num;

    cout << "Enter Numbr : " ;
    cin >> num;

    evenodd(num);

    return 0;
}
