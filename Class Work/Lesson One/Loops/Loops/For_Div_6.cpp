/*Program to print all numbers divisible by 6
between 400 and 600*/
#include<iostream>
using namespace std;
int main()
{
	int h, sum = 0;

	cout<<"The numbers divisible by 6 between 400 and 600 are:\n\n";
	for(h = 400;h <= 600;h++)
	{
		if(h % 6 == 0)
			cout<<h<<" ";
	}

	cout<<"\n\n";
	return 0;
}
