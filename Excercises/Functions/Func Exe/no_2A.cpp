#include<iostream>
using namespace std;
int get_grade(int marks_1, int marks_2, int marks_3);
int main ()
{
    int mrk_1, mrk_2, mrk_3, ave;

    cout<<"Enter the student's marks -> ";
    cin>>mrk_1>>mrk_2>>mrk_3;
    cout<<endl;

    ave = get_grade(mrk_1, mrk_2, mrk_3);
    cout<<"The student averagerage mark is "<< ave<<endl;

    return 0;
}
int get_grade(int marks_1, int marks_2, int marks_3)
{
    int average;
    average = (marks_1 + marks_2 + marks_3) / 3;
    return (average);


     if(average >= 80 && average <= 100)
    {
        cout<<"The student got: A "<<endl;
    }

    else if(average > 80 && average <= 60 )
    {
        cout<<"The student got: B "<<endl;
    }
    else if( average > 60 && average <= 50)
    {
        cout<<"The student got: C "<<endl;
    }
    else if(average > 60 && average <= 50)
    {
        cout<<"The student got: D "<<endl;
    }
    else if(average > 50 && average >= 0)
    {
        cout<<"The student got: E "<<endl;
    }

}
