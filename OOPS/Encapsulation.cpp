#include<iostream>
using namespace std;

class Student {
private:
    int marks;   // Hidden data - marks is private, so it cannot be accessed directly.
    string name;

public:

    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    }

    void setMarks(int m) { // used to set the value.
        marks = m;
    }
    int getMarks() { // used to get the value.
        return marks;
    }
};

int main() {
    Student s;

    s.setMarks(90); // Setting value
    s.setName("Nikki");

    cout << s.getName() << endl; // Getting value
    cout << s.getMarks() << endl; // Getting value

    s.setMarks(93); // Setting value
    cout << s.getMarks() << endl; // Getting value

    // Student s;
    // s.marks = 95;  Error because marks is private

    return 0;
}