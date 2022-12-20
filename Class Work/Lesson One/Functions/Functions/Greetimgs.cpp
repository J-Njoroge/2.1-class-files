#include<iostream.h>
void greetings();
void bye();
int main()
{
	cout<<"Call to the function greetings \n";
	greetings();

	cout<<"\nCall to the function bye\n";
	bye();

	cout<<"\n\n";
	return 0;
}
void greetings()
{
	cout<<"How are you doing my friend?\n";
}

void bye()
{
	cout<<"I have to go. Have a nice day \n";
}
