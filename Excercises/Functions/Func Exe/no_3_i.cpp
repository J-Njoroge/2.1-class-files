#include<iostream>
using namespace std;
int small(int num_1, int num_2, int  num_3);
int main()
{
    int num1, num2, num3, sma;

    cout<<"Enter three integers -> ";
    cin>>num1>>num2>>num3;
    cout<<endl;

    sma = small(num1, num2, num3);

    cout<<"The smallest number among "<<num1<<"\t"<<num2<<"\t"<<num3<<" is : "<<sma;
    return 0;
}
int small(int num_1, int num_2, int  num_3)
{
    int smallest;

    if (num_1 < num_2 && num_1 < num_3)
    {
        smallest = num_1;
        return(smallest);
    }
    else if (num_2 < num_1 && num_2 < num_3)
    {
        smallest = num_2;
        return(smallest);
    }
    else if (num_3 < num_1 && num_3 < num_2)
    {
        smallest = num_3;
        return(smallest);
    }
return 0;
}
