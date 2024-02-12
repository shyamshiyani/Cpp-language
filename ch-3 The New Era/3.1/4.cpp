#include<iostream>
using namespace std;

class house
{
	public:
		int chair,windows,bed,door,fan,lights;
};
int main()
{
	house h1;
	
	cout<<"Enter the number of Chair:";
	cin>>h1.chair;
	cout<<"Enter the number of Windows:";
	cin>>h1.windows;
	cout<<"Enter the number of Bed:";
	cin>>h1.bed;
	cout<<"Enter the number of Door:";
	cin>>h1.door;
	cout<<"Enter the number of Fan:";
	cin>>h1.fan;
	cout<<"Enter the number of Lights:";
	cin>>h1.lights;	
		
	cout<<endl<<"The number of Chair:"<<h1.chair<<endl;	
	cout<<"The number of Windows:"<<h1.windows<<endl;
	cout<<"The number of Bed:"<<h1.bed<<endl;
	cout<<"The number of Door:"<<h1.door<<endl;
	cout<<"The number of Fan:"<<h1.fan<<endl;
	cout<<"The number of Lights:"<<h1.lights<<endl;
	return 0;
}

