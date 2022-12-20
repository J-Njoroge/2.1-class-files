#include <iostream>
using namespace std;

class Rectangle // base class
{
protected:
    double width;
    double length;

public:
    // Constructors
    Rectangle();
    Rectangle(double, double);
    // Destructor
    ~Rectangle();
    // Overloading
    double get_area() { return width * length; }
    void the_width(double);
    void the_length(double);
};

// Constructors
Rectangle::Rectangle() {
    width = 1;
    length = 1;
}

Rectangle::Rectangle(double wid, double leng) {
    width = wid;
    length = leng;
}

// Destructor
Rectangle::~Rectangle() {
    cout << "Destructor called" << endl;
}

// Overloading
void Rectangle::the_width(double wid) {
    width = wid;
}

void Rectangle::the_length(double leng) {
    length = leng;
}

// Derived class with inheritance
class Square: public Rectangle
{
  public:
    // Constructors
    Square();
    Square(double);
    // Overriding
    void the_width(double);
    void the_length(double);
};

// Constructors
Square::Square() {
    width = 1;
    length = 1;
}

Square::Square(double size) {
    width = size;
    length = size;
}

// Overriding
void Square::the_width(double size) {
    width = size;
    length = size;
}

void Square::the_length(double size) {
    width = size;
    length = size;
}

int main() {
    // Encapsulation
    Rectangle rect(3, 4);
    Square sq(3);
    cout << "Rectangle area: " << rect.get_area() << endl;
    cout << "Square area: " << sq.get_area() << endl;

    return 0;
}
