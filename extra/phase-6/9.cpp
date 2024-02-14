#include <iostream>
using namespace std;

float calculateGST(float price, float rate) {
    return (price * rate) / 100;
}

float calculateTotalPrice(float price, float gst) {
    return price + gst;
}

int main() {
    float price;
    int category;
    
    cout << "Enter the price of the item: ";
    cin >> price;
    
    cout << "Select GST category:" << endl;
    cout << "1. 5%" << endl;
    cout << "2. 12%" << endl;
    cout << "3. 18%" << endl;
    cout << "4. 28%" << endl;
    cout << "Enter the category number: ";
    cin >> category;
    
    float gst;
    
    switch (category) {
        case 1:
            gst = calculateGST(price, 5);
            break;
        case 2:
            gst = calculateGST(price, 12);
            break;
        case 3:
            gst = calculateGST(price, 18);
            break;
        case 4:
            gst = calculateGST(price, 28);
            break;
        default:
            cout << "Invalid category selected!" << endl;
            return 1;
    }
    
    float totalPrice = calculateTotalPrice(price, gst);
    
    cout << "Price: Rs. " << price << endl;
    cout << "GST: Rs. " << gst << endl;
    cout << "Total Price (including GST): Rs. " << totalPrice << endl;
    
    return 0;
}

