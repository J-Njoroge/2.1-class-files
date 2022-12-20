#include<iostream.h>
int main()
{
	int i;
	double mark[10],sum = 0,avg;

	for (i = 0;i < 10;i++)
	{
		cout<<"Enter the mark for student "<<(i + 1)<<":> ";
		cin>>mark[i];
		sum = sum + mark[i];
	}

	avg = sum / 10;

	cout<<"\nThe marks you entered were:\n\n";
	for(i = 0;i < 10;i++)
		cout<<mark[i]<<" ";

	cout<<"\n\nTotal Marks = "<<sum
		<<"\nAverage Marks = "<<avg;

	cout<<"\n\n";
	return 0;
}
