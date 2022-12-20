#include<iostream.h>
int main()
{
	int i;
	for(i = 1;i <= 10;i++)
	{
		if(i == 6)
		{
			cout<<"\n\nThis is my favourite number.\n";
			continue;
		}
		cout<<"\ni = "<<i;
	}

	cout<<"\n\n";
	return 0;
}