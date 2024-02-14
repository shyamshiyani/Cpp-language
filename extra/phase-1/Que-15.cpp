#include<iostream>
using namespace std;

int main()
{
	char input;
	
	cout<<"Enter the character to cheak:";
	cin>>input;
	
	
	if(input=='A'||input=='E'||input=='I'||input=='O'||input=='U')
	{
		cout<<"Enterd character is vowel...";
	}
	else if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u')
	{
		cout<<"Enterd character is vowel...";
	}	
	else
	{
		cout<< "Enterd character is a consonant...";

	}
	
	return 0;
	
}
