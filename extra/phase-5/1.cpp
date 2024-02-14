#include<iostream>
using namespace std;
 
int addition(int a,int b)
{
    return a + b;
}
 
int subtraction(int a,int b)
{
    return a - b;
}

int multiplication(int a,int b)
{
    return a * b;
}

int division(int a,int b)
{
    return a / b;
}



int main()
{
    int num1, num2, choice = 1, i; 
    
    while(choice != 0) 
    { 
        cout << "Press 1 for addition" << endl;
        cout << "Press 2 for subtraction" << endl;
        cout << "Press 3 for multiplication" << endl;
        cout << "Press 4 for division" << endl;
        cout << "Press 5 for modulus" << endl;
        cout << "Press 0 to exit" << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;
        	
        if(choice == 0){
            cout << "bye bye..." << endl;
            break;
        }
        else if(choice > 5)
        {
            cout << "Enter a valid choice..." << endl;
            continue; 
        }
		
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        
        switch(choice)
        {
            case 1 :
                cout << "Addition of num1 and num2 is = " << addition(num1, num2) << endl;
                break;
            case 2 :
                cout << "Subtraction of num1 and num2 is = " << subtraction(num1, num2) << endl;
                break;
            case 3 :
                cout << "Multiplication of num1 and num2 is = " << multiplication(num1, num2) << endl;
                break;
            case 4 :
                if(num2 != 0) 
                    cout << "Division of num1 and num2 is = " << division(num1, num2) << endl;
                else
                    cout << "Cannot divide by zero." << endl;
                break;
                cout << "Invalid input..." << endl;
        }
    }
    return 0;
}

