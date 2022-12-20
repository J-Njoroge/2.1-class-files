#include<iostream>
using namespace std;
class Endpay
{
private:
   double gross_p, tax, net_p;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
    Endpay pay1;

    pay1.input();
    pay1.compute();
    pay1.output();

    cout<<"\n\n";
    return 0;
}
void Endpay::input()
{
    cout<<"Enter the gross pay -> ";
    cin>>gross_p;
}
void Endpay::compute()
{
    if (gross_p > 40000)
    {
        tax = gross_p * 0.3;
        net_p = gross_p - tax;
    }
    else if (gross_p >= 30000 && gross_p <40000)
    {
        tax = gross_p * 0.25;
        net_p = gross_p - tax;
    }
    else if (gross_p >= 20000 && gross_p <30000)
    {
        tax = gross_p * 0.15;
        net_p = gross_p - tax;
    }
    else if (gross_p >= 10000 && gross_p < 20000)
    {
       tax = gross_p * 0.1;
       net_p = gross_p - tax;
    }
    else if (gross_p < 10000)
    {
       tax = gross_p * 0;
       net_p = gross_p - tax;
    }
}
void Endpay::output()
{
    cout<<"The tax amount charged is "<<tax<<endl<<"The net pay is "<<net_p<<"\n\n";
}
