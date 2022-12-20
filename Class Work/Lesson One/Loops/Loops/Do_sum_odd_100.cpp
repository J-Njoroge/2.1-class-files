/*This program computes the sum
of all odd numbers between 1 and 100*/
#include<iostream>
using namespace std;
int main()
{
	int k, sum_odd = 0;

	k = 1;

	do
	{
		if(k % 2 != 0)
			sum_odd = sum_odd + k;
		k = k + 1;
	}while(k <= 100);

	cout<<"The sum of all odd numbers between 1 and 100 is "<<sum_odd<<"\n\n";
	return 0;
}
