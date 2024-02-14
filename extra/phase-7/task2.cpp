#include <iostream>
using namespace std;

int main()
{
	int num1, num2, choice, i;
	
	for (i = choice; i <= 0; choice++)
	{
		cout << "Press 1 for addition" << endl;
		cout << "Press 2 for subtraction" << endl;
		cout << "Press 3 for multiplication" << endl;
		cout << "Press 4 for division" << endl;
		cout << "Press 5 for modulus" << endl;
		cout << "Press 6 to exit" << endl;
		
		cout << "Enter your choice: ";
		cin >> choice;
		
		if (choice == 6)
		{
			break;
		}
		else if (choice > 6)
		{
			cout << "Enter a valid number: ";
		}
		
		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the second number: ";
		cin >> num2;
		
		switch (choice)
		{
			case 1:
				cout << "Addition = " << num1 + num2 << endl;
				break;
			case 2:
				cout << "Subtraction = " << num1 - num2 << endl;
				break;
			case 3:
				cout << "Multiplication = " << num1 * num2 << endl;
				break;
			case 4:
				if (num2 != 0)
					cout << "Division = " << num1 / num2 << endl;
				else
					cout << "Cannot divide by zero." << endl;
				break;
			case 5:
				cout << "Modulus = " << num1 % num2 << endl;
				break;
			default:
				cout << "Error..." << endl;
		}
	}
	return 0;
}

