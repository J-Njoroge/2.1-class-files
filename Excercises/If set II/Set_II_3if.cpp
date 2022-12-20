#include<iostream>
using namespace std;
int main ()
{
    int salary, tax, net_pay, choice;

    cout<<"***Choose Gender***"<<endl;
    cout<<"1. Female          "<<endl;
    cout<<"2. Male            "<<endl;
    cout<<endl;


    cout<<"Enter your option -> ";
    cin>>choice;
    cout<<"Enter salary -> ";
    cin>>salary;
    cout<<endl;

    if (salary < 15000)
    {
        tax = salary * 0.12;
        net_pay = salary - tax;

        cout<<"The tax amount for female is -> "<<tax<<endl<<"The net pay is -> "<<net_pay;
    }
    else if (salary >= 15000)
    {
        tax = salary * 0.14;
        net_pay = salary - tax;

        cout<<"The tax amount for female is -> "<<tax<<endl<<"The net pay is -> "<<net_pay;
    }
    else if (salary < 14000)
    {
        tax = salary * 0.13;
        net_pay = salary - tax;

        cout<<"The tax amount for male is -> "<<tax<<endl<<"The net pay is -> "<<net_pay;
    }
    else if (salary >= 14000)
    {
        tax = salary * 0.15;
        net_pay = salary - tax;

        cout<<"The tax amount for male is -> "<<tax<<endl<<"The net pay is -> "<<net_pay;
    }

    cout<<endl;
    return 0;
}
