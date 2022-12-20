#include<iostream.h>
int main()
{
	int a, b, c, largest;

	cout<<"Enter three numbers:> ";
	cin>>a>>b>>c;

	if(a > b && a > c)
		largest = a;
	else
		largest = b;
	
	if(c > largest)
		largest = c;

	cout<<"\nThe numbers you entered were "<<a<<", "<<b<<" and "<<c;
	cout<<"\nThe largest number is "<<largest;
	cout<<"\n\n";
	return 0;
}

