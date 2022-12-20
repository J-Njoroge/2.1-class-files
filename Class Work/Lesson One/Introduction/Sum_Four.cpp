#include<iostream.h>
int main()
{
	int a,b,c,d,total;
	double avg;

	cout<<"Enter four numbers: ";
	cin>>a>>b>>c>>d;

	total = a + b + c + d;
	avg = total / 4.0;

	cout<<"\nThe sum is "<<total;
	cout<<"\nThe average is "<<avg<<"\n\n";

	return 0;
}