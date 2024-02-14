#include<iostream>
using namespace std;

void Reverse(int num)
{
    float rev = 0,temp;

    while (num > 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }

    cout << "reverse number: "<< rev << endl;
    
}

int main()
{
	int num;
	
	cout<<"Enter the number:";
	cin>>num;
    Reverse(num);

    return 0;
}
