#include<iostream>
using namespace std;
int main ()
{
    int num_1, num_2, num_3, sum, prod, ave;

    cout<<"Enter three numbers -> ";
    cin>>num_1>>num_2>>num_3;

    sum = num_1 + num_2 + num_3;
    prod = num_1 * num_2 * num_3;
    ave = num_1 + num_2 + num_3 / 3;

    cout<<"The sum of "<<num_1<<" and "<<num_2<<" and "<<num_3<<" is "<<sum<<endl;
    cout<<"The prod of "<<num_1<<" and "<<num_2<<" and "<<num_3<<" is "<<prod<<endl;
    cout<<"The ave of "<<num_1<<" and "<<num_2<<" and "<<num_3<<" is "<<ave<<endl;
    return 0;
}
