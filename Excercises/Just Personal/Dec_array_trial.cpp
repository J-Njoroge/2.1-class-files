#include<iostream>
using namespace std;
int main ()
{
    int k, num[5], sum = 0;
    float ave;

    for(k = 0; k < 5; k++)
    {
        cout<<"\nEnter the numbers "<<k + 1<<": ";
        cin>>num[k];
    }

    cout<<"\nThe numbers you entered are: ";
    for(k = 0; k < 5; k++)
    {
        cout<<num[k]<<"\t";

        sum = sum + num[k];
        ave = sum / 5;

    }
    cout<<"\nThe total sum is: "<<sum
        <<"\nThe average is: "<<ave
        <<endl;
    return 0;
}
