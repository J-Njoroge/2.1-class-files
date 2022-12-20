#include<iostream>
using namespace std;
struct Temperature
{
    int temp, fah;
};

int main ()
{
   Temperature temp1;

    cout<<"Enter temperature in degrees Celsius -> ";
    cin>>temp1.temp;
    cout<<endl;

    temp1.fah = (temp1.temp * 9/5) + 32;

    cout<<"The temperature in degrees Fahrenheit is "<<temp1.fah<<"\n\n";

    return 0;
}
