#include<iostream>
using namespace std;
int main( )
{
	int a,b;

	cout<<"Enter two integers: ";
	cin>>a>>b;

	if (a > b)
		cout<<"\n"<<a<<" is larger than "<<b;
	else
		cout<<"\n"<<b<<" is larger than "<<a;

	cout<<"\n\n";

	return 0;
}
