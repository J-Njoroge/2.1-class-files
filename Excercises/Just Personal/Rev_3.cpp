
#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Numbers divisible by 8 are: \n";

    for(num = 1; num <200; num++)
    {
        if(num % 8 == 0)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}
