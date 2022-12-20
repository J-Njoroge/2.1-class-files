#include<iostream>
using namespace std;
int main( )
{
	int age;

	cout<<"Enter your age: ";
	cin>>age;

	if (age >= 18)
        {
            cout<<"\nYou can vote.";
            cout<<"\nPlease vote wisely.";
        }

	else

		{
		    cout<<"\nYou are too young to vote.";
		    cout<<"\nDon't worry, your day will come.";
		}



	cout<<"\n\n";
	return 0;
}
