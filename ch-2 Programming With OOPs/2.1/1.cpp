#include<iostream>
using namespace std;

class employe{
		public:
			int id,age,salray,exprience;
			string name,role,city,companyname;
};

int main()
{

	employe emp[5];
	int i;
	
	for(i=0;i<5;i++)
	{
	cout<<"Enter the Information of "<<i+1<<" Employe:"<<endl;
		
	cout<<"Enter the Employe-Id:";
	cin>>emp[i].id;
	cout<<"Enter the Employe-Name:";
	cin>>emp[i].name;
	cout<<"Enter the Employe-Role:";
	cin>>emp[i].role;
	cout<<"Enter the Employe-age in years:";
	cin>>emp[i].age;
	cout<<"Enter the Employe-Salary in thoudend:";
	cin>>emp[i].salray;
	cout<<"Enter the Employe-Experience in years:";
	cin>>emp[i].exprience;
	cout<<"Enter the Employe-City:";
	cin>>emp[i].city;	
	cout<<"Enter the Employe-Company-Name:";
	cin>>emp[i].companyname;
	cout<<endl;
	}
	
	for(i=0;i<5;i++)
	{
		cout<<endl<<"The information about "<<i+1<< "Employe:"<<endl;
		cout<<"Emp_Id:"<<emp[i].id<<endl;
		cout<<"Emp_Name:"<<emp[i].name<<endl;
		cout<<"Emp_Role:"<<emp[i].role<<endl;
		cout<<"Emp_Age:"<<emp[i].age<<endl;
		cout<<"Emp_Salary:"<<emp[i].salray<<endl;
		cout<<"Emp_Experience:"<<emp[i].exprience<<endl;
		cout<<"Emp_City:"<<emp[i].city<<endl;
		cout<<"Emp_Company_Name:"<<emp[i].companyname<<endl;
	}
	return 0;
}

