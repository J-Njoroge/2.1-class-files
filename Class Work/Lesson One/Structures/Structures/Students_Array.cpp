#include<iostream>
using namespace std;
#include<stdlib.h>
struct Student
{
	char adm_no[20],name[25];
	int age;
	float height;
};
int main()
{
	Student stud[50];
	int i, number;

	cout<<"How many students do you want to work with? ";
	cin>>number;

	system("cls");

	for (i = 0; i < number;i++)
	{
		cout<<"\n\nData entry for the student "<<(i + 1)<<":\n"
			<<"------------------------------------------------------\n";
		cout<<"Enter the admission number of the student: ";
		cin>>stud[i].adm_no;
		cout<<"Enter his/her name: ";
		cin>>stud[i].name;
		cout<<"Enter his/her age: ";
		cin>>stud[i].age;
		cout<<"Enter his/her height: ";
		cin>>stud[i].height;
	}

	for (i = 0; i < number; i++)
	{

		cout<<"\n\nAnalysis for student "<<(i + 1)<<": "
			<<"\n---------------------------------------"
			<<"\nAdmission Number: "<<stud[i].adm_no
			<<"\nName: "<<stud[i].name
			<<"\nAge: "<<stud[i].age
			<<"\nHeight: "<<stud[i].height;
	}
	cout<<"\n\n";
	return 0;
}
