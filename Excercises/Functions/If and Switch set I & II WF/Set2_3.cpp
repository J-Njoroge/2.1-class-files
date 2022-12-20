#include<iostream>
using namespace std;
float get_tax(float salary);

int main ()
{
    int sal, tax, net_pay, choice;

    cout<<"***Choose Gender***"<<endl;
    cout<<"1. Female          "<<endl;
    cout<<"2. Male            "<<endl;
    cout<<endl;


    cout<<"Enter your option -> ";
    cin>>choice;
    cout<<"Enter salary -> ";
    cin>>sal;
    cout<<endl;

    tax = get_tax(sal);
    net_pay = sal - tax;

    if(choice == 1)
       {
            cout<<"The tax amount for female is -> "<<tax<<endl<<"The net pay is -> "<<net_pay;
       }

    else if(choice == 2)
       {
            cout<<"The tax amount for male is -> "<<tax<<endl<<"The net pay is -> "<<net_pay;
       }

    cout<<endl;
    return 0;
}
float get_tax(float salary)
{
    float tax_amount, choice;

     if (salary < 15000)
    {
        tax_amount = salary * 0.12;

        return(tax_amount);
    }
    else if (salary >= 15000)
    {
        tax_amount = salary * 0.14;

        return(tax_amount);
    }
    else if (salary < 14000)
    {
        tax_amount = salary * 0.13;

        return(tax_amount);
    }
    else if (salary >= 14000)
    {
        tax_amount = salary * 0.15;

        return(tax_amount);
    }
    return 0;
}




