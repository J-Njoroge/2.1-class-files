#include<iostream>
using namespace std;

float large(float num_1, float num_2, float  num_3);

int main()
{
    float num1, num2, num3, lar;

    cout<<"Enter three integers -> ";
    cin>>num1>>num2>>num3;
    cout<<endl;

    lar = large(num1, num2, num3);

    cout<<"The largest number among "<<num1<<"\t"<<num2<<"\t"<<num3<<" is : "<<lar;
    return 0;
}
float large(float num_1, float num_2, float  num_3)
{
    float largest;

    if (num_1 > num_2 && num_1 > num_3)
    {
        largest = num_1;
        return(largest);
    }
    else if (num_2 > num_1 && num_2 > num_3)
    {
        largest = num_2;
        return(largest);
    }
    else if (num_3 > num_1 && num_3 > num_2)
    {
        largest = num_3;
        return(largest);
    }
return 0;
}
