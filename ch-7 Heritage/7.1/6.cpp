#include<iostream>
using namespace std;

class A {
public:
    	int id,contact;
		string name,role,salary,experience,email,comany_name,addresh;

public:
    void a1() {
        cout << "- Enter Employee_Id:";
        cin >> this->id;
        cout << "- Enter Employee_Name:";
        cin >> this->name;
        cout << "- Enter Employee_Role:";
        cin >> this->role;
    }

    int getid() const {
        return id;
    }

    string getname() const {
        return name;
    }

    string getrole() const {
        return role;
    }
};

class B : public A {
public:
    string salary, experience;

public:
    void b2() {
        cout << "- Enter Employee_Salary:";
        cin >> this->salary;
        cout << "- Enter Employee_Experience:";
        cin >> this->experience;
    }

    string getsalary() const {
        return salary;
    }

    string getexp() const {
        return experience;
    }
};

class C : public A {
public:
    string comany_name, addresh;

public:
    void c3() {
        cout << "- Enter Employee_Comp_Name:";
        cin >> this->comany_name;
        cout << "- Enter Employee_Addresh:";
        cin >> this->addresh;
    }

    string getcom_name() const {
        return comany_name;
    }

    string getadd() const {
        return addresh;
    }
};

class D : public B, public C {
public:
    string email;
	int contact;

public:
    void d4() {
        cout << "- Enter Employee_Email:";
        cin >> this->email;
        cout << "- Enter Employee_Contact:";
        cin >> this->contact;
    }

    string getemail() const {
        return email;
    }

    int getcontact() const {
        return contact;
    }

    void displayInfo() const {
        cout << "Employee Id: " << B::getid() << endl;
        cout << "Employee Name: " << B::getname() << endl;
        cout << "Employee Role: " << B::getrole() << endl;
        cout << "Employee Salary: " << getsalary() << endl;
        cout << "Employee Experience: " << getexp() << endl;
        cout << "Employee Company Name: " << getcom_name() << endl;
        cout << "Employee Address: " << getadd() << endl;
        cout << "Employee Email: " << getemail() << endl;
        cout << "Employee Contact: " << getcontact() << endl;
    }
};

int main() {
    D d1;
    d1.B::a1();  
    d1.b2();  
    d1.c3();  
    d1.d4();  
    d1.displayInfo();  

    return 0;
}

