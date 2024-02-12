#include<iostream>
using namespace std;
class time
{
	public:
		int hou,min,sec;
};
int main()
{
	time t[2];
	int i,total1,total2,total3,hours,minis,secs;
	 
	for(i=0;i<2;i++)
	{
		cout<<"Enetr the Hours 12 hour's formate:";
		cin>>t[i].hou;
		cout<<"Enetr the Minutes:";
		cin>>t[i].min;
		cout<<"Enetr the Second:";
		cin>>t[i].sec;
		cout<<endl;
	}
	total1=((((t[0].hou)*(60)+t[0].min)*60)+t[0].sec);
	total2=((((t[1].hou)*(60)+t[1].min)*60)+t[1].sec);
	
	total3=total1+total2;
	hours=(((total3)/60)/60);
	minis=(((total3)/60)-(hours*60));
	secs=total3%60; 


	
	cout<<endl<<""<<hours<<"hours"<<minis<<"minis"<<secs<<"seconds";
	return 0;
}
