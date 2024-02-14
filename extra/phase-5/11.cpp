#include <iostream>
using namespace std;

int determineLargestArmy(int indianSoldiers, int usSoldiers, int chineseSoldiers)
{
    if (indianSoldiers > usSoldiers)
    {
        if (indianSoldiers > chineseSoldiers)
        {
            cout << "Indian army has the largest number of soldiers." << endl;
        }
        else
        {
            cout << "Chinese army has the largest number of soldiers." << endl;
        }
    }
    else if (usSoldiers > chineseSoldiers)
    {
        cout << "US army has the largest number of soldiers." << endl;
    }
    else
    {
        cout << "Chinese army has the largest number of soldiers." << endl;
    }
    return 0;
}

int main() {
    int indianSoldiers, usSoldiers, chineseSoldiers;

    cout << "Enter the number of Indian soldiers: ";
    cin >> indianSoldiers;
    cout << "Enter the number of US soldiers: ";
    cin >> usSoldiers;
    cout << "Enter the number of Chinese soldiers: ";
    cin >> chineseSoldiers;

    determineLargestArmy(indianSoldiers, usSoldiers, chineseSoldiers);
    return 0;
}

