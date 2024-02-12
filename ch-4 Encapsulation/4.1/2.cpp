#include<iostream>
using namespace std;

class customers
{
	private :
		int id,age,sim_card_validity;
		string name,number,city,telecome_brand;
	
	public :
		setData()
		{
				cout<<"Enter the customers id:";
				cin>>id;
				cout<<"Enter the customers name:";
				cin>>name;
				cout<<"Enter the customers age:";
				cin>>age;
				cout<<"Enter the customers telecome brand name(like Jio, Airtel, Vi, etc...):";
				cin>>telecome_brand;
				cout<<"Enter the customers mobile-number:";
				cin>>number;
				cout<<"Enter the customers city:";
				cin>>city;
				cout<<"Enter the customers simcard-validity(in years):";
				cin>>sim_card_validity;
				cout<<endl;
		}
		
		getData()
		{
			cout<<endl<<"- cust_id:"<<id<<endl;
			cout<<"- cust_name:"<<name<<endl;
			cout<<"- cust_age:"<<age<<endl;
			cout<<"- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.):"<<telecome_brand<<endl;
			cout<<"- cust_mobile_number:"<<number<<endl;
			cout<<"- cust_city:"<<city<<endl;
			cout<<"- cust_simcard_validity (in years):"<<sim_card_validity<<endl;
		}
		
			
		
		
};
int main()
{
	customers cus1,cus2,cus3,cus4,cus5;
	
	cus1.setData();
	cus2.setData();
	cus3.setData();
	cus4.setData();
	cus5.setData();
	
	
	cus1.getData();
	cus2.getData();
	cus3.getData();
	cus4.getData();
	cus5.getData();
	
	
	
	return 0;
}

