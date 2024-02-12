#include<iostream>
using namespace std;

class Admin {
protected:
    string company_name, can_terminate;
    int total_annual_revenue;

protected:
    int manager_salary, employee_salary, total_staff;

public:
    Admin(string name, int salary_1, int salary_2, int staff, int profit, string fire)
    {
    	this->company_name=name;
    	this->manager_salary=salary_1;
    	this->employee_salary=salary_2;
    	this->total_staff=staff;
    	this->total_annual_revenue=profit;
    	this-> can_terminate=fire;
	}
     
    virtual void Myaccess() {
    	cout<<endl<<"<<<Admin-panel>>>"<<endl;
        cout << endl << "- company_name: " << company_name << endl;
        cout << "- manager_salary: " << manager_salary << endl;
        cout << "- employee_salary: " << employee_salary << endl;
        cout << "- total_staff: " << total_staff << endl;
        cout << "- total_annual_revenue: " << total_annual_revenue << endl;
        cout << "- can_terminate: " << can_terminate << endl;
    }
};

class Manager : public Admin {
public:
    Manager(string name, int salary_1, int salary_2, int staff)
        : Admin(name, salary_1, salary_2, staff, 0, "") {}

    void Myaccess()  {
        cout<<endl<<"<<<Manager-panel>>>"<<endl;
		cout << endl << "- company_name: " << company_name << endl;
        cout << "- manager_salary: " << manager_salary << endl;
        cout << "- employee_salary: " << employee_salary << endl;
        cout << "- total_staff: " << total_staff << endl;
    }
};

class Employee : public Manager {
public:
    Employee(string name, int salary, int staff)
        : Manager(name, salary, salary, staff) {}

    void Myaccess()  {
    	cout<<endl<<"<<<Employee-panel>>>"<<endl;
        cout << endl << "- company_name: " << company_name << endl;
        cout << "- employee_salary: " << employee_salary << endl;
        cout << "- total_staff: " << total_staff << endl;
    }
};

int main() {
    Admin info("red & white multimedia education", 50000, 5000, 7, 1500000, "manager, employee");
    info.Myaccess();

    Manager info1("red & white multimedia education", 50000, 5000, 7);
    info1.Myaccess();

    Employee info2("red & white multimedia education", 5000, 7);
    info2.Myaccess();

    return 0;
}
