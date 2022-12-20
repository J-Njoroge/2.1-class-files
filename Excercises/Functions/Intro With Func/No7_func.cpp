#include<iostream>
using namespace std;
int Distance(int kilometers, int hours);

int main ()
{
    double mins, hrs, m, km, spd;

    cout<<"Distance traveled in meters -> ";
    cin>>m;
    cout<<"Time taken in minutes -> ";
    cin>>mins;

    km = m / 1000;
    hrs = mins / 60;
    spd = Distance(hrs, km);

    cout<<"The speed is "<<spd<<" km/hr"<<"\n\n";

    return 0;
}
int Distance(int kilometers, int hours)
{
    int speed;
    speed = kilometers / hours;
    return (speed);
}
