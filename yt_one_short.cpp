
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    int price;
    int seat;
    string type;

    // Default constructor
    Car() {
        name = "";
        price = 0;
        seat = 0;
        type = "";
    }

    // Parameterized constructor
    Car(int p, string n, string t, int s) {
        name = n;
        price = p;
        seat = s;
        type = t;
    }
};

void print(Car &c) {
    cout << c.name << " "
         << c.price << " "
         << c.seat << " "
         << c.type << endl;
}

void change(Car &c) {
    c.name = "Audi A8";
}

int main() {
    Car c1;
    c1.name = "Mercedes";
    c1.price = 25000000;
    c1.seat = 4;
    c1.type = "Maybach";

    Car c2;
    c2.name = "Honda City";
    c2.price = 150000;
    c2.seat = 4;
    c2.type = "Sedan";

    Car c3;
    c3.name = "Maruti Suzuki";
    c3.price = 700000;
    c3.seat = 4;
    c3.type = "Dzire";

    print(c1);

    change(c1);

    print(c1);

    return 0;
}
