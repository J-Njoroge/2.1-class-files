#include<iostream>
using namespace std;
int main ()
{
    int temp, fah;

    cout<<"Enter temperature in degrees Celsius -> ";
    cin>>temp;

    fah = (temp * 9/5) + 32;

    cout<<"The temperature in degrees Fahrenheit is "<<fah<<"\n\n";

    return 0;
}
