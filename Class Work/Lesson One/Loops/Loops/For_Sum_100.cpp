#include<iostream>
using namespace std;
int main()
{
	int i, sum = 0;
	for(i = 1;i <= 100;i++)
		sum = sum + i;

	cout<<"The sum of all numbers between 1 and 100 is "<<sum<<"\n\n";
	return 0;
}
