#include <iostream>
using namespace std;

int main()
{
    float treeDist = 13, ropeDist = 26, totalDist;
	
    totalDist = (ropeDist * ropeDist - treeDist * treeDist);
	
    cout << "The distance between the tree and the rope is: " << totalDist << endl;
	
    return 0;
}

