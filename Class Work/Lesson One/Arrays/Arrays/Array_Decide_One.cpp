#include<iostream.h>
#include<stdlib.h>
int main()
{
	int i,k;
	double mark[100],sum = 0,avg;

	cout<<"How many students do you want to work with? ";
	cin>>k;

	system("cls");

	for (i = 0;i < k;i++)
	{
		cout<<"Enter the mark for student "<<(i + 1)<<":> ";
		cin>>mark[i];
		sum = sum + mark[i];
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
