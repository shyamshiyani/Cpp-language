#include <iostream>
#include <string>
using namespace std;

class StringComparator {
private:
    string str;

public:
    StringComparator(const string& s) : str(s) {}

    int isEqual(const StringComparator& other) {
        if (str == other.str) {
            return 1;
        } else {
            return 0; 
        }
    }
};

int main() {
  
    StringComparator str1("hello");
    StringComparator str2("hello");
    StringComparator str3("world");

    cout << "str1 equals str2: " << (str1.isEqual(str2)) << endl;
    cout << "str1 equals str3: " << (str1.isEqual(str3)) << endl;

    return 0;
}

