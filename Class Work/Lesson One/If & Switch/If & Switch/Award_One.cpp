#include<iostream>
using namespace std;
int main()
{
	double subj1, subj2, subj3, avg;

	cout<<"Enter the marks scored in three subjects -> ";
	cin>>subj1>>subj2>>subj3;

	avg = (subj1 + subj2 + subj3) / 3.0;

	cout<<"\nThe average mark is "<<avg;

	if(avg >= 80)
		cout<<"\nThe student got a Distinction.";
	else if(avg >= 70)
		cout<<"\nThe student got a Credit.";
	else if(avg >= 50)
		cout<<"\nThe student got a Pass.";
	else if(avg >= 0)
		cout<<"\nThe student got a Fail.";

	cout<<"\n\n";
	return 0;

}
