#include<iostream>
using namespace std;
struct Circle
{
    int radius;
    double circumference, area;
};

int main()
{
    Circle circ1;

    cout<<"Enter the radius -> ";
    cin>>circ1.radius;
    cout<<endl;

    circ1.area = 22.0/7 * circ1.radius * circ1.radius;
    circ1.circumference = 22.0/7 * (circ1.radius + circ1.radius);

    cout<<"The area of the circle is: "<<circ1.area
        <<"\nThe circumference of the circle is: "<<circ1.circumference<<endl;

    return 0;
}
