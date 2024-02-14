#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char input[100],i,j;

    cout << "Enter a word: ";
    cin >> input;

    char shiftKeys[] = "()_+`~!@#{}|:\"<>?$%^&*";
    int numShiftKeys = strlen(shiftKeys);

    bool found = false;

    for (i = 0; input[i] != '\0'; i++) 
	{
        for (j = 0; j < numShiftKeys; j++) 
		{
            if (input[i] == shiftKeys[j]) 
			{
                  cout << "The word contains a character between shift keys." << endl;
            }
        }
        if (found)
		{
            break;
        }
    }

    if (found) {
      
    } else {
        cout << "The word does not contain any character between shift keys." << endl;
    }

    return 0;
}

