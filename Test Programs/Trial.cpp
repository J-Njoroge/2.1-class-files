/*Write a (college) C++ program using the concept of classes to illustrate the following
concept in Object Oriented programming. Indicate with comments where each of
these concepts/techniques is used in your program.
a) Inheritance.
b) Overloading.
c) Overriding.
d) Encapsulation.
e) Constructors (Including default constructors)
f) Destructor. */

#include <iostream>
using namespace std;

//Class used to illustrate Object-Oriented Programming
class OOP {

private:
  //Encapsulation used here to hide private data from user
    int data;

public:
  //Constructors used to initialize class objects
    OOP();
    OOP(int);
  //Destructor used to deallocate memory when object goes out of scope
    ~OOP();
  //Overloading used here to have multiple functions with same name
    int getData(int);
    double getData(double);
  //Overriding used here to redefine getData in derived class
    virtual int getData();
};

//Default constructor
OOP::OOP() {
    data = 0;
}

//Parameterized constructor
OOP::OOP(int d) {
    data = d;
}

//Destructor
OOP::~OOP() {
    cout << "Object destroyed" << endl;
}

//Overloaded getData function to return int
int OOP::getData(int x) {
    return x;
}

//Overloaded getData function to return double
double OOP::getData(double x) {
    return x;
}

//Overridden getData function to return int
int OOP::getData() {
    return data;
}

//Class used to illustrate Inheritance (derived from OOP)
class Inheritance : public OOP {

private:
    int data;

public:
    Inheritance();
    Inheritance(int, int);
    ~Inheritance();
    //Overridden getData function to return int
    int getData();
};

//Default constructor
Inheritance::Inheritance() : OOP() {
    data = 0;
}

//Parameterized constructor
Inheritance::Inheritance(int d, int d2) : OOP(d) {
    data = d2;
}

//Destructor
Inheritance::~Inheritance() {
    cout << "Object destroyed" << endl;
}

//Overridden getData function to return int
int Inheritance::getData() {
    return data;
}

int main() {
    OOP obj1;
    OOP obj2(2);
    Inheritance obj3;
    Inheritance obj4(4, 5);

    cout << obj1.getData(1) << endl;
    cout << obj2.getData(2.2) << endl;
    cout << obj3.getData() << endl;
    cout << obj4.getData() << endl;
    return 0;
}
