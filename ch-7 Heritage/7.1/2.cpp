#include<iostream>
using namespace std;
class mother{
	public:
		display_1()
		{
			cout<<"Hello..."<<endl<<"This is Mother class."<<endl;
		}
};
class daughter : public mother{
	public:
		display_2()
		{
			cout<<"Hello..."<<endl<<"This is Daughter class."<<endl;
		}
};
int main()
{
	daughter child;
	child.display_1();
	child.display_2();
	return 0;
}
