#include<iostream>
using namespace std;
double circ_area(double radius);
double circumference(double radius);
int main ()
{
    double ar, circum, rad;

    cout<<"Enter the radius -> ";
    cin>>rad;
    cout<<endl;

    ar = circ_area(rad);
    circum = circumference(rad);

    cout<<"The area of the circle is "<<ar<<endl
    <<"The circumference of the circle is "<<circum<<endl;
    return 0;
}
double circ_area(double radius)
{
    double area;
    area = 22.0/7 * radius;
    return area;
}
double circumference(double radius)
{
    double circumference;
    circumference = 22.0/7 * radius * radius;
    return circumference;
}

