#include<iostream.h>
int main()
{
	int a, b;

	cout<<"Enter three numbers:> ";
	cin>>a>>b;

	if(a > b)
		cout<<"\nBetween "<<a<<" and "<<b<<" the largest is "<<a;
	else
		cout<<"\nBetween "<<a<<" and "<<b<<" the largest is "<<b;

	cout<<"\n\n";
	return 0;
}

