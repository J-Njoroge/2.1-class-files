#include<iostream.h>
struct Student
{
	char adm_no[20],name[25];
	int age;
	float height;
};
int main()
{
	Student stud1;

	cout<<"Data entry for the student:\n"
		<<"------------------------------------------------------------\n";
	cout<<"Enter the admission number of the student: ";
	cin>>stud1.adm_no;
	cout<<"Enter his/her name: ";
	cin>>stud1.name;
	cout<<"Enter his/her age: ";
	cin>>stud1.age;
	cout<<"Enter his/her height: ";
	cin>>stud1.height;

	cout<<"\n\nAnalysis for the student:"
		<<"\n---------------------------------------"
		<<"\nAdmission Number: "<<stud1.adm_no
		<<"\nName: "<<stud1.name
		<<"\nAge: "<<stud1.age
		<<"\nHeight: "<<stud1.height;
	
	cout<<"\n\n";
	return 0;
}
