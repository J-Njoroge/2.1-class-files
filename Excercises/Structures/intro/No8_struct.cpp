#include<iostream>
using namespace std;
struct Meters_conv
{
    double km, m;
};

int main()
{
   Meters_conv mtr1;

    cout<<"Enter measurements in kilo meters -> ";
    cin>>mtr1.km;

    mtr1.m = mtr1.km * 1000;

    cout<<"The measurements of "<<mtr1.km<<" kilo meters "<<" = "<<mtr1.m<<" meters"<<"\n\n";

    return 0;
}
