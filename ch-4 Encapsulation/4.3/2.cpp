#include<iostream>
using namespace std;
class cafe{
	private :
		int id,rating,year,staff;
		string name,type;
		static string city;
		
	public :
		cafe()
		{
			cout<<"Enter the cafe id:";
			cin>>this->id;
			cout<<"Enter the cafe name:";
			cin>>this->name;
			cout<<"Enter the cafe type (like rooftop or normal):";
			cin>>this->type;
			cout<<"Enter the cafe rating (like 1 star, 2 star, ..., star):";
			cin>>this->rating;
			cout<<"Enter the cafe establish year:";
			cin>>this->year;			
			cout<<"Enter the cafe staff quantity:";
			cin>>this->staff;
			cout<<endl;
		}
		getdata()	
		{
		cout<<endl<<"- cafe_id:"<<this->id<<endl;
		cout<<"- cafe_name:"<<this->name<<endl;
		cout<<"- cafe_type (like rooftop or normal):"<<this->type<<endl;
		cout<<"- cafe_rating (like 1 Star, 2 Start, ..., 5 Star):"<<this->rating<<endl;
		cout<<"- cafe_establish_year:"<<this->year<<endl;
		cout<<"- cafe_staff_quantity:"<<this->staff<<endl;
		}	
		static getcity()
		{
		cout<<"- cafe_location (city name):"<<city<<endl;
		}
};

string cafe::city="jamnagar";

int main()
{
	int i,n;
	
	cout<<"Enter the cafe numbers:";
	cin>>n;
	
	cafe c[n];
	
	for(i=0;i<n;i++)
	{
		c[i].getdata();	
		c[i].getcity();
	}
	return 0;
}
