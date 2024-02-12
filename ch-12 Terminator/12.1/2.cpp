#include<iostream>
using namespace std;

class A{
	public :
		method_1()
		{
			cout<<"This is class A's First method..."<<endl;
		}
		
};
class B : public A{
	public :
		method_2()
		{
			cout<<"This is class B's Second method..."<<endl;
		}
};
class C : public A{
	public :
		method_3()
		{
			cout<<"This is class C's Thired method..."<<endl;
		}
};
class D : public B , public C{
	public :
		method_4()
		{
			cout<<"This is class D's Fourth method..."<<endl;
		}
};
int main()
{
	
	D met_1;
	
	met_1.B::method_1();
	met_1.method_2();
	met_1.method_3();
	met_1.method_4();
	return 0;
}


