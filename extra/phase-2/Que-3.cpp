#include <iostream>
using namespace std;

void getsolu(int num)
{
    int answer;
	answer = (2 * (num - 3)) / ((4 * num) - 1);

    cout << answer << endl;
}

int main()
{
    getsolu(3);

    return 0;
}
