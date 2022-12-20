#include<iostream>
using namespace std;
int main()
{
	int k;

	k = 600;

	do
	{
		cout<<"\nk = "<<k;
		k = k / 2;
	}while(k >= 10);

	cout<<"\n\n";
	return 0;
}
