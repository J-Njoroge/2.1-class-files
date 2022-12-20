#include<iostream>
using namespace std;
 struct payment
{
    float income,gender,option,tax,salary;
};

int main()
{
    struct payment   payer_1;

    cout<<("\npayer_1.option                    gender\n");
    cout<<("\n1.                         Female\n");
    cout<<("\n2.                         Male\n   ");

    cout<<("\nEnter your gender -> ");
    cin>>payer_1.option;
    cout<<("\nEnter your income -> ");
    cin>>payer_1.income;

     if(payer_1.option == 1 && payer_1.income >= 15000)
    {
        payer_1.tax = payer_1.income * 0.14;
    }

    if(payer_1.option == 1 && payer_1.income <15000)
    {
        payer_1.tax = payer_1.income * 0.12;

    }
     else if (payer_1.option == 2 && payer_1.income >=14000)
    {
        payer_1.tax = payer_1.income * 0.15;

    }
    else if (payer_1.option == 2 && payer_1.income < 14000)
    {
       payer_1.tax = payer_1.income * 0.13;
    }
    cout<<"\nThe tax payable is "<<payer_1.tax<<endl;

    return 0;
}
