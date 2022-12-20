#include<iostream>
using namespace std;
int main ()
{
    int power, square, integer, countx, output = 1;

    cout<<"Enter the integer -> ";
    cin>>integer;

    cout<<"Enter the power -> ";
    cin>>power;

    for(countx = 1; countx <= power; countx++)
    {
        output = output * integer;
    }
    cout<<"The answer is "<<output<<endl;

    return 0;
}
