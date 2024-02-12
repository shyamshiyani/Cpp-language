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
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
		
	for(i=0;i<n;i++)
	{
		int fac=1,j;
		for(j=1;j<=a[i];j++)
		{
		fac=fac*j;
		}
		
		cout <<"Fac["<<i<<"]:"<<fac<<endl;	
		
	}
	
	return 0;
}

