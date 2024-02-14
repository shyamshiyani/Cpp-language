#include <iostream>
using namespace std;

int main() {
    int televisionWidth = 32;
    int televisionHeight = 52;
    int marginSize = 10;

    int requiredWidth = televisionWidth + 2 * marginSize;
    int requiredHeight = televisionHeight + 2 * marginSize;

    cout << "needd margin all side " << marginSize <<" inch." <<endl;
    cout << "the minimum wall area required is : " << requiredWidth << " inches wide by " << requiredHeight << " inches tall." << endl;

    return 0;
}

