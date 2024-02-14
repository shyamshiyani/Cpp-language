#include <iostream>
using namespace std;

int calculateVelocity(int distance, int time) {
    return distance / time;
}

int main() {
    int distance = 1933, speed1 = 40, speed2 = 46, velocity1, velocity2;

    velocity1 = calculateVelocity(distance, speed1);
    velocity2 = calculateVelocity(distance, speed2);

    cout << "Velocity of vehicle 1 is: " << velocity1 << endl;
    cout << "Velocity of vehicle 2 is: " << velocity2;

    return 0;
}

