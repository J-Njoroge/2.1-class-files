#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n, k;

	n = 2;//Initialization

	do
	{
		cout<<fixed<<setprecision(0)<<"\t "<<n;
		n = n *3;//updation
		k++;
	}while(k <= 20); //Condition

	cout<<"\n\n";
	return 0;
}
