#include<iostream>
using namespace std;
int main( )
{
	int num;

	cout<<"Enter a number: ";
	cin>>num;

	if (num % 2 == 0)
		cout<<"\n"<<num<<" is an even number\n\n";
	else
		cout<<"\n"<<num<<" is an odd number\n\n";

	return 0;
}
