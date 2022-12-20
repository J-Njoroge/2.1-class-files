#include<iostream>
using namespace std;
int main ()
{
    int value;

    cout<<"Enter integer -> ";
    cin>>value;

    if (value > 0)
    {
        cout<<value<<" is POSITIVE"<<endl;
    }
    else if (value < 0)
    {
        cout<<value<<" is NEGATIVE"<<endl;
    }
    else
    {
        cout<<value<<" is ZERO"<<endl;
    }
    return 0;
}
