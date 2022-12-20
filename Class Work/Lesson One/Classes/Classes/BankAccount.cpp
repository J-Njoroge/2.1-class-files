#include<iostream>
using namespace std;
class BankAccount
{
public:
	BankAccount (int shillings, int cents, double rate);
	BankAccount (int shillings, double rate);
	BankAccount (); // Default constructor
	void output();
private:
	double balance, interest_rate;
};
int main()
{
	BankAccount account1(1000,50,10), account2(500,5), account3;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout<<"Account 1 is initialized as follows"
		<<"\n---------------------------------------";
	account1.output();

	cout<<"\n\nAccount 2 is initialized as follows:"
		<<"\n---------------------------------------";
	account2.output();

	cout<<"\n\nAccount 3 is initialized as follows: "
		<<"\n---------------------------------------";
	account3.output();

	cout<<"\n\n";
	return 0;
}
BankAccount::BankAccount (int shillings, int cents, double rate)
{
	balance = shillings + 0.01 * cents;
	interest_rate = rate;
}
BankAccount::BankAccount (int shillings, double rate)
{
	balance = shillings;
	interest_rate = rate;
}

BankAccount::BankAccount()
{
	balance = 0;
	interest_rate = 0;
}

void BankAccount::output()
{
	cout<<"\nAccount balance = Kshs. "<<balance<<"\nRate = "<<interest_rate<<"%";
}
