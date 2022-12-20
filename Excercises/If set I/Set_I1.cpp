#include<iostream>
using namespace std;
int main ()
{
    int choice, bott;

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

    if (choice == 1)
    {
        cout<<bott<<" bottles of Tusker will cost you "<<bott * 100<<"Ksh";
    }
    else if (choice == 2)
    {
        cout<<bott<<" bottles of Pilsner will cost you "<<bott * 120<<"Ksh";
    }
    else if (choice == 3)
    {
        cout<<bott<<" bottles of Smirnoff Ice will cost you "<<bott * 140<<"Ksh";
    }
    else if (choice == 4)
    {
        cout<<bott<<" bottles of White Cap will cost you "<<bott * 90<<"Ksh";
    }
    else
        cout<<"Incorrect";

    cout<<"\n\n";
    return 0;

}
