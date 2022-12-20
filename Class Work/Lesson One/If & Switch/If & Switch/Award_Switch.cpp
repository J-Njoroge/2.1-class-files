#include<iostream>
using namespace std;
int main()
{
	char grade;

	cout<<"Enter the grade the student got:> ";
	cin>>grade;

	switch(grade)
	{
	case 'A': cout<<"\nThe student got a Distinction.";
		break;
	case 'B':
	case 'C': cout<<"\nThe student got a Credit.";
		break;
	case 'D': cout<<"\nThe student got a Pass.";
		break;
	case 'E': cout<<"\nThe student got a Fail.";
		break;
	default:cout<<"\nThe grade you have entered is invalid!";
	}

	cout<<"\n\nGoodbye. Thanks for using our software.\n\n";
	return 0;
}
