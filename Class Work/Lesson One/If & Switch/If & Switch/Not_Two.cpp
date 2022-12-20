#include<iostream>
using namespace std;
int main( )
{
	int a, b, largest;

	cout<<"Enter two integers: ";
	cin>>a>>b;

	if (!(a > b))
		largest = b;
	else
		largest = a;

	cout<<"\nBetween "<<a<<" and "<<b<<", the largest is "<<largest<<"\n\n";
	return 0;
}
