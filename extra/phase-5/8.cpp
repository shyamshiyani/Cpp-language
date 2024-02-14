#include <iostream>
using namespace std;

void convertSecondsToTime(int seconds){
    int hours, minutes, secs;
    
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    secs = seconds % 60;

    cout << " time in in HH:MM:SS formate"<<endl<<" " << hours << " : " << minutes << " : " << secs << endl;
}

void convertTimeToSeconds(int hours, int minutes, int seconds){
    int totalSeconds;
    
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    
    cout << "Total time in seconds: " << totalSeconds << endl;
}

int main()
{
    int choice;
    
	{
        cout << "1. Convert seconds to HH:MM:SS" << endl;
        cout << "2. Convert time to total seconds" << endl;
        cout << "3. Exit" << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;
        
        while (choice != 3)
		{
		
        
        if(choice==0||choice==3)
        {
        	cout<<"Exiting from this window...";
		}
		else
		{
			

        switch (choice) 
		{
            case 1:
			{
                int seconds;
                cout << "Enter the number of seconds: ";
                cin >> seconds;
                
                convertSecondsToTime(seconds);
                break;
            }
            case 2:
			{
                int hours, minutes, seconds;
                cout << "Enter the time in hours: ";
                cin >> hours;
                cout << "Enter the time in minutes: ";
                cin >> minutes;
                cout << "Enter the time in seconds: ";
                cin >> seconds;
                
                convertTimeToSeconds(hours, minutes, seconds);
                break;
            }
           
            default:
			{
                cout << "Invalid choice. Please try again." << endl;
            }
        }
        
		}
		}
    

    return 0;

	}	
}

