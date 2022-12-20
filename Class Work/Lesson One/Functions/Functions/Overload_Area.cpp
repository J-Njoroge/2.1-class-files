#include<iostream>
using namespace std;
double area(double rad);
double area(double width,double length);
const double PI = 22.0/7;
int main() 
{
	double radius,wid,len,circ_area,rect_area;

	cout<<"Enter the radius of the circle:> ";
	cin>>radius;
	cout<<"\nEnter the width and length of the rectangle: ";
	cin>>wid>>len;

	circ_area = area(radius);
	rect_area = area(wid,len);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout<<"\nThe area of the circle is "<<circ_area;
	cout<<"\nThe area of the rectangle is "<<rect_area;

	cout<<"\n\n";
	return 0;
}

double area (double rad)
{
	double ar;
	ar = PI * rad * rad;
	return ar;
}

double area (double width, double length)
{
	double ar;
	ar = width * length;
	return ar;
}
