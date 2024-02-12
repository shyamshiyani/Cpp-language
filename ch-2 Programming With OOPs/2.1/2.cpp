#include<iostream>
using namespace std;

class car{
		public:
			
			string releaseyear,model,color,companyname,id;
};

int main()
{

	car c[4];
	int i;
	
	for(i=0;i<4;i++)
	{
	cout<<"Enter the Information of "<<i+1<<" car:"<<endl;
		
	cout<<"Enter the Car-Id:";
	cin>>c[i].id;
	cout<<"Enter the Car-Company-Name:";
	cin>>c[i].companyname;
	cout<<"Enter the Car-Color:";
	cin>>c[i].color;
	cout<<"Enter the Car-Model:";
	cin>>c[i].model;
	cout<<"Enter the Car-release-year:";
	cin>>c[i].releaseyear;
	cout<<endl;
	
	}
	
	for(i=0;i<4;i++)
	{
		cout<<endl<<"The information about "<<i+1<< " car:"<<endl;
		cout<<"Car-Id:"<<c[i].id<<endl;
		cout<<"Car-Company-Name:"<<c[i].companyname<<endl;
		cout<<"Car-Color:"<<c[i].color<<endl;
		cout<<"Car-Model:"<<c[i].model<<endl;
		cout<<"Car-release-year:"<<c[i].releaseyear<<endl;
		
	}
	return 0;
}

