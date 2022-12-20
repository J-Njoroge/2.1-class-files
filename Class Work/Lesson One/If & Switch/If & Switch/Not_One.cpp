#include<iostream>
using namespace std;
int main( )
{
	double marks;

	cout<<"Enter marks the student scored: ";
	cin>>marks;

	if (!(marks >= 0 && marks <= 100))
		cout<<"\n"<<marks<<" is not a valid mark.";
	else
		cout<<"\n"<<marks<<" is a valid mark.";

	cout<<"\n\n";
	return 0;
}
