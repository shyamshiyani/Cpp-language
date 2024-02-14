#include <iostream>

using namespace std;

int main() {
    char c[10];

    cout << "Enter a string: ";
    cin>>c,10;

    int i;
    int asciiValue; 
    
    cout<<"list of ascii values:"<<endl;
    for(i = 0; c[i] != '\0'; i++) {
        asciiValue= (int)c[i];
        cout <<" "<<c[i]<<" : "<< asciiValue<<endl;
    }

    return 0; 
}

