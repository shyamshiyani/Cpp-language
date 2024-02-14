#include<iostream>
using namespace std;

class avg {
    private:
        float x,y,z,avrage;

    public:
        avg()
        {
            cout << "Enter The First Value : " ;
            cin >> this->x ;
            cout << "Enter The Second Value : " ;
            cin >> this->y ;
            cout << "Enter The Third Value : " ;
            cin >> this->z ;
            
            avrage=(this->x + this->y + this->z ) / 3 ;
        }
        void getavg()
        {
            cout << "marks avg is : " << this->avrage<< endl ;
        }
};

int main()
{

    avg num;

    num.getavg();


    return 0;
}
