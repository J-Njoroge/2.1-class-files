//Program to print all numbers
//divisile by 5 between 100 and 200
#include<iostream.h>
int main()
{
	int k;

	k = 100;

	cout<<"The numbers divisible by 5 between 100 and 200 are:\n\n";
	
	while(k <= 200)
	{
		if(k % 5 == 0)
			cout<<k<<" ";
		k = k + 1;
	}

	cout<<"\n\n";
	return 0;
}