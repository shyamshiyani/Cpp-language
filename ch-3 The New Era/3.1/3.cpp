#include<iostream>
using namespace std;
class time{
	public:
		int total;
};
int main()
{
	int second,minutes,hours;
	time t;
	
	cout<<"Enter the seconds:";
	cin>>t.total;
	
	hours=((t.total/60)/60);
	minutes=((t.total/60)-(hours*60));
	second=t.total%60;
	
	cout<<endl<<""<<hours<<"hours"<<minutes<<"minis"<<second<<"seconds";
	return 0;
	
}
