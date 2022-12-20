#include<iostream>
using namespace std;
int main( )
{
	double a, b, c, largest;

	cout<<"Enter two integers: ";
	cin>>a>>b>>c;

	if (a > b)
		largest = a;
	else
		largest = b;

	if(c > largest)
		largest = c;

	cout<<"\nAmong "<<a<<", "<<b<<" and "<<c<<" the largest is "<<largest<<"\n\n";

	return 0;
}
