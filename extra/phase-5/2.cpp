#include <iostream>
using namespace std;

void factorialRange(int start, int end){

    int i, ans = 1;
    
    if(start < end)
	{
	    for(i = start; i <= end; i++)
		{
	        ans *= i;
	    }
    	cout << "Factorial of numbers in the range is :" << ans;
	}
	else
	{
		cout << "Invalid input: End number must be greater than the start number.";
	}
}

int main() {
    int start, end;
    cout << "Enter the factrial step number: ";
    cin >> start;
    cout << "Enter the factorial number: ";
    cin >> end;

    factorialRange(start, end);

    return 0;
}

