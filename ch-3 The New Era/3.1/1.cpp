
#include<iostream>
using namespace std;

class dis
{
	public :
		int feet,inch,total_;	
};
int main()
{
	dis d[2];
	int feettotal,i,total,inc,inchtotal,sum;
	
	for(i=0;i<2;i++)
	{
	cout<<"Enter the distance in feet "<<i+1<<" :";
	cin>>d[i].feet;
	cout<<"Enter the distance in inch "<<i+1<<" :";
	cin>>d[i].inch;
	cout<<endl;
	}
	
	for(i=0;i<2;i++)
	{
		d[i].total_=(d[i].feet*12)+(d[i].inch);
		
	}
		total=(d[0].feet*12)+(d[0].inch)+(d[1].feet*12)+(d[1].inch);
	
		feettotal=(d[0].total_+d[1].total_)/12;
		
		inc=d[0].feet+d[1].feet;
	
		sum=feettotal*12;
		
		inchtotal=total-sum;
		
		cout<<endl<<feettotal<<" feet "<<inchtotal<<" inch ";
	
	
	return 0;
}

