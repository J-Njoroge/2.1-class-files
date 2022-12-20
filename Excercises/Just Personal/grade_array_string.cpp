#include<iostream>
#include<string.h>
using namespace std;
string get_grade(float average);

int main ()
{
    int k, mark[10], sum = 0;
    float ave;
    string grade;

    for(k = 0; k < 5; k++)
    {
        cout<<"\nEnter the numbers "<<k + 1<<": ";
        cin>>mark[k];
    }

    cout<<"\nThe numbers you entered are: ";
    for(k = 0; k < 5; k++)
    {
        cout<<mark[k]<<"\t";

        sum = sum + mark[k];
        ave = sum / 5;
        grade =  get_grade(ave);

    }
    cout<<"\nThe total sum is: "<<sum
        <<"\nThe average is: "<<ave
        <<"\nGrade: "<<grade
        <<endl;
    return 0;
}
string get_grade(float average)
{
    if(average >= 70 && average < 100)
    {
        return("Distiction");
    }
    else if(average <= 69 && average > 60)
    {
        return("Credit");
    }
    else if(average <= 59 && average > 40)
    {
        return("Pass");
    }
    else if(average <= 39 && average > 0)
    {
        return("Fail");
    }
    return 0;
}
