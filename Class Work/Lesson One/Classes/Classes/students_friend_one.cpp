#include<iostream>
using namespace std;
class Student
{
private:
	char adm_no[20],name[50];
	int no_of_units;
	double fee_paid, fee_balance;
public:
    void get_data();
    void compute();
    void show_data();
    friend double get_fee(Student the_stud);//Friend function
};
const double FEE_PAYABLE = 90000;
int main()
{
	Student stud1;

	cout<<"Data entry for the student:"
		<<"\n------------------------------------------------------------";
	stud1.get_data();

	stud1.compute();

	cout<<"\n\nAnalysis for the student:"
		<<"\n------------------------------------------------------------";
    stud1.show_data();

    cout<<"\nThe student has paid Kshs. "<<get_fee(stud1);
	cout<<"\n\n";
	return 0;
}
void Student::get_data()
{
    cout<<"\nEnter the admission number of the student: ";
	cin>>adm_no;
	fflush(stdin);

	cout<<"Enter his/her name: ";
	gets(name);
	cout<<"Enter the number of units he/she is doing: ";
	cin>>no_of_units;
	cout<<"Enter the fee he/she has paid: ";
	cin>>fee_paid;
}
void Student::compute()
{
    fee_balance = FEE_PAYABLE - fee_paid;
}
void Student::show_data()
{
    cout<<"\nAdmission Number: "<<adm_no
		<<"\nName: "<<name
		<<"\nNumber of units: "<<no_of_units
		<<"\nFee Paid: "<<fee_paid
		<<"\nFee Balance: "<<fee_balance;
}
double get_fee(Student the_stud)
{
    return(the_stud.fee_paid);
}

