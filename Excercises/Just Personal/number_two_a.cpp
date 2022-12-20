#include<iostream>
using namespace std;
int get_grade(int mark_1, int mark_2, int mark_3);
int main()
{
    int mar_1, mar_2, mar_3, retr_grade;

    cout<<"Enter the marks -> ";
    cin>>mar_1>>mar_2>>mar_3;

    retr_grade = get_grade(mar_1, mar_2, mar_3);

    cout<<"\nThe student got grade: "<<retr_grade;

    cout<<"\n\n";
    return 0;
}
int get_grade(int mark_1, int mark_2, int mark_3)
{
    int average;
    char grade;

    average = (mark_1 + mark_2 + mark_3) / 3;

    if(average >= 80 && average <= 100)
    {
        grade = 'A';
        return (char(grade));
    }
    else if(average >= 70 && average < 80)
    {
        grade = 'B';
        return (grade);
    }
    else if(average >= 60 && average < 70)
    {
        grade = 'C';
        return (grade);
    }
    else if(average >=50 && average < 60)
    {
        grade = 'D';
        return (grade);
    }
    else if(average >= 0 && average < 50)
    {
        grade = 'E';
        return (grade);
    }
    else
        return 0;
}
