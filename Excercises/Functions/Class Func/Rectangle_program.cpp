#include<iostream>
#include<function.h>
using namespace std;

int main ()
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

