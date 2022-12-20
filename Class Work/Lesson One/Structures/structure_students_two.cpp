#include<iostream>
using namespace std;
struct Student
{
	char adm_no[20],name[50];
	int no_of_units;
	double fee_paid, fee_balance;
};
const double FEE_PAYABLE = 90000;
int main()
{
	Student stud1, stud2;

	cout<<"Data entry for student 1:"
		<<"\n------------------------------------------------------------";
	cout<<"\nEnter the admission number of the student: ";
	cin>>stud1.adm_no;
	fflush(stdin);
	cout<<"Enter his/her name: ";
	gets(stud1.name);
	cout<<"Enter the number of units he/she is doing: ";
	cin>>stud1.no_of_units;
	cout<<"Enter the fee he/she has paid: ";
	cin>>stud1.fee_paid;

	cout<<"\n\nData entry for the student 2:"
		<<"\n------------------------------------------------------------";
	cout<<"\nEnter the admission number of the student: ";
	cin>>stud2.adm_no;
	fflush(stdin);
	cout<<"Enter his/her name: ";
	gets(stud2.name);
	cout<<"Enter the number of units he/she is doing: ";
	cin>>stud2.no_of_units;
	cout<<"Enter the fee he/she has paid: ";
	cin>>stud2.fee_paid;

	stud1.fee_balance = FEE_PAYABLE - stud1.fee_paid;
	stud2.fee_balance = FEE_PAYABLE - stud2.fee_paid;

	cout<<"\n\nAnalysis for student 1:"
		<<"\n------------------------------------------------------------";
    cout<<"\nAdmission Number: "<<stud1.adm_no
		<<"\nName: "<<stud1.name
		<<"\nNumber of units: "<<stud1.no_of_units
		<<"\nFee Paid: "<<stud1.fee_paid
		<<"\nFee Balance: "<<stud1.fee_balance;

    cout<<"\n\nAnalysis for student 2:"
		<<"\n------------------------------------------------------------";
    cout<<"\nAdmission Number: "<<stud2.adm_no
		<<"\nName: "<<stud2.name
		<<"\nNumber of units: "<<stud2.no_of_units
		<<"\nFee Paid: "<<stud2.fee_paid
		<<"\nFee Balance: "<<stud2.fee_balance;

	cout<<"\n\n";
	return 0;
}
