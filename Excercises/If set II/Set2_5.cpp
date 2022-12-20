#include<iostream>
using namespace std;
int main ()
{
    int mrk_1, mrk_2, mrk_3, mrk_4, mrk_5, ave, sum;


       cout<<"Enter marks for five subjects -> ";
       cin>>mrk_1>> mrk_2>>mrk_3>> mrk_4>> mrk_5;

     ave = (mrk_1 + mrk_2 + mrk_3 + mrk_4 + mrk_5) /5;

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

