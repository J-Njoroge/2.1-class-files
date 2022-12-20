#include<iostream.h>
int main()
{
	int i, mark[10];

	for (i = 0;i < 10;i++)
	{
		cout<<"Enter the mark for student "<<(i + 1)<<":> ";
		cin>>mark[i];
	}

	cout<<"\nThe marks you entered were:\n\n";
	for(i = 0;i < 10;i++)
		cout<<mark[i]<<" ";

	cout<<"\n\n";
	return 0;
}
