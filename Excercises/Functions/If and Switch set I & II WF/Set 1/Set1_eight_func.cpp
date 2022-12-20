#include<iostream>
using namespace std;
int Speeding(int speed, int speed_limit);

int main ()
{
    int spd, excess_spd, spd_limit;

    cout<<"Enter speed of the vehicle -> ";
    cin>>spd;
    cout<<"Enter speed limit -> ";
    cin>>spd_limit;

    excess_spd = Speeding(spd,spd_limit);

    if (excess_spd <= 30 && excess_spd > 0)
    {
        cout<<"The excess speed is "<<excess_spd<<endl<<" The levied fine is Ksh. 2500";
    }
    else if (excess_spd > 30 )
    {
        cout<<"The over speed is "<<excess_spd<<endl<<" The levied fine is Ksh. 4000";
    }
    else
    {
        cout<<"You have not exceeded the speed limit"<<endl<<"No fine";
    }
    cout<<"\n\n";
    return 0;
}
int Speeding(int speed, int speed_limit)
{
    int excess_speed;
    excess_speed = speed -speed_limit;
    return(excess_speed);
}

