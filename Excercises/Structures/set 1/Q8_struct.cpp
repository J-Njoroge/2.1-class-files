#include<iostream>
using namespace std;
struct Speeding
{
    int speed, excess_speed, speed_limit;
};

int main ()
{
    Speeding spd1;

    cout<<"Enter speed of the vehicle -> ";
    cin>>spd1.speed;
    cout<<"Enter speed limit -> ";
    cin>>spd1.speed_limit;



    spd1.excess_speed = spd1.speed - spd1.speed_limit;

    if (spd1.excess_speed <= 30 && spd1.excess_speed > 0)
    {
        cout<<"The excess speed is "<<spd1.excess_speed<<endl<<" The levied fine is Ksh. 2500";
    }
    else if (spd1.excess_speed > 30 )
    {
        cout<<"The over speed is "<<spd1.excess_speed<<endl<<" The levied fine is Ksh. 4000";
    }
    else
    {
        cout<<"You have not exceeded the speed limit"<<endl<<"No fine";
    }
    cout<<"\n\n";
    return 0;
}
