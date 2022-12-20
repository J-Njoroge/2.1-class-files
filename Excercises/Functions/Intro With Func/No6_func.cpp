#include<iostream>
using namespace std;
double Temp_conv(double celcius);

int main ()
{
    int cel, fah;

    cout<<"Enter temperature in degrees Celsius -> ";
    cin>>cel;
    cout<<endl;

    fah = Temp_conv(cel);

    cout<<"The temperature in degrees Fahrenheit is "<<fah<<"\n\n";
    return 0;
}
double Temp_conv(double celcius)
{
    double fahrenheit;
    fahrenheit = (celcius * 9/5) + 32;
    return fahrenheit;
}
