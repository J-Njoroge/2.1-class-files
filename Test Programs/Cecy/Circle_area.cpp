#include<iostream>
using namespace std;
class Circle
{
private:
    int radius;
    double circumference, area;
public:
    Circle(double rad);//Constructor
    Circle();//Default constructor
    void input();
    void compute();
    void output();
};
int main()
{
    Circle circ1(7), circ2;

    cout<<"Enter the radius:"
        <<"\n-----------------\n";
        /*circ1.input();*/

        circ1.compute();
        circ2.compute();
    cout<<"\nResults for computation of circle one is:"
        <<"\n-----------------------\n\n";
        circ1.output();

    cout<<"\nResults for computation of circle two is:"
        <<"\n-----------------------\n\n";
        circ2.output();

    cout<<endl;
    return 0;
}
Circle::Circle(double rad)//Constructor
{
    radius = rad;
}
Circle::Circle()//Default Constructor
{
    radius = 14;
}
void Circle::input()
{
    cout<<"Enter the radius -> ";
    cin>>radius;
}
void Circle::compute()
{
    area = 22.0/7 * radius * radius;
    circumference = 22.0/7 * (radius + radius);
}
void Circle::output()
{
    cout<<"The area of the circle is: "<<area
        <<"\nThe circumference of the circle is: "<<circumference;
}
