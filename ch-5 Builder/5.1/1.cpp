#include<iostream>
using namespace std;

class Railway {
private:
    string trainName, source, destination, trainTime;
    int trainNumber;

public:
    Railway() {
        cout << "Enter Train Number : ";
        cin >> this->trainNumber;
        cout << "Enter Train Name : ";
        cin >> this->trainName;
        cout << "Enter Train Class : ";
        cin >> this->source;
        cout << "Enter Train Destination : ";
        cin >> this->destination;
        cout << "Enter Train Time : ";
        cin >> this->trainTime;
        cout << endl ;
    }

    int tn() {
        return this->trainNumber;
    }

    void getData() {
        cout << "- Train Number Is : " << this->trainNumber << endl;
        cout << "- Train Name Is : " << this->trainName << endl;
        cout << "- Train Class Is : " << this->source << endl;
        cout << "- Train Destination Is : " << this->destination << endl;
       cout << "- Train Time Is : " << this->trainTime << endl << endl;
    }
};

int main() 
{
    cout << "Enter Train's number (Minimum 3's need): ";
    int n, i;
	int shy = 0;
    cin >> n;
    cout << endl ;

    if (n >= 3) 
	{
        Railway train[n];

        cout << "Enter Train Number to get information: ";
        int num;
        cin >> num;
        cout << endl ;

        for (i=0;i<n;i++) 
		{
            if (train[i].tn()==num) 
			{
                train[i].getData();
                break;
			}
			else
			{
                shy++;
            }
        }

        if (shy==n) 
		{
            cout<<"Invalid Train Number" << endl;
        }
    }
	else 
	{
        cout << "minimum 3 trani's information need... "<< endl;
    }

    return 0;
}
