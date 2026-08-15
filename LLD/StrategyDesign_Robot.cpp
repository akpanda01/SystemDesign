#include <iostream>
using namespace std;

//Strategy Design Pattern - uses composition to change the behavior of an object at runtime. In this example, we have a Robot class that can walk in different ways (normal, fast, slow) based on the strategy it is given.

//Strategy interface
class WalkingStrategy{
    public:
    virtual void walk() = 0; //pure virtual function
    virtual ~WalkingStrategy() = default; //virtual destructor

};

//Concrete Strategy 1
class NormalWalk : public WalkingStrategy{
    public:
    void walk() override{
        cout << "Walking normal." << endl;
    }
};

//Concrete Strategy 2
class FastWalk : public WalkingStrategy{
    public:
    void walk() override{
        cout << "Walking fast." << endl;
    }
};

//Concrete Strategy 3
class SlowWalk : public WalkingStrategy{
    public:
    void walk() override{
        cout << "Walking slow." << endl;
    }
};

//Robot class that uses the strategy
class Robot{
    private:
    WalkingStrategy* strategy; //pointer to the strategy interface  
    public:
    Robot(WalkingStrategy* strategy) : strategy(strategy) {} //constructor to set the strategy
    void walk(){
        strategy->walk(); //delegating the walk behavior to the strategy
    }   
};

int main(){
    //Creating different strategies
    WalkingStrategy* normalWalk = new NormalWalk();
    WalkingStrategy* fastWalk = new FastWalk();
    WalkingStrategy* slowWalk = new SlowWalk();

    //Creating a robot with normal walking strategy
    Robot robot(normalWalk);
    robot.walk(); //Output: Walking normal.

    //Changing the strategy to fast walking
    robot = Robot(fastWalk);
    robot.walk(); //Output: Walking fast.

    //Changing the strategy to slow walking
    robot = Robot(slowWalk);
    robot.walk(); //Output: Walking slow.

    //Cleaning up
    delete normalWalk;
    delete fastWalk;
    delete slowWalk;

    return 0;
}