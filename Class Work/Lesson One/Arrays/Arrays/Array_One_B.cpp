#include<iostream.h>
int main()
{
	int i, mark[10];

	for (i = 0;i < 10;i++)
	{
		cout<<"Enter the mark for student "<<(i + 1)<<":> ";
		cin>>mark[i];
	}

	cout<<"\nPerformance Analysis"
		<<"\n---------------------------";
	for(i = 0;i < 10;i++)
		cout<<"\nStudent "<<(i + 1)<<"\t"<<mark[i]<<" ";

	cout<<"\n\n";
	return 0;
}
