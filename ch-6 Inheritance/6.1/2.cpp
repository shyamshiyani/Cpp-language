#include<iostream>
using namespace std;

class P{
	public :
		float degree;
};
class Q :public P{
	public:
		celsious()
		{
			cout<<"Enter the temperature in degree:";
			cin>>degree;
			float degre=(degree*9/5)+32; 
			cout<<endl<<"tenmp in Fehrenheit: "<<	degre<<endl;	
		}
};
class R:public Q{
	public:
		ferenheit()
		{
			float kelvin = (degree - 32) *5 / 9 + 273.15 ;
			cout<<endl<<"tenmp in kelvin:"<<	kelvin<<endl;		
		}
	
};
int main()
{
	R op1;
	
	op1.celsious();
	op1.ferenheit();
	return 0;
}
