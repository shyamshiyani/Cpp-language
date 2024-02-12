#include<iostream>
using namespace std;


int main()
{
		double num_1,num_2,divi;

		cout<<"Enter the first number:";
		cin>>num_1;
		cout<<"Enter the second number:";
		cin>>num_2;
		
		try 
		{
			if(num_2==0)
			{
				throw 0;
			}
			else
			{
			divi=num_1/num_2;
				cout << "Division of "<<num_1<<" and "<<num_2<<" is :" << divi << endl;
			}
		}
			catch (int n)
        	{
            cout << "Can't divide by "<<n<< endl;
        	}
        	catch (char n)
        	{
            cout << "Cannot divide by "<<n<< endl;
        	}
        	catch (float n)
        	{
            cout << "Can't posibal divide by "<<n<< endl;
        	}
        	catch (double n)
        	{
            cout << "Error:Can't divide by "<<n<< endl;
        	}
        	catch (...)
        	{
            cout << "Can't divide by zero......."<< endl;
        	}
	return 0;
	
}

