#include <iostream>
using namespace std;

void GST(float m, float r)
{
    cout << "Total Bill Including GST : Rs." << m + ((m * r) / 100 )<< endl;
    cout << "Total GST: Rs." << (m * r) / 100 << endl;
}

int main()
{
    float m,r;
    cout << "Enter Your Bill Amount : " ;
    cin >> m ;
    cout << "Enter Rate Of Interest : " ;
    cin >> r ;

    GST(m,r);

    return 0;
    
}
