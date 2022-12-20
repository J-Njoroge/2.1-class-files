#include<iostream>
using namespace std;
int main ()
{
    double gross_p, tax, net_p;

    cout<<"Enter the gross pay -> ";
    cin>>gross_p;

    if (gross_p > 40000)
    {
        tax = gross_p * 0.3;
        net_p = gross_p - tax;

        cout<<"The tax amount charged is "<<tax<<endl<<"The net pay is "<<net_p<<"\n\n";
    }
    else if (gross_p >= 30000 && gross_p <40000)
    {
        tax = gross_p * 0.25;
        net_p = gross_p - tax;

        cout<<"The tax amount charged is "<<tax<<endl<<"The net pay is "<<net_p<<"\n\n";
    }
    else if (gross_p >= 20000 && gross_p <30000)
    {
        tax = gross_p * 0.15;
        net_p = gross_p - tax;

        cout<<"The tax amount charged is "<<tax<<endl<<"The net pay is "<<net_p<<"\n\n";
    }
    else if (gross_p >= 10000 && gross_p < 20000)
    {
       tax = gross_p * 0.1;
       net_p = gross_p - tax;

        cout<<"The tax amount charged is "<<tax<<endl<<"The net pay is "<<net_p<<"\n\n";
    }
    else if (gross_p < 10000)
    {
       tax = gross_p * 0;
       net_p = gross_p - tax;

        cout<<"The tax amount charged is "<<tax<<endl<<"The net pay is "<<net_p<<"\n\n";
    }
    cout<<"\n\n";
    return 0;

}
