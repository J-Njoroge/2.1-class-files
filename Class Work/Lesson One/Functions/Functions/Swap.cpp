#include<iostream.h>
void swap(int& x, int& y);
int main()
{
	int a,b;

	cout<<"nEnter two integers:> ";
	cin>>a>>b;

	cout<<"\n\nBefore swap:\n"
		<<"----------------------\n";
	cout<<"a = "<<a<<"\nb = "<<b;

	swap(a,b);

	cout<<"\n\nAfter swap:\n"
		<<"----------------------\n";		
	cout<<"a = "<<a<<"\nb = "<<b;

	cout<<"\n\n";
	return 0;
}

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
