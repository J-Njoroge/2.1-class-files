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
    cout<<"The student average mark is "<< ave<<endl;

     if(ave >= 80 && ave <= 100)
    {
        cout<<"The student got: A "<<endl;
    }

    else if(ave > 80 && ave <= 60 )
    {
        cout<<"The student got: B "<<endl;
    }
    else if( ave > 60 && ave <= 50)
    {
        cout<<"The student got: C "<<endl;
    }
    else if(ave > 60 && ave <= 50)
    {
        cout<<"The student got: D "<<endl;
    }
    else if(ave > 50 && ave >= 0)
    {
        cout<<"The student got: E "<<endl;
    }

    return 0;
}
int get_grade(int marks_1, int marks_2, int marks_3)
{
    int average;
    average = (marks_1 + marks_2 + marks_3) / 3;
    return (average);
}

