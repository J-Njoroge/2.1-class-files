#include<iostream>
using namespace std;
int main ()
{
    double mins, hrs, m, km, spd;

    cout<<"Distance traveled in meters -> ";
    cin>>m;
    cout<<"Time taken in minutes -> ";
    cin>>mins;

    km = m / 1000;
    hrs = mins / 60;
    spd = km / hrs;

    cout<<"The speed is "<<spd<<" km/hr"<<"\n\n";

    return 0;
}
