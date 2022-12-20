#include<iostream>
using namespace std;
struct Endpay
{
   double gross_p, tax, net_p;
};

int main ()
{
    Endpay pay1;

    cout<<"Enter the gross pay -> ";
    cin>>pay1.gross_p;

    if (pay1.gross_p > 40000)
    {
        pay1.tax = pay1.gross_p * 0.3;
        pay1.net_p = pay1.gross_p - pay1.tax;

        cout<<"The tax amount charged is "<<pay1.tax<<endl<<"The net pay is "<<pay1.net_p<<"\n\n";
    }
    else if (pay1.gross_p >= 30000 && pay1.gross_p <40000)
    {
        pay1.tax = pay1.gross_p * 0.25;
        pay1.net_p = pay1.gross_p - pay1.tax;

        cout<<"The tax amount charged is "<<pay1.tax<<endl<<"The net pay is "<<pay1.net_p<<"\n\n";
    }
    else if (pay1.gross_p >= 20000 && pay1.gross_p <30000)
    {
        pay1.tax = pay1.gross_p * 0.15;
        pay1.net_p = pay1.gross_p - pay1.tax;

        cout<<"The tax amount charged is "<<pay1.tax<<endl<<"The net pay is "<<pay1.net_p<<"\n\n";
    }
    else if (pay1.gross_p >= 10000 && pay1.gross_p < 20000)
    {
       pay1.tax = pay1.gross_p * 0.1;
       pay1.net_p = pay1.gross_p - pay1.tax;

        cout<<"The tax amount charged is "<<pay1.tax<<endl<<"The net pay is "<<pay1.net_p<<"\n\n";
    }
    else if (pay1.gross_p < 10000)
    {
       pay1.tax = pay1.gross_p * 0;
       pay1.net_p = pay1.gross_p - pay1.tax;

        cout<<"The tax amount charged is "<<pay1.tax<<endl<<"The net pay is "<<pay1.net_p<<"\n\n";
    }
    cout<<"\n\n";
    return 0;

}
