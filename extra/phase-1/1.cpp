#include <iostream>
using namespace std;

class Number{
private:
    float num;

public:
    Number()
    {
        cout << "Enter Number: ";
        cin >> this->num;
    }
    void getdata()
    {
    	float total;
    	
    	total= this->num * this->num * this->num;
        cout << "Your Cube  is : " << total<< endl;
    }
};

int main()
{
    Number n;

    n.getdata();

    return 0;
}
