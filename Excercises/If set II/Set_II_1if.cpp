#include<iostream>
using namespace std;
int main ()
{
    int value;

    cout<<"Enter an integer -> ";
    cin>>value;

    if (value %2 == 0)
    {
        cout<<value<<" is EVEN"<<endl;
    }
    else
        cout<<value<<" is ODD"<<endl;

        return 0;
}
