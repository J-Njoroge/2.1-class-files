#include<iostream>
using namespace std;
class Salary
{
private:
    double gross, tax, net;
public:
    Salary(double gross_pay, double tax_rate, double net_pay);//parameterized constructor
    Salary();//default constructor
    void input(), compute(), output();
};
int main()
{
    Salary pay1(40000, 5000, 90000);

    pay1.input();
    pay1.compute();
    pay1.output();


    cout << "\n\n";
    return 0;
}
Salary::Salary()//default constructor with member functions initialized to zero
{
    gross = 0;
    tax = 0;
    net = 0;
}
Salary::Salary(double gross_pay, double tax_rate, double net_pay)
{
    gross = gross_pay;
    tax = tax_rate;
    net = net_pay;
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


