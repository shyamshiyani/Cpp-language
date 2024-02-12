#include<iostream>
using namespace std;

class car{
		public:
			
			string releaseyear,model,color,companyname,id;
};

int main()
{

	car c;
	
		
	cout<<"Enter the Car-Id:";
	cin>>c.id;
	cout<<"Enter the Car-Company-Name:";
	cin>>c.companyname;
	cout<<"Enter the Car-Color:";
	cin>>c.color;
	cout<<"Enter the Car-Model:";
	cin>>c.model;
	cout<<"Enter the Car-release-year:";
	cin>>c.releaseyear;
	cout<<endl;
	

	cout<<"Car-Id:"<<c.id<<endl;
	cout<<"Car-Company-Name:"<<c.companyname<<endl;
	cout<<"Car-Color:"<<c.color<<endl;
	cout<<"Car-Model:"<<c.model<<endl;
	cout<<"Car-release-year:"<<c.releaseyear<<endl;
		

	return 0;
}
