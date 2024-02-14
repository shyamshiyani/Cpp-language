#include <iostream>
#include <string>
using namespace std;

class Hotel {
private:
    string name,type,country,ratingType,website;
    int staffSize,roomSize,establishYear;

public:
    string getName() const {
        return name;
    }

    string getType() const {
        return type;
    }

    int getStaffSize() const {
        return staffSize;
    }

    int getRoomSize() const {
        return roomSize;
    }

    int getEstablishYear() const {
        return establishYear;
    }

    string getCountry() const {
        return country;
    }

    string getRatingType() const {
        return ratingType;
    }

    string getWebsite() const {
        return website;
    }


    void setName(const string& n) {
        name = n;
    }

    void setType(const string& t) {
        type = t;
    }

    void setStaffSize(int s) {
        staffSize = s;
    }

    void setRoomSize(int s) {
        roomSize = s;
    }

    void setEstablishYear(int y) {
        establishYear = y;
    }

    void setCountry(const string& c) {
        country = c;
    }

    void setRatingType(const string& r) {
        ratingType = r;
    }

    void setWebsite(const string& w) {
        website = w;
    }
};

int main() {
    Hotel myHotel;


    myHotel.setName("Grand Hotel");
    myHotel.setType("Luxury");
    myHotel.setStaffSize(100);
    myHotel.setRoomSize(200);
    myHotel.setEstablishYear(1990);
    myHotel.setCountry("United States");
    myHotel.setRatingType("5 stars");
    myHotel.setWebsite("http://www.grandhotel.com");


    cout << "Name: " << myHotel.getName() << endl;
    cout << "Type: " << myHotel.getType() << endl;
    cout << "Staff Size: " << myHotel.getStaffSize() << endl;
    cout << "Room Size: " << myHotel.getRoomSize() << endl;
    cout << "Established Year: " << myHotel.getEstablishYear() << endl;
    cout << "Country: " << myHotel.getCountry() << endl;
    cout << "Rating Type: " << myHotel.getRatingType() << endl;
    cout << "Website: " << myHotel.getWebsite() << endl;

    return 0;
}

