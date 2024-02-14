#include <iostream>
#include <string> 
using namespace std;

string Reverse_String(string str)
{
    string rev = str;
    for (int i = 0; i < str.size() / 2 ; i++)
    {
        char temp = rev[i];
        rev[i] = rev[str.size() - i - 1];
        rev[str.size() - i - 1] = temp;
    }
    return rev;
}

int main()
{
    int sum = 0,i; 
    string shyam;

    cout << "Enter a string: ";
    cin >> shyam;

    if (shyam.length() > 3 && shyam.length() < 9) 
	{
        cout << "Reversed String: " << Reverse_String(shyam) << endl;
    }
	 else 
	{
        for (i = 0; i < shyam.size(); i++)
        {
            sum += (int)shyam[i];
        }
        cout << "Sum of all Characters;s ascii values: " << sum << endl;
    }

    return 0;
}

