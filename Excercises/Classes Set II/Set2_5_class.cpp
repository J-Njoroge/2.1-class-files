#include<iostream>
using namespace std;
class Grade
{
private:
    int mrk_1, mrk_2, mrk_3, mrk_4, mrk_5, ave, sum;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
    Grade grd1;

    grd1.input();
    grd1.compute();
    grd1.output();

     return 0;
}
void Grade::input()
{
    cout<<"Enter marks for five subjects -> ";
    cin>>mrk_1>> mrk_2>>mrk_3>> mrk_4>> mrk_5;
}
void Grade::compute()
{
    ave = (mrk_1 + mrk_2 + mrk_3 + mrk_4 + mrk_5) /5;
}
void Grade::output()
{
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
}
