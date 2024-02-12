#include<iostream>
using namespace std;

class Message{
	
	private:
	string name;
	
	
	public:
		Message(string msg )
		{
			this->name=msg;
		}
	void print()
	{
		cout<<this->name<<endl;
	}
	void print(string message)
	{
		cout<<this->name<<endl<<message<<endl;
	}
};
int main()
{
	Message message("hello world");

	message.print("additional message");
	
	
	return 0;	
}
