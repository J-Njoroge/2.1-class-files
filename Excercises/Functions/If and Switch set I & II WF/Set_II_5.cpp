#include<iostream>
using namespace std;
int get_grade(int mark_1, int mark_2, int mark_3, int mark_4, int mark_5);

int main ()
{
    int mrk_1, mrk_2, mrk_3, mrk_4, mrk_5, ave, sum;


       cout<<"Enter marks for five subjects -> ";
       cin>>mrk_1>> mrk_2>>mrk_3>> mrk_4>> mrk_5;

    ave = get_grade(mrk_1, mrk_2, mrk_3, mrk_4, mrk_5);

     if (ave < 100 && ave >= 75)
     {
         cout<<"Distinction"<<endl;
     }
     else if (ave >= 65 && ave < 75 )
     {
         cout<<"Credit"<<endl;
     }
     else if (ave >= 50 && ave < 65)
     {
         cout<<"Pass"<<endl;
     }
     else
     {
         cout<<"Fail"<<endl;
     }
     return 0;
}
int get_grade(int mark_1, int mark_2, int mark_3, int mark_4, int mark_5)
{
    int average;
     average = (mark_1 + mark_2 + mark_3 + mark_4 + mark_5) /5;
     return average;
}
