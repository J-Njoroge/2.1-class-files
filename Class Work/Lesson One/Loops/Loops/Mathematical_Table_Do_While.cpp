#include<iostream>
using namespace std;
int main()
{
	int i,j;
	i = 1;

	do
	{
	    j = 1;
		do
          {
            cout<<"\n"<<i<<" * "<<j<<" = "<<(i * j);
            j++;
          }while(j <= 15);
		i++;
		cout<<"\n";
	}while(i <= 10);

	cout<<"\n\n";
	return 0;
}
