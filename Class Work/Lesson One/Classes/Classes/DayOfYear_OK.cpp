#include<iostream.h>
class DayOfYear
{
private:
	int month,day;
public:
	void input(), output();
	int get_month(), get_day();
};

int main()
{
	DayOfYear today,birthday;

	cout<<"Enter today's date:\n"
		<<"---------------------------------------\n";
	today.input();

	cout<<"\n\nEnter your birthday:\n"
		<<"---------------------------------------\n";
	birthday.input();

	cout<<"\n\nToday's date is:\n"
		<<"---------------------------------------\n";
	today.output();

	cout<<"\n\nYour birthday is:\n"
		<<"---------------------------------------\n";
	birthday.output();

	if(today.get_day() == birthday.get_day() && today.get_month() == birthday.get_month())
		cout<<"\n\nHappy Birthday";
	else
		cout<<"\n\nHappy unbirthday!";

	cout<<"\n\n";
	return 0;
}
void DayOfYear::input()
{
	cout<<"Enter the month as a number: ";
	cin>>month;
	cout<<"\nEnter the day of the month: ";
	cin>>day;
}

void DayOfYear::output()
{
	cout<<"Day = "<<day<<" ,Month = "<<month;
}

int DayOfYear::get_month()
{
	return month;
}

int DayOfYear::get_day()
{	
	return day;
}
