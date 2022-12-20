#include<iostream>
using namespace std;
class Club
{
private:
     int choice, bott, cost;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
   Club cost1;

    cout<<"**** Jamal and Daughters Pub **** "<<endl;
    cout<<" Beer Brand          Price"<<endl;
    cout<<" 1.Tusker            100  "<<endl;
    cout<<" 2.Pilsner           120  "<<endl;
    cout<<" 3.Smirnoff Ice      140  "<<endl;
    cout<<" 4.White Cap          90  "<<endl;
    cout<<endl;

    cost1.input();
    cost1.compute();
    cost1.output();

    cout<<"\n\n";
    return 0;
}
void Club::input()
{
    cout<<"Enter your option -> ";
    cin>>choice;
    cout<<"How many bottles do you want -> ";
    cin>>bott;
}
void Club::compute()
{
    if (choice == 1)
    {
       cost = bott * 100;
    }
    else if (choice == 2)
    {
       cost = bott * 120;
    }
    else if (choice == 3)
    {
       cost = bott * 140;
    }
    else if (choice == 4)
    {
       cost = bott * 90;
    }
    cout<<endl;
}
void Club::output()
{
    if (choice == 1)
    {
        cout<<bott<<" bottles of Tusker will cost you Ksh "<<cost;
    }
    else if (choice == 2)
    {
        cout<<bott<<" bottles of Pilsner will cost you Ksh "<<cost;
    }
    else if (choice == 3)
    {
        cout<<bott<<" bottles of Smirnoff Ice will cost you Ksh "<<cost;
    }
    else if (choice == 4)
    {
        cout<<bott<<" bottles of White Cap will cost you Ksh "<<cost;
    }
    else
        cout<<"Incorrect";
}
