#include<iostream>
using namespace std;

class Mobile {
public:
    string brand;
    string model;
    float price;

    void showDetails() {
        cout << "Brand: " << brand << endl << ", Model: " << endl << model << endl << ", Price: Rs" << endl << price << endl;
    }
};

int main() {
    Mobile m1;
    m1.brand = "Infinix";
    m1.model = "Note 40X";
    m1.price = 125999;

    m1.showDetails();
    return 0;
}
