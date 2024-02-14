#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"Enter the numebr_1:";
	cin>>a;
	cout<<"Enter the number_2:";
	cin>>b;
	
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	cout<<"::: After swapped Number:::"<<endl;
	cout<<"Number_1:"<< a << endl;
	cout<<"Number_2:"<< b << endl;
}
