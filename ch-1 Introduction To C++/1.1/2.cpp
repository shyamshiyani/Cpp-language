#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char string[50];
	int len,i;
	
	cout<<"Enter any string:";
	cin>>string;
	
	len=strlen(string);
	
	for(i=0;i<len;i++)
	{
		if(string[i]>=65 && string[i]<=90)
		{
			string[i]=string[i]+32;
		}
		else if (string[i]>=97 && string[i]<=122)
		{
			string[i]=string[i]-32;
		}
		cout<<string[i];
	}
	
	
	
	return 0;
}
