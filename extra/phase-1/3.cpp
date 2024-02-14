#include<iostream>
using namespace std;

int quotient(float m, float s)
{
    return m/ s ;
}

int remainder(float m, float s)
{
    return (int)m % (int)s ;
}

int main()
{
    float a , b ;

    cout << "Enter First number: " ;
    cin >> a ;
    cout << "Enter Second numebr: " ;
    cin >> b ;

    cout << endl 
         << "Your quotient is : " 
         << quotient(a, b) 
         << endl 
         << "Your remainder Is : " << remainder(a,b) 
         << endl ;

    return 0;
}
