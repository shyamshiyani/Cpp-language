
#include<iostream>
using namespace std;


int main()
{
	int number_1,number_2,raise=1,i;
	
	cout<<"Enter the base number:";
	cin>>number_1;
	cout<<"Enter the number to raise- number_1:";
	cin>>number_2;
	
	
	for (i = 0;i<number_2; ++i) {
		
        raise*=number_1;
    }
	
	cout<<"The number is : "<<raise;
	
}
