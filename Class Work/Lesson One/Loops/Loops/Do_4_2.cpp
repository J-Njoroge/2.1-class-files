#include<iostream>
using namespace std;
int main()
{
	double k;

     cout.setf(ios::fixed);
	 cout.setf(ios::showpoint);
	 cout.precision(2);

	k = 600;

	do
	{
		cout<<"\nk = "<<k;
		k = k / 2;
	}while(k >= 10);

	cout<<"\n\n";
	return 0;
}
