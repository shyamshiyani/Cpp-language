#include<iostream>
using namespace std;

class user{
	public:
    	int id, acc_number, bal, transction[];
    	string password, name, contact, email;  
		                                         
    	void setuser(int id, string pass, string name, int accnumber, int balance, string contact, string email) {
        this->id = id;
        this->password = pass;
        this->name = name;   
        this->acc_number = accnumber;
        this->bal = balance;
        this->contact = contact;
        this->email = email;
    }

    void getdata() {
        cout << "\tUser_Id = " << this->id << endl << endl << endl;
        cout << "\tUser_Name \t= " << this->name << endl << endl << endl;
        cout << "\tUser_Accout_Number \t= " << this->acc_number << endl << endl << endl;
        cout << "\tUser_Balance \t= "<< this->bal << endl << endl << endl;
        cout << "\tUser_Contact_Number \t= " << this->contact << endl << endl << endl;
        cout << "\tUser_Email \t= " << this->email << endl << endl << endl;
    }

    int getbal() {
        return this->bal;
    }

    int getid() {
        return this->id;
    }

    string getpass() {
        return this->password;
    }
};

int main() {
    int first, i, id, rep, second, amount, amount2;
    string pass;

    user e[3];

    e[0].setuser(4457, "shyam1111", "shyampatel", 01, 20000, "7894561230", "shyam@gmail.com");
    e[1].setuser(1457, "het11", "ramjibhau", 02, 20000, "9764318520", "ramji@gmail.com");
    e[2].setuser(7012, "yash22", "ramakant", 03, 20000, "9173824650", "rk@gmail.com");

    cout << endl << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t Hello Visitor\n\t\t\t\t\t\tWelcome to our 24/7 banking service\t\t\t\t\t\t\t"<<endl;

    system("pause");
    system("CLS");

    cout << endl << endl << endl << endl;
    cout << "\t\t\t\t\t<------------------Press 1 for login account------------------>"
         << endl << endl << "\t\t\t\t\t<------------------Press 2 for create id------------------> " << endl << endl;

    cout << endl << endl << endl;

    cout << "\t\t\t\t\t\t\tEnter the choice =";
    cin >> first;

    system("pause");
    system("CLS");
    switch (first) {
        case 1:
            cout << endl << endl << endl << endl;
            cout << "\t\t\t\t\t\t\tEnter the Userid=";
            cin >> id;

            cout << endl << endl << endl << endl;
            cout << "\t\t\t\t\t\t\tEnter the Password= ";
            cin >> pass;
            cout << endl << endl << endl << endl;

            for (i = 0; i < 3; i++) {
                if (e[i].getid() == id && e[i].getpass() == pass) {
                    cout << "\t\t\t\t\t<------------------login successfully------------------>" << endl << endl << endl;
                }
            }

            system("pause");
            system("CLS");

            cout << endl << endl << endl << endl;

            cout << "\t\t\t \t\t<------------------HOW CAN WE HELP YOU?------------------->" << endl;


            cout << endl << endl << endl << endl;

            cout << "\t\t\t\t\t<-------------------Press 1 for Account details------------------->" << endl << endl;
            cout << "\t\t\t\t\t<-------------------Press 2 for cash deposit------------------->" << endl << endl;
            cout << "\t\t\t\t\t\t<-------------------Press 3 for Exit------------------->" << endl << endl;

            cout << "\t\t\t\t\t\tEnter your choice= ";
            cin >> second;

            switch (second) {
                case 1:
                    system("CLS");
                    for (i = 0; i < 3; i++) {
                        if (e[i].getid() == id && e[i].getpass() == pass) {
                            e[i].getdata();
                        }
                    }
                    break;

                case 2:
                    cout << "\t\t\t\t\t\tEnter the amount = ";
                    cin >> amount;

                    for (i = 0; i < 3; i++) {
                        if (e[i].getid() == id && e[i].getpass() == pass) {
                            cout << " == " << (e[i].getbal() + amount);
                        }
                    }
                    break;

                case 3:
                    break;
            }
            break;

        case 2:
            cout << endl << endl << endl << endl;

            cout << "\t\t\t\t<---------------------<Comeing soon>--------------------->" << endl;            

        default:
            cout << "\t\t\t\t\t\twrong input...\n\t\t\t\t\t\t\t try again...";
    }

    return 0;
}

