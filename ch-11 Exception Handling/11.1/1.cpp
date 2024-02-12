#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter 1 to check if a number is divisible by 0" << endl;
    cout << "Enter 2 to check if you can vote" << endl;
    cout << "Enter 3 to check password validation" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int a = 5, b = 0, divi;

        try
        {
            if (b == 0)
            {
                throw 0;
            }
            divi = a / b;
            cout << "Division of a and b: " << divi << endl;
        }
        catch (...)
        {
            cout << "Can't divide by Zero";
        }
        break;
    }
   
    case 2:
    {
        int age;
        cout << "Enter your age: ";
        cin >> age;

        try
        {
            if (age >= 18)
            {
                cout << "You can vote." << endl;
            }
            else
            {
                throw 18;
            }
        }
        catch (int num)
        {
            cout << "you can't eligible for giving vote..."<<num << endl;
        }
        break;
    }
    case 3:
    	{
    	string pass,id;
    		
			cout<<"Enter the id:";
			cin>>id;
			cout<<"Set password:";
			cin>>pass;
			try
			{
			if(pass[0]>='A' && pass[0]<='Z')
			{
				cout<<"password set successfully...";
			}
			else
			{
				throw pass ;
			}

			}
	        catch (...)
	        {
	            cout << "Error: " << endl<<"a password cannot be validate if it doesn’t containsan uppercase letter";
	        }
        break;
		}
    
    default:
        cout << "Invalid choice" << endl;
    


    }
    return 0;
}
