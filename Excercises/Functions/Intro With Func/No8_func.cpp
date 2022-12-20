#include<iostream>
using namespace std;
double Meters_conv(double kilometers);

int main()
{
    double km, m;

    cout<<"Enter measurements in kilo meters -> ";
    cin>>km;

    m = Meters_conv(km);

    cout<<"The measurements of "<<km<<" kilo meters "<<" = "<<m<<" meters"<<"\n\n";

    return 0;
}
double Meters_conv(double kilometers)
{
    double meters;
    meters = kilometers * 1000;
    return (meters);

}
