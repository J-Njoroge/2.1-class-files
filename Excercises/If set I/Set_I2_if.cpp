#include<iostream>
using namespace std;
int main ()
{
    int num_1, num_2, ans, Operand;

    cout<<"** Choose Operand **"<<endl;
    cout<<"1. + "<<endl;
    cout<<"2. * "<<endl;
    cout<<"3. - "<<endl;
    cout<<"4. / "<<endl;
    cout<<"5. % "<<endl;
    cout<<endl;

    cout<<"Enter two numbers -> ";
    cin>>num_1>>num_2;
    cout<<"Enter your choice -> ";
    cin>>Operand;

    if (Operand == 1)
    {
        cout<<"The sum of "<<num_1<<" and "<<num_2<<" is "<<num_1 + num_2<<endl;
    }
    else if (Operand == 2)
    {
        cout<<"The product of "<<num_1<<" and "<<num_2<<" is "<<num_1 * num_2<<endl;
    }
    else if (Operand == 3)
    {
        cout<<"The difference of "<<num_1<<" and "<<num_2<<" is "<<num_1 - num_2<<endl;
    }
    else if (Operand == 4)
    {
        cout<<"The quotient of "<<num_1<<" and "<<num_2<<" is "<<num_1 / num_2<<endl;
    }
    else if (Operand == 5)
    {
        cout<<"The percentage of "<<num_1<<" and "<<num_2<<" is "<<(num_1 / num_2) * 100<<endl;
    }
    else
        cout<<"Invalid";

    cout<<"\n\n";
    return 0;

}
