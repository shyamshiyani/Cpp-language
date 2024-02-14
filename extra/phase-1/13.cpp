#include<iostream>
using namespace std;

void charcheak()
{
    cout << "Enter Character Here : " ;
    char a;
    cin >> a ;

    if(a >= 'A' && a <= 'Z')
	{
        cout << "Your String's first letter in Uppercase.........." << endl ;
	}
    else if(a >= 'a' && a <= 'z')
	{
        cout << "Your Strin's first letter in Lowercase.........." << endl;
	}
    else if(a >= '0' && a <= '9')
	{
        cout << "Your String's first letter in Number.........." << endl ;
	}
    else 
	{
        cout << "Your string's first letter in  Special Character.........." << endl ;
	}
}

int main()
{
    charcheak();
    return 0;
}
