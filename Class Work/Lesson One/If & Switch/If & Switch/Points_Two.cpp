#include<iostream>
using namespace std;
int main()
{
	int points;

	cout<<"Enter the points the student scored:> ";
	cin>>points;

	switch(points)
	{
	case 4:
	case 3:
	case 2: cout<<"\nThe student Passed.";
		break;
	case 1: cout<<"\nThe student Failed.";
		break;
	default:cout<<"\nThe points you have entered are invalid!";
	}

	cout<<"\n\nGoodbye. Thanks for using our software.\n\n";
	return 0;
}
