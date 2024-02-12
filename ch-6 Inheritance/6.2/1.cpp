#include<iostream>
using namespace std ;

class RBI{
	private:
		int amount,SBI_rate,BOB_rate, ICICI_rate;
	public:
		int SBI_amount()
		{
			cout << "Enter the amount:";
        	cin >> this->amount;
			cout << "Enter rate of interests on SBI bank amount:";
        	cin >> this->SBI_rate;
			this->amount = this->amount + ( (this->amount * this->SBI_rate ) /100) ;
			return amount ;
		}
		int BOB_amount()
		{
			cout << "Enter the amount:";
        	cin >> this->amount;
			cout << "Enter rate of interests on BOB bank amount:";
        	cin >> this->BOB_rate;
			this->amount = this->amount + ( (this->amount * this->BOB_rate ) /100) ;
			return amount ;
		}
		int ICICI_amount()
		{
			cout << "Enter the amount:";
        	cin >> this->amount;
			cout << "Enter rate of interests on ICICI bank amount:";
        	cin >> this->ICICI_rate;
			this->amount = this->amount + ( (this->amount * this->ICICI_rate ) /100) ;
			return amount ;
		}
};

class SBI : public RBI {
	public:
		SBI()
		{
			cout<<"FINAL AMOUNT AFTER SBI_RATE_OF_INTREST:"<<SBI_amount()<<endl;
		}
};
class BOB : public RBI {
	public:
		BOB()
		{
			cout<<"FINAL AMOUNT AFTER BOB_RATE_OF_INTREST:"<<BOB_amount()<<endl;
		}
};
class ICICI : public RBI {
	public:
		ICICI()
		{
			cout<<"FINAL AMOUNT AFTER ICICI_RATE_OF_INTREST:"<<ICICI_amount()<<endl;
		}
};

int main()
{
	SBI a;
	BOB b;
	ICICI c;
	return 0;
}

