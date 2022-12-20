#include<iostream.h>
void my_function(int& x,int& y);
int main() 
{
	int a,b;

	cout<<"Enter two numbers:> ";
	cin>>a>>b;

	cout<<"\n\nBefore the function call:\n"
		<<"---------------------------\n";
	cout<<"a = "<<a<<"\nb = "<<b;

	my_function(a,b);

	cout<<"\n\nAfter the function call:\n"
		<<"---------------------------\n";
	cout<<"a = "<<a<<"\nb = "<<b;

	cout<<"\n\n";
	return 0;
}

void my_function(int& x,int& y)
{
	x = x * 10;
	y = y * 20;

	cout<<"\n\nInside the function :\n"
		<<"---------------------------\n";
	cout<<"x = "<<x<<"\ny = "<<y;
}
