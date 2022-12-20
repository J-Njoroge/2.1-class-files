#include<iostream.h>
#include<stdlib.h>
int main()
{
	int i,k;
	double mark[100],sum = 0,avg;

	i = 0;
	k = 0;

	cout<<"Enter the mark for student 1 [-1 to exit] :>:> ";
	cin>>mark[0];

	while(mark[i] != -1)
	{
		sum = sum + mark[i];
		i = i + 1;
		cout<<"Enter the mark for student "<<(i + 1)<<" [-1 to exit] :> ";
		cin>>mark[i];
		k = k + 1;
	}

	avg = sum / k;

	cout<<"\nThe marks you entered were:\n\n";
	for(i = 0;i < k;i++)
		cout<<mark[i]<<" ";

	cout<<"\n\nTotal Marks = "<<sum
		<<"\nAverage Marks = "<<avg;

	cout<<"\n\n";
	return 0;
}
