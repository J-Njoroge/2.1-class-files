#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n, k, h;

	cout<<"Enter the number of terms you want -> ";
	cin>>h;

	n = 2;

	do
	{
		cout<<fixed<<setprecision(0)<<"\t "<<n;
		n = n *3;
		k++;
	}while(k < h);

	cout<<"\n\n";
	return 0;
}
