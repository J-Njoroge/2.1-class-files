#include<iostream>
using namespace std;
int sum(int b);
int main()
{
	int n,ans;

	cout<<"Enter an integer: ";
	cin>>n;

	ans = sum(n);
	cout<<"\nThe sum of the digits of "<<n<<" is "<<ans<<"\n\n";
	return 0;
}

int sum(int b)
{
	int total;

	if (b == 0)
		return 0;
	else
		total = b % 10 + sum(b / 10);

	return total;
}
