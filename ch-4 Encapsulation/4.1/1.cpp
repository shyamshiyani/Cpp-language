#include<iostream>
using namespace std;

class Student
{
	private :
		int id,age;
		string name,course,email,city,college;
	
	public :
		setData()
		{
				cout<<"Enter the student id:";
				cin>>id;
				cout<<"Enter the student name:";
				cin>>name;
				cout<<"Enter the student age:";
				cin>>age;
				cout<<"Enter the student course:";
				cin>>course;
				cout<<"Enter the student email:";
				cin>>email;
				cout<<"Enter the student city:";
				cin>>city;
				cout<<"Enter the student college:";
				cin>>college;
				cout<<endl;
		}
		
		getData()
		{
			cout<<endl<<"- stu_id"<<id<<endl;
			cout<<"- stu_name"<<name<<endl;
			cout<<"- stu_age"<<age<<endl;
			cout<<"- stu_course"<<course<<endl;
			cout<<"- stu_email"<<email<<endl;
			cout<<"- stu_city"<<city<<endl;
			cout<<"- stu_college"<<college<<endl;
		}
		
			
		
		
};
int main()
{
	Student s1,s2,s3,s4,s5;
	
	s1.setData();
	s2.setData();
	s3.setData();
	s4.setData();
	s5.setData();
	
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
	
	
	
	return 0;
}

