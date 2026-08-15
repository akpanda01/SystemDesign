#include <iostream>
using namespace std;

// Parent class - common functions
class Car {
protected:
    int speed = 0;
public:
    void start() {
        cout << "Car started" << endl;
    }

    void stop() {
        cout << "Car stopped" << endl;
    }

    void accelerate() {
        speed += 20;
        cout << "Car accelerated" << endl;
    }
    void brake() {
        speed = 0;
        cout << "Car braked" << endl;
    }
};

// Child class 1
class ManualCar : public Car {
public:
    void changeGear() {
        cout << "Manual car gear changed" << endl;
    }
};

// Child class 2
class AutomaticCar : public Car {
public:
    void chargeBattery() {
        speed = 60;  // Accessing protected member
        cout << "Battery charged" << endl;
    }
};

int main() {

    ManualCar m;
    m.start();
    m.accelerate();
    m.changeGear();
    m.brake();
    m.stop();

    cout << endl;

    AutomaticCar a;
    a.start();
    a.accelerate();
    a.chargeBattery();
    a.stop();

    return 0;
}