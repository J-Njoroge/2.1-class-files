#include<iostream>
using namespace std;

class my_circle
{
private:
    double radius, area, circumference;

public:
    void calculate(), input(), output();
};

int main()
{
    my_circle circle;

    circle.input();
    circle.output();
    circle.calculate();

    return 0;
}

void my_circle::input()
{
    cout<<"Enter the radius -> ";
    cin>>radius;
}
void my_circle::output()
{
    cout<<"The area of the circle is: "<<area<<endl<<"The circumference is: "<<circumference<<endl;
}
void my_circle::calculate()
{
    area = 22.0/7 * radius * radius;
    circumference = 22.0/7 * radius * 2;
}
