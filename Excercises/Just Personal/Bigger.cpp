#include<iostream>
using namespace std;
int main ()
{
    int i, num[5], sum = 0, big, small;
    float ave;

    for(i = 0; i < 5; i++)
    {
        cout<<"\nEnter five numbers: "<<i + 1<<"-> ";
        cin>>num[i];
    }
    big = small = num[0];

    for(i = 1; i < 5; i++)
    {
        sum += num[i];

        if(num[i]>= big)
        {
            big = num[i];
        }
        else if(num[i] <= small)
        {
            small = num[i];
        }
    }
    ave = sum / 5;
    cout<<"\nBiggest number is: "<<big
            <<"\nSmallest number is: "<<small
            <<"\nThe sum is: "<<sum
            <<"\nThe average is: "<<ave
            <<endl;
    return 0;
}
