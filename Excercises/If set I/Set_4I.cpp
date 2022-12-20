#include<iostream>
using namespace std;
int main ()
{
    int num_1, num_2;

    cout<<"Enter two numbers -> ";
    cin>>num_1>>num_2;

    if(num_1 > num_2)
    {
        cout<<"The difference of "<<num_1<<" and "<<num_2<<" is "<<num_1 - num_2<<endl;
    }
    else if(num_2 > num_1)
    {
        cout<<"The quotient of "<<num_2<<" and "<<num_1<<" is "<<num_2 / num_1<<endl;
    }
    else
        cout<<"The sum of the two numbers is -> "<<num_1 + num_2<<endl;

    return 0;
}
