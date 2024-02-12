#include<iostream>
using namespace std;

class Animal {
private:
    string name, type, speed;
    int age;

public:
    void set_values(string name, int age, string type, string speed) {
        this->name=name;
        this->age=age;
        this->type=type;
        this->speed=speed;
    }

    string get_name() const {
        return name;
    }

    int get_age() const {
        return age;
    }

    string get_type() const {
        return type;
    }

    string get_speed() const {
        return speed;
    }
};

class Zebra : public Animal {
public:
    void animal_1() {
        cout<<"Name:"<<get_name()<< endl;
        cout<<"Age:"<<get_age()<< endl;
        cout<<"Type:"<<get_type()<< endl;
        cout<<"Speed:"<<get_speed()<< endl;
    }
};

class Dolphin : public Animal {
public:
    void animal_1() {
        cout<<"Name:"<< get_name()<<endl;
        cout<<"Age:"<< get_age()<<endl;
        cout<<"Type:"<< get_type()<<endl;
        cout<<"Speed:"<< get_speed()<<endl;
    }
};

int main() {
    Zebra z;
    z.set_values("Zebra", 25, "Grevy's zebra, Mountain zebra, Plains zebra", "35 miles per hour (56 kilometers per hour)");
    z.animal_1();

    Dolphin d;
    d.set_values("Dolphin", 60, "Orca, Amazon river dolphin, Bottlenose dolphin, etc...", "56 kilometers per hour to 60 kilometers per hour");
    d.animal_1();

    return 0;
}

