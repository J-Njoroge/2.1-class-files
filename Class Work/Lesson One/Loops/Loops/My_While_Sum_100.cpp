/*This program computes the sum
of all numbers between 1 and 100*/
#include<iostream>
using namespace std;
int main()
{
	int k, sum = 0;

	k = 1;

	while(k <= 100)
	{
		sum = sum + k;
		k = k + 1;
	}

	cout<<"The sum of all numbers between 1 and 100 is "<<sum<<"\n\n";
	return 0;
}
