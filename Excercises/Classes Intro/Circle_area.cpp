#include<iostream>
using namespace std;
class Circle
{
private:
    int radius;
    double circumference, area;
public:
    void input();
    void compute();
    void output();
};

int main()
{
    Circle circ1;

    cout<<"Enter the radius:"
        <<"\n-----------------\n";
        circ1.input();

        circ1.compute();
    cout<<"\nResults for computation:"
        <<"\n-----------------------\n\n";
        circ1.output();
        cout<<endl;

    return 0;
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
