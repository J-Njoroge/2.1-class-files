#include<iostream>
using namespace std;
int main ()
{
    int num, ans;

    cout<<"Enter a number -> ";
    cin>>num;

    if (num %9 == 0 && num %2 == 0)
    {
        ans = num / 9;
        cout<<num<<" is evenly divisible by 9"<<endl;
    }
    else if (num %9 == 0 && num %2 != 0)
    {
        ans = num / 9;
        cout<<num<<" is divisible by 9 but it is odd"<<endl;
    }
    return 0;
}
