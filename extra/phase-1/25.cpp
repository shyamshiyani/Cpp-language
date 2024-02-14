#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"Enter the value of c:";
	cin>>c;
	cout<<"Enter the value of d:";
	cin>>d;
	
	if(a>b)
	{
		cout<<"A is largest...";
	}
	else if(a>c)
	{
		cout<<"A is largest...";
	}
	else if(a>d)
	{
		cout<<"A is largest...";	
	}
	else if(b>c)
	{
		cout<<"B is largest...";
	}
	else if(b>d)
	{
		cout<<"B is largest...";
	}
	else if(c>d)
	{
		cout<<"C is largest...";
	}
	else
	{
		cout<<"D is largest...";
	}
	return 0;
	
}
