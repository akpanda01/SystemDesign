#include<iostream>
using namespace std;

//Function Overloading - same function name with different parameters
class addition {
    public:
    int add(int a, int b){
        return a + b;
    }

    double add(double a, double b){
        return a + b;  
    }
};

//Function Overriding - same function name and parameters in base and derived class
class Car {
public:
    virtual void start() {
        cout << "Car started" << endl;
    }
};

class SportsCar : public Car {
public:
    void start() override {
        cout << "Sports car started" << endl;
    }
};


int main(){

    cout<<"Static Polymorpism - Function Overloading"<<endl;
    addition a;
    cout << "Sum of 2 integers: " << a.add(5, 10) << endl;
    cout << "Sum of 2 doubles: " << a.add(5.5, 10.5) << endl;

    cout<<endl;

    cout<<"Dynamic Polymorpism - Function Overriding"<<endl;
    Car* car = new SportsCar(); //we are using a pointer of base class to point to derived class object
    car->start(); //This will call the start() function of SportsCar class due to polymorphism
    return 0;
}

