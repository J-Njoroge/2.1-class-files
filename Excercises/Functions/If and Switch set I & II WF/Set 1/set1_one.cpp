#include<iostream>
using namespace std;
int Club(int bottle);

int main ()
{
    int choice, bott, cst;

    cout<<"**** Jamal and Daughters Pub **** "<<endl;
    cout<<" Beer Brand          Price"<<endl;
    cout<<" 1.Tusker            100  "<<endl;
    cout<<" 2.Pilsner           120  "<<endl;
    cout<<" 3.Smirnoff Ice      140  "<<endl;
    cout<<" 4.White Cap          90  "<<endl;
    cout<<endl;

    cout<<"Enter your option -> ";
    cin>>choice;
    cout<<"How many bottles do you want -> ";
    cin>>bott;

    cst = Club(bott);

    if (choice == 1)
    {
        cout<<bott<<" bottles of Tusker will cost you Ksh. "<<cst;
    }
    else if (choice == 2)
    {
        cout<<bott<<" bottles of Pilsner will cost you Ksh. "<<cst;
    }
    else if (choice == 3)
    {
        cout<<bott<<" bottles of Smirnoff Ice will cost you Ksh. "<<cst;
    }
    else if (choice == 4)
    {
        cout<<bott<<" bottles of White Cap will cost you Ksh. "<<cst;
    }
    else
        cout<<"Incorrect";

    cout<<"\n\n";
    return 0;

}
int Club(int bottle)
{
    int cost, choice;

    if (choice == 1)
    {
        cost = bottle * 100;
        return cost;
    }
    else if (choice == 2)
    {
        cost = bottle * 120;
        return cost;
    }
    else if (choice == 3)
    {
        cost = bottle * 140;
        return cost;
    }
    else if (choice == 4)
    {
        cost = bottle * 90;
        return cost;
    }

    return 0;
}
