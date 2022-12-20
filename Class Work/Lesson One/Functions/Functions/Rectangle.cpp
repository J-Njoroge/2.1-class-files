#include<iostream>
using namespace std;
double rect_area(double width, double length); /* Function prototype */
int my_number = 15;
int main()
{
	double ar,wid,leng;

	cout<<"Enter the width and length of the rectangle: ";
	cin>>wid>>leng;

	ar = rect_area(wid,leng); /*Function call */

	cout<<"\nThe area of the rectangle is "<<ar<<"\n\n";
	return 0;
}
double rect_area(double width, double length) /*Function header / heading */
{
	double area;
	my_number = my_number + 10;
	cout<<"\nThe value is "<<my_number<<endl;
	area = width * length;	// Function body & function definition
	return (area);// you are also returning control: Anything else after this does not exist
	//a program can only have one return function unless you are returning conditions.
	cout<<"\nI have nothing to say\n";
}
