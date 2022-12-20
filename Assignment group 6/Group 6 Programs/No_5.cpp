#include<iostream>
using namespace std;
int main()
{
    int item_code[50], qty[50], price[50], total_cost[50];
    float discount[50], net[50], total_amount = 0;
    int items;

    cout<<"Enter the number of items -> ";
    cin>>items;

    for (int i = 0; i < items; i++)
    {
        cout<<"Enter the item code -> ";
        cin>>item_code[i];

        cout<<"Enter the price -> ";
        cin>>price[i];

        cout<<"Enter quantity -> ";
        cin>>qty[i];


        total_cost[i] = qty[i] * price[i];

        if (total_cost[i] > 20000)
        {
            discount[i] = 0.14 * total_cost[i];
        }
        else if(total_cost[i] >= 10000 && total_cost[i] <= 20000)
        {
            discount[i] = 0.1 * total_cost[i];
        }
        else
        {
            discount[i] = 0;
        }

        net[i] = total_cost[i] - discount[i];
        total_amount = total_amount + net[i];
    }

    cout << "Item Code\t"<<"Price\t"<<"Quantity\t"<<"Total Cost\t"<<"Discount\t"<<"Net"<<"\n";

    for (int i = 0; i < items; i++)
    {
        cout<<item_code[i]<<"\t\t"<<price[i]<<"\t"<<qty[i]<<"\t\t"<< total_cost[i] << "\t\t"<< discount[i]<< "\t\t"<<net[i]<<"\n";
    }
    cout << "The total amount payable is: "<<total_amount ;

    cout <<"\n\n";
    return 0;
}
