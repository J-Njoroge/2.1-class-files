#include<iostream>
using namespace std;
struct Distance
{
    double mins, hrs, m, km, spd;
};

int main ()
{
    Distance dist1;

    cout<<"Distance traveled in meters -> ";
    cin>>dist1.m;
    cout<<"Time taken in minutes -> ";
    cin>>dist1.mins;

    dist1.km = dist1.m / 1000;
    dist1.hrs = dist1.mins / 60;
    dist1.spd = dist1.km / dist1.hrs;

    cout<<"The speed is "<<dist1.spd<<" km/hr"<<"\n\n";

    return 0;
}
