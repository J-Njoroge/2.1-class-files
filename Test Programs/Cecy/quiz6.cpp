/* Write a complete C++ programming using the following specifications.
Your program should accept the gross salary of an employee and compute both the tax amount and net salary using the following taxation rate.
Gross Salary >=30,000
Tax Rate
15%
>=20,000 and <30,000
12%
10,000 and <10,000
20.000
10%
Not Taxed
Your program should have a class called Salary with the following members: -
Member Variables:
gross, tax, net
Member functions:
>input()-For data input.
output()-For data output.
> compute()- To perform calculations.
In addition, your class should have a parameterized constructor that initializes the member variables to some specified values and a default constructor that initializes all the member variables to 0.*/

#include <iostream>
using namespace std;

class Salary
{
private:
    double gross_pay, tax_amount, net_pay;
public:
    Salary(double gross, double tax, double pay);//Constructor
    Salary();//Default constructor
    void input();
    void compute();
    void output();
};
int main()
{
    system("cls");
    Salary sal1(double gross, double tax, double pay), sal2;

    /*sal.input();*/
    sal1.compute();
    sal2.compute();

    cout<<"\nThe output for salary one is:";
    sal1.output();

    cout<<"\nThe output for salary two is:";
    sal2.output();

    cout << "\n\n";
    return 0;
}
Salary::Salary(double gross, double tax, double pay)//Constructor
{
    gross_pay = gross;
    tax_amount = tax;
    net_pay = pay;
}
Salary::Salary()//Default constructor
{
    gross_pay = 0;
    tax_amount = 0;
    net_pay = 0;
}
void Salary::input()
{
    cout << "Enter the gross salary: ";
    cin >> gross;
}
void Salary::compute()
{
    if (gross >= 30000)
        tax = gross * 0.15;
    else if (gross >= 20000)
        tax = gross * 0.12;
    else if (gross >= 10000)
        tax = gross * 0.1;
    else
        tax = 0;
    net = gross - tax;
}

void Salary::output()
{
    cout << "\nGross Salary: " << gross
         << "\nTax: " << tax
         << "\nNet Salary: " << net;
}
