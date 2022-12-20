#include<iostream>
using namespace std;
int main ()
{
    int salary, tax_amount, net_salary;

    cout<<"Enter salary -> ";
    cin>>salary;


    if (salary >= 20000)
    {
        tax_amount = salary * 0.15;
        net_salary = salary - tax_amount;

        cout<<"The  tax_amount is -> "<<tax_amount<<endl<<"The net_salary is -> "<< net_salary;
    }
    else if (salary >= 10000 && salary < 20000)
    {
        tax_amount = salary * 0.10;
        net_salary = salary - tax_amount;

        cout<<"The  tax_amount is -> "<<tax_amount<<endl<<"The net_salary is -> "<< net_salary;
    }
    else if (salary < 10000)
    {
        tax_amount = salary * 0;
        net_salary = salary - tax_amount;

        cout<<"The  tax_amount is -> "<<tax_amount<<endl<<"The net_salary is -> "<< net_salary;
    }
    cout<<"\n\n";
    return 0;
}
