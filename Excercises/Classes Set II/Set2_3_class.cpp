#include<iostream>
using namespace std;
class Endmonth
{
private:
    int salary, tax, net_pay, choice;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
    Endmonth pay1;

    cout<<"***Choose Gender***"<<endl;
    cout<<"1. Female          "<<endl;
    cout<<"2. Male            "<<endl;
    cout<<endl;

    pay1.input();
    pay1.compute();
    pay1.output();

    cout<<endl;
    return 0;
}
void Endmonth::input()
{
    cout<<"Enter your option -> ";
    cin>>choice;
    cout<<"Enter salary -> ";
    cin>>salary;
    cout<<endl;
}
void Endmonth::compute()
{
   if (salary < 15000)
    {
        tax = salary * 0.12;
        net_pay = salary - tax;
    }
    else if (salary >= 15000)
    {
        tax = salary * 0.14;
        net_pay = salary - tax;
    }
    else if (salary < 14000)
    {
        tax = salary * 0.13;
        net_pay = salary - tax;
    }
    else if (salary >= 14000)
    {
        tax = salary * 0.15;
        net_pay = salary - tax;
    }
}
void Endmonth::output()
{
    cout<<"The tax amount for male is -> "<<tax<<endl<<"The net pay is -> "<<net_pay;
}
