#include<iostream>
using namespace std;
int main()
{
	int k;

	k = 200;//Initialization

	do
	{
		cout<<"\nk = "<<k;
		k = k - 5;//updation
	}while(k >= 50); //Condition

	cout<<"\n\n";
	return 0;
}
