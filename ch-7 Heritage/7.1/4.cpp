#include<iostream>
using namespace std;

class Personal {
private:
    string name;
    int age;

public:
    void set_info_1() {
    	cout<<"Enter the Employee name:";
    	cin>>this->name; 
    	cout<<"Enter the Employee Age:";
    	cin>>this->age; 
    }

    void print_Info1() const {
        cout<<"- Name:"<<name<<endl;
        cout<<"- Age:"<<age<<endl;
    }
};


class Job {
private:
    string role,company;

public:
    void set_info_2() {
        cout<<"Enter the Employee role:";
    	cin>>this->role; 
		cout<<"Enter the Employee company:";
    	cin>>this->company;         
    }

    void print_Info2() const {
        cout<<"- Role:"<<role<<endl;
        cout<<"- Company:"<<company<<endl;
    }
};


class Employee : public Personal, public Job {
private:
    int id,number;

public:
    void set_info_3() {
        cout<<"Enter the Employee id:";
    	cin>>this->id; 
    	cout<<"Enter the Employee number:";
    	cin>>this->number; 
		
		this->id = id;
        this->number = number;
    }

    void print_Info3() const {
        cout<<endl<<"- ID:"<<id<<endl;
        cout<<"- Employee Number:"<<number<<endl;

        print_Info1();
        print_Info2();
    }
};

int main() {
    Employee emp;
    emp.set_info_1();
    emp.set_info_2();
    emp.set_info_3();
    emp.print_Info3();

    return 0;
}
