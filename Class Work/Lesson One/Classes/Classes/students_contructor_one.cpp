#include<iostream>
#include<cstring>
using namespace std;
class Student
{
private:
	char adm_no[20],name[50];
	int no_of_units;
	double fee_paid, fee_balance;
public:
    Student(char jina[50], char adm[20], int units, double fee);
    Student(int units, double fee);
    void get_data();
    void compute();
    void show_data();
};
const double FEE_PAYABLE = 90000;
int main()
{
	Student stud1("sct221-0110/2021","hannah", 8, 90000) ;//To be revisited

	/*cout<<"Data entry for the student:"
		<<"\n------------------------------------------------------------";
	stud1.get_data();*/

	stud1.compute();

	cout<<"\n\nAnalysis for the student:"
		<<"\n------------------------------------------------------------";
    stud1.show_data();
	cout<<"\n\n";
	return 0;
}
 Student::Student(char jina[50], char adm[20], int units, double fee)
{
    strcpy(name, jina);
    strcpy(adm_no, adm);
    no_of_units = units;
    fee_paid = fee;
}
Student::Student(int units, double fee)
{
    no_of_units = units;
    fee_paid = fee;
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


