#include <iostream>
using namespace std;

int main()
{
    int n, sum, cheak = 0;

    cout << "Enter the number : ";
    cin >> n;

    int num[n],i;

    for ( i = 0; i < n; i++)
    {
        cout << "num_" << i+1 << " = ";
        cin >> num[i];
    }

    for ( i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            sum = sum + num[i];
            ++cheak;
        }
    }

    cout << "sum even numbers : " << sum << endl;
    cout << "Your Avrage of numbers : " << sum / cheak << endl;
}
