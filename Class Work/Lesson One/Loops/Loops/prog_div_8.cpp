//Program that displays all numbers that are divisible by 8
#include<iostream.h>
int main()
{
	int k;

	k = 1;

	cout<<"The numbers divisible by 8 between 1 and 200 are: \n";
	do

	{
		if( k % 8==0)
			cout<<k<<" ";
			k = k + 1;
	}
	while(k <=200);
	cout<<"\n\n";

	return 0;
}