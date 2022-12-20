#include<iostream>
#include<string.h>
using namespace std;
char get_grade(float average);

int main ()
{
    int k, mark[10], sum = 0;
    float ave;
    char grade;

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
char get_grade(float average)
{
    if(average >= 70 && average < 100)
    {
        return('A');
    }
    else if(average <= 69 && average > 60)
    {
        return('B');
    }
    else if(average <= 59 && average > 40)
    {
        return('C');
    }
    else if(average <= 39 && average > 0)
    {
        return('D');
    }
    return 0;
}
