#include<iostream>
using namespace std; 

int main()
{
    int deposit,rate,year,target_amount;
    float profit,compounded_amount;

    //input from the users//
    cout<<"Enter your deposit : ";
    cin>>deposit;
    cout<<"\nEnter the interest_rate : ";
    cin>>rate;
    cout<<"\nEnter your target amount : ";
    cin>>target_amount;
    
    //calculation//

    {
        for(year = 1; year != 0;year++)
        {
            if(year == 1)
            {
                profit = deposit * rate / 100.0;
                compounded_amount = deposit + profit;
            }
            else
            {
                profit = rate/100.0 * compounded_amount;
                compounded_amount += profit;
            }
            if(compounded_amount >= target_amount)
                goto ending;
        }
        printf("\n");
    }

    //output//
ending:
    cout<<"\n It will take "<<year<<" years for your amount to reach your target";
    cout<<"\n By the end of the period the amount in your period will be : "<<compounded_amount<<" ksh";

    cout<<"\n\n";

    return 0;
}
