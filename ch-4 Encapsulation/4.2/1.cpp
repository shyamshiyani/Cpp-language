#include<iostream>
using namespace std;


class hotel{
	private :
		int id,rate,year,staf,room;
		string name,type;
		static string city;
	public :
		setdata()
		{
			cout<<"Enter hotel id:";
			cin>>id;
			cout<<"Enter hotel name:";
			cin>>name;
			cout<<"Enter hotel-type(like hotel or motel):";
			cin>>type;
			cout<<"Enter hotel-rating(like 1 Star, 2 Start, ..., 7 Star):";
			cin>>rate;
			cout<<"Enter hotel-establish_year:";
			cin>>year;
			cout<<"Enter hotel-staff-quantity:";
			cin>>staf;
			cout<<"Enter hotel-room-quantity:";
			cin>>room;	
			cout<<endl;
		}
		getdata()
		{
			cout<<"- hotel_id:"<<id<<endl;
			cout<<"- hotel_name:"<<name<<endl;
			cout<<"- hotel_type (like hotel or motel):"<<type<<endl;
			cout<<"- hotel_rating (like 1 Star, 2 Start, ..., 7 Star):"<<rate<<endl;
			cout<<"- hotel_establish_year:"<<year<<endl;
			cout<<"- hotel_staff_quantity:"<<staf<<endl;
			cout<<"- hotel_room_quantity:"<<room<<endl;
		}
			static getcity()
			{
					cout<<"- hotel_location (city name):"<<city<<endl;
			}
		
};
string hotel::city="Jamnagar";
int main()
{
	int number,i;
	cout<<"Enter the numbers of hotels:";
	cin>>number;
	
	hotel hot[number];
	
	for(i=0;i<number;i++)
	{
		hot[i].setdata();
	}
	for(i=0;i<number;i++)
	{
		hot[i].getdata();
		hot[i].getcity();
	}
	return 0;
}
