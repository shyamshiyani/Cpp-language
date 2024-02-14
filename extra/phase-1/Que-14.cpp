#include <iostream>
using namespace std;

void year()
{
    int leap ;

    cout << "Enter Year : " ;
    cin >> leap ;

    if (leap % 4 == 0)
        cout << "<<<Enterd year is leap-year>>>" << endl;
    else
        cout << "<<<Enterd year is not leap-year>>>" << endl;
}

int main()
{
    year();
    return 0;
}
