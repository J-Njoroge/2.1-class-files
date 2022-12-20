/*This program is just for illustration.
You should NEVER declare member variables as public.
Member variables should always be private*/

#include<iostream.h>
class DayOfYear
{
public:
	int month,day;
};
int main()
{
	DayOfYear today,birthday;

	cout<<"Enter today's date:\n"
		<<"------------------------------------\n";
	cout<<"Enter month as a number: ";
	cin>>today.month;
	cout<<"Enter the day of the month: ";
	cin>>today.day;

	cout<<"\nEnter your birthday:\n"
		<<"------------------------------------\n";
	cout<<"Enter month as a number: ";
	cin>>birthday.month;
	cout<<"Enter the day of the month: ";
	cin>>birthday.day;

	cout<<"\n\nToday's date is:\n"
		<<"------------------------------------\n";
	cout<<"Day = "<<today.day<<",Month = "<<today.month;

	cout<<"\n\nYour Birthday is :\n"
		<<"------------------------------------\n";
	cout<<"Day = "<<birthday.day<<",month = "<<birthday.month;

	if (today.day==birthday.day && today.month==birthday.month)
		cout<<"\n\nHappy Birthday!";
	else
		cout<<"\n\nHappy unbirthday!";

	cout<<"\n\n";
	return 0;
}
