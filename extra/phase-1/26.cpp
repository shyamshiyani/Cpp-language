#include<iostream>
using namespace std;

int main()
{
	int num,digit;
	
	cout<<"Enter the numebr:";
	cin>>num;
	
    int reversedNum = 0, originalNum = num;

    
    while (num > 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    if (originalNum == reversedNum)
    	{
      	cout<<reversedNum<<" is Palindrome number...";
		}
    else
		{
    	cout<<reversedNum<<" is not Palindrome number...";
		}
	
	return 0;	
}
