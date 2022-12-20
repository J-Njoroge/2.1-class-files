#include<iostream>
using namespace std;
int main()
{
	int points;

	cout<<"Enter the points the student scored:> ";
	cin>>points;

	switch(points)
	{
	case 4: cout<<"\nThe student got a Distinction.";
		break;
	case 3: cout<<"\nThe student got a Credit.";
		break;
	case 2: cout<<"\nThe student got a Pass.";
		break;
	case 1: cout<<"\nThe student got a Fail.";
		break;
    default:cout<<"\nThe points you have entered are invalid!";
	}

	cout<<"\n\nGoodbye. Thanks for using our software.\n\n";
	return 0;
}
