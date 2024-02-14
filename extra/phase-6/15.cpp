#include <iostream>
using namespace std;

int main() {
    double cost, govAidPercentage;

    cout << "Enter the total cost of solar panel installation: ";
    cin >> cost;

    cout << "Enter the government aid percentage (in decimal form, e.g., 0.3 for 30%): ";
    cin >> govAidPercentage;

    double remainingCost,govAidAmount ;
    
	govAidAmount = cost * govAidPercentage;

    remainingCost = cost - govAidAmount;

    cout << "Cost breakdown:\n";
    cout << "Total cost: $" << cost << endl;
    cout << "Government aid: $" << govAidAmount << " (" << (govAidPercentage * 100) << "%)\n";
    cout << "Your cost: $" << remainingCost << endl;

    return 0;
}

