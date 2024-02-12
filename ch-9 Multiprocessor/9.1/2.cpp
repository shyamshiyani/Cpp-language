#include<iostream>
using namespace std;

class Distance{
    private:
        int FEET, INCH;
    public:
        void setdata(int d_1, int d_2)
        {
            this->FEET = d_1;
            this->INCH = d_2;
        }
        
        Distance operator+(Distance total)
        {
            Distance Total;
            
            Total.FEET = this->FEET + total.FEET;
            Total.INCH = this->INCH + total.INCH;
            
            Total.FEET += Total.INCH / 12;
            Total.INCH %= 12;
            
            return Total;
        }
        
        void getdata()
        {
            cout << "FEET:-" << FEET << endl << "INCH:-" << INCH << endl;
        }       
};
int main()
{
    Distance d1, d2, d3;
    
    d1.setdata(8, 16);
    d2.setdata(4, 14);
    
    d3 = d1 + d2;
    
    d3.getdata();
    
    return 0;   
}
