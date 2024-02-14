#include<iostream>
using namespace std;

class Vehicle {
private:
    string model;
    double speed;

public:
    Vehicle(string mdl, double spd) : model(mdl), speed(spd) {}



    string getModel() { return model; }
    double getSpeed() { return speed; }


    void setModel(string mdl) { model = mdl; }
    void setSpeed(double spd) { speed = spd; }


    double calculateTime(double distance) {
        return distance / speed;
    }
};

class Car : public Vehicle {
public:

    Car(string mdl, double spd) : Vehicle(mdl, spd) {}


    double calculateTime(double distance) {
        double adjustedSpeed = getSpeed() * 0.9;
        return distance / adjustedSpeed;
    }
};

class Bike : public Vehicle {
public:

    Bike(string mdl, double spd) : Vehicle(mdl, spd) {}


    double calculateTime(double distance) {
        double adjustedSpeed = getSpeed() * 1.1;
        return distance / adjustedSpeed;
    }
};

int main() {
    Car car("Toyota Camry", 60); 
    Bike bike("Honda CB500X", 45); 

    double distance = 100;

    double carTime = car.calculateTime(distance);
    cout << "Time taken by car to travel " << distance << " miles: " << carTime << " hours" << endl;

    double bikeTime = bike.calculateTime(distance);
    cout << "Time taken by bike to travel " << distance << " miles: " << bikeTime << " hours" << endl;

    return 0;
}

