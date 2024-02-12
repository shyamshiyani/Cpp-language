#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter the size of array:";
	cin>>n;
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		cout<<"a[" <<i << "]:";
		cin>>a[i];
	}
	cout<<"even elements from given 1D array:"<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		cout<<""<<a[i]<<endl;  
	}
	
	
	return 0;
}
