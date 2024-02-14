#include<iostream>
using namespace std;

float calculate (float p, float r , float n)
{
    return ( p * r* n ) / 100 ;
}

int main()
{
    float p, r, n ;

    cout << "Enter price : " ;
    cin >> p ; 
    cout << "Enter rate of intrest  : " ;
    cin >> r ; 
    cout << "Enter time: " ;
    cin >> n ; 

    cout << "interest : " << calculate(p, r, n) << endl;
    
    return 0;
}
