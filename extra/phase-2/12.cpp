#include<iostream>
using namespace std;

void HH_MM_SS(int seconds)
{
    int hour=0;
    int minute=0;

    while (seconds >= 60 ) 
    {
        seconds -= 60;
        minute++;
    }
    
    while (minute >= 60 )
    {
        minute -= 60;
        hour++;
    }

    cout << "-Hours : " << hour << endl <<"-Minutes : " << minute << endl << "-Seconds : " << seconds << endl ;
}

int main ()
{
	int time;
	cout<<"Enter the total time in second:";
	cin>>time;
    HH_MM_SS(time);

    return 0;
}
