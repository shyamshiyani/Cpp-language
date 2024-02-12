#include<iostream>
using namespace std;

class billing {
public:
    float item_quantity, item_price, item_discount, total_price, total_discount;
    string item_number, item_name;

public:
    billing() {
        cout << endl << "item name:";
        cin >> this->item_name;
        cout << "item price:";
        cin >> this->item_price;
        cout << "item number:";
        cin >> this->item_number;
        cout << "item quantity:";
        cin >> this->item_quantity;
        cout << "item discount:";
        cin >> this->item_discount;
        calculateTotal(); 
    }

    void getdata() {
        cout << endl << "item name:" << this->item_name << endl;
        cout << "item number:" << this->item_number << endl;
        cout << "item quantity:" << this->item_quantity << endl;
        cout << "item price:" << this->item_price << endl;
        cout << "item discount:" << this->item_discount << endl;
    }

    void calculateTotal() {
        total_price = item_quantity * item_price;
        total_discount = total_price - (total_price * item_discount / 100);
    }
};

const string email = "shyam@123";
const string password = "123456789";

int main() {
    int n;
    string pas, id;
    cout << "Enter the user id:";
    cin >> id;
    cout << "Enter the user password:";
    cin >> pas;

    if (id == email && pas == password) {
        cout << "Enter the number of items:";
        cin >> n;

        billing sm[n];

        float totalPrice = 0;

        for (int i = 0; i < n; i++) {
            sm[i].getdata();
            totalPrice=totalPrice+sm[i].total_discount;
        }

        cout << "Total price for all items: " << totalPrice << endl;
    } else {
        cout << "Please enter valid information...";
    }

    return 0;
}
