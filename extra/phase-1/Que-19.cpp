#include<iostream>
using namespace std;

void table(int tab)
{
	int i;
    for(i=1;i<=10;i++)
    {
        cout<<tab<<"X"<<i<<"="<<tab*i<<endl;
    }
}

int main()
{
    int number ;
    cout << "Enter number to get multiplication table: " ;
    cin >> number ;

    table(number) ;

    return 0;
}
