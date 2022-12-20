#include<iostream>
using namespace std;
int main ()
{
    int num_1, num_2, ans, Operand;

    cout<<"** Choose an Operator **"<<endl;
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

    switch (Operand)
    {
        case 1: cout<<"The sum of "<<num_1<<" and "<<num_2<<" is "<<num_1 + num_2<<endl;
        break;
        case 2: cout<<"The product of "<<num_1<<" and "<<num_2<<" is "<<num_1 * num_2<<endl;
        break;
        case 3: cout<<"The difference of "<<num_1<<" and "<<num_2<<" is "<<num_1 - num_2<<endl;
        break;
        case 4: cout<<"The quotient of "<<num_1<<" and "<<num_2<<" is "<<num_1 / num_2<<endl;
        break;
        case 5: cout<<"The percentage of "<<num_1<<" and "<<num_2<<" is "<<(num_1 / num_2) * 100<<endl;
        break;
        default: cout<<"Invalid";
        break;

        cout<<"\n\n";
        return 0;
    }
}
