#include<iostream>
using namespace std;
#include<conio.h>

struct Club
{
    int choice, bottles, cost;
};

int main()
{
 struct Club    customer_1;

     cout<<"****** Liquor store *******";
     cout<<"\nType               price\n";
     cout<<"\n1.Tusker             100\n";
     cout<<"\n2.pilsner            120\n";
     cout<<"\n3.smirnoff ice        140\n";
     cout<<"\n4.white cap          90\n";
     cout<<endl;

     cout<<"Enter your choice -> ";
     cin>>customer_1.choice;

     if(customer_1.choice==1)
     {
         cout<<"\nHow many bottles of Tusker do you want -> ";
         cin>>customer_1.bottles;

         customer_1.cost = customer_1.bottles * 100;

         cout<<"The cost of bottles of Tusker is ksh. "<<customer_1.cost<<endl;
     }

     if(customer_1.choice == 2)
     {
        cout<<"\nHOw many bottles of pilsner do you want? -> ";
        cin>>customer_1.bottles;

        customer_1.cost = customer_1.bottles * 120;

        cout<<"\nThe cost of bottles of pilsner is ksh. "<<customer_1.cost<<endl;
     }

      if(customer_1.choice == 3)
     {
        cout<<"\nHow many bottles of smirnoff do you want -> ";
        cin>>customer_1.bottles;

        customer_1.cost = customer_1.bottles * 140;

        cout<<"\nThe cost of bottles of smirnoff is ksh."<<customer_1.cost<<endl;
     }

      if(customer_1.choice == 4)
     {
        cout<<"\nHow many bottles of white cap do you want -> ";
        cin>>customer_1.bottles;

        customer_1.cost = customer_1.bottles * 90;

        cout<<"\nThe cost of bottles pf white cap is ksh. "<<customer_1.cost<<endl;
     }
     if(customer_1.choice > 4)
     {
         cout<<"\nNot available.";
         cout<<"\nEnter a number between 1-4"<<endl;
     }
     return 0;
}
