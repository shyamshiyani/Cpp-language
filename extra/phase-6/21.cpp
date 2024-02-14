#include <iostream>

class Alphabet {
private:
    int ascii[23]; 

public:
    Alphabet()
	{
		char c;
        int idx = 0;
        for (c = 'A'; c <= 'Z'; ++c)
		{
            if (c != 'D' && c != 'W' && c != 'Z') 
			{ 
                ascii[idx++] = static_cast<int>(c);
            }
        }
    }

    int* getAscii() {
        return ascii;
    }
};

int main() {
    
    Alphabet alpha;

   
    int* asciiArr = alpha.getAscii();

    
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += asciiArr[i];
    }

  
    if (sum % 2 == 0) {
        std::cout << "Sum of ASCII values is even: " << sum << std::endl;
    } else {
        std::cout << "Sum of ASCII values is odd: " << sum << std::endl;
    }

    return 0;
}

