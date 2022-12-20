#include<iostream>
using namespace std;
char get_grade(float Average);
int main()
{
    int mark_1, mark_2, mark_3, Ave;
    char Grade;

    cout<<"Enter the marks -> ";
    cin>>mark_1>>mark_2>>mark_3;

    Ave = (mark_1 + mark_2 + mark_3) / 3;
    Grade = get_grade(Ave);

    cout<<"\nThe student got grade: "<<Grade;

    cout<<"\n\n";
    return 0;
}
char get_grade(float Average)
{
    if(Average >= 80 && Average <= 100)
    {
        return('A');
    }
    else if(Average >= 70 && Average < 80)
    {
        return ('B');
    }
    else if(Average >= 60 && Average < 70)
    {
        return ('C');
    }
    else if(Average >=50 && Average < 60)
    {
        return ('D');
    }
    else if(Average >= 0 && Average < 50)
    {
        return ('E');
    }
        return 0;
}
