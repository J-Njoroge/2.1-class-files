#include<iostream>
using namespace std;
int main()
{
	int k;

	k = 1000000;//Initialization

	do
	{
		cout<<"\n"<<k;
		k/=10;//updation
	}while(k >= 100); //Condition

	cout<<"\n\n";
	return 0;
}
