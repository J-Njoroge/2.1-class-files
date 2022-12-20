#include<iostream>
using namespace std;
int main( )
{
	double a, b, c, largest;

	cout<<"Enter three integers: ";
	cin>>a>>b>>c;

	if ((a > b) && (a > c))
		largest = a;
	else if ((b > a) && (b > c))
		largest = b;
	else
		largest = c;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout<<"\nAmong "<<a<<", "<<b<<" and "<<c<<" the largest is "<<largest<<"\n\n";

	return 0;
}
