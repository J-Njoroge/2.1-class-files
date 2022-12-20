#include <iostream>
using namespace std;

//Base class
class Rectangle {
    //Encapsulation
    protected:
        int length;
        int breadth;

    public:
        //Default constructor
        Rectangle()
        {
            length = 0;
            breadth = 0;
        }

        //Overloaded constructor
        Rectangle(int l, int b)
        {
            length = l;
            breadth = b;
        }

        //Destructor
        ~Rectangle()
        {
            cout<<"Destructor called"<<endl;
        }

        //Member function for area
        int area()
        {
            return length*breadth;
        }
};

//Derived class
class Cuboid:public Rectangle {
    //Encapsulation
    private:
        int height;

    public:
        //Default constructor
        Cuboid()
        {
            height = 0;
        }

        //Overloaded constructor
        Cuboid(int l, int b, int h):Rectangle(l,b)
        {
            height = h;
        }

        //Destructor
        ~Cuboid()
        {
            cout<<"Destructor called"<<endl;
        }

        //Overriding area function
        int area()
        {
            return 2*(length*breadth + breadth*height + height*length);
        }
};

int main()
{
    //Object of class Rectangle
    Rectangle r(10,20);
    cout<<"Area of Rectangle: "<<r.area()<<endl;

    //Object of class Cuboid
    Cuboid c(10,20,30);
    cout<<"Area of Cuboid: "<<c.area()<<endl;

    return 0;
}
