#include<iostream>
using namespace std;
int get_factorial(int a);
int main()
{
	int factorial,num;

	cout<<"Enter a number to find factorial:> ";
	cin>>num;

	factorial = get_factorial(num);

	cout<<"\nThe factorial of "<<num<<" is "<<factorial<<"\n\n";
	return 0;
}
int get_factorial(int a)
{
	int fact;
	if (a == 0)
		return 1;
	else
		fact = a * get_factorial(a - 1);
	return fact;
}
