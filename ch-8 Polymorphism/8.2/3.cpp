#include<iostream>
using namespace std;

class number {
	private:
		int a;
		  
	public:
		void setData(int a)
		{
			this->a = a ;
		}
		
		bool operator==(number b)
		{
			return this->a == b.a;
		}
		
		void getDataTrue() {
			cout << " both value is Equal..." << endl ;
		}
		
		void getDataFalse() {
			cout << "both value Not Equal..." << endl ;
		}
};

int main()
{
	number a, b, c;
	
	a.setData(21);
	b.setData(21);
	
	if (a == b)
	{
		c.getDataTrue();
	}
	else
	{
		c.getDataFalse();
	}
	
	return 0;
}

