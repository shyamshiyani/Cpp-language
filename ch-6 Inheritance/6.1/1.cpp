
#include<iostream>
using namespace std;

class x{
	public :
	int a,b,c;
	
};
class y :public x{
	public:
	setdata()
	{
		cout<<"Enter the value of a:";
		cin>>a;
		cout<<"Enter the value of b:";
		cin>>b;
		cout<<"Enter the value of c:";
		cin>>c;
	}
	getdata()
	{
		a=a*a*a;
		b=b*b*b;
		c=c*c*c;
	cout<<endl<<"sum of three value's cube="<<a+b+c<<endl;	
	}
};
int main()
{
	y a1;
	a1.setdata();
	a1.getdata();
	return 0;
	 
}

