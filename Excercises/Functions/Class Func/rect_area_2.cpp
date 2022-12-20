#include<iostream>
using namespace std;

double rect_area(double width, double length);
int main()
{

	double ar1,ar2,ar3,wid1,wid2,wid3,leng1,leng2, leng3;

	cout<<"Enter the width and length of the first rectangle: ";
	cin>>wid1>>leng1;
	cout<<"Enter the width and length of the second rectangle: ";
	cin>>wid2>>leng2;
	cout<<"Enter the width and length of the third rectangle: ";
	cin>>wid3>>leng3;

	ar1 = rect_area(wid1,leng1);
	ar2 = rect_area(wid2,leng2);
	ar3 = rect_area(wid3,leng3);

	cout<<"\nThe area of the first rectangle is "<<ar1;
	cout<<"\nThe area of the second rectangle is "<<ar2;
	cout<<"\nThe area of the third rectangle is "<<ar3<<"\n\n";

	return 0;
}
double rect_area(double width, double length)
{
	double area;
	area = width * length;
	return area;
}
