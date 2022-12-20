#include<iostream>
using namespace std;
double rect_area(double width, double length); /* Function prototype */
double rect_perimeter(double width, double length);
int main()
{
	double ar,wid,hig, perim;

	cout<<"Enter the width and length of the rectangle: ";
	cin>>wid>>hig;

	ar=rect_area(wid,hig); /*Function call */
	perim = rect_perimeter(wid, hig);

	cout<<"\nThe area of the rectangle is "<<ar<<"\n\n"
	<<"The perimeter of the rectangle is "<<perim<<endl;
	return 0;

}
double rect_area(double width, double length) /*Function header / heading */
{
	double area;
	area = width * length;	// Function body & function definition
	return area;
}
double rect_perimeter(double width, double length)
{
    double perimeter;
    perimeter = 2*(width + length);
    return perimeter;
}
