#include<iostream>
using namespace std;
int main ()
{
    int speed, excess_speed, speed_limit;

    cout<<"Enter speed of the vehicle -> ";
    cin>>speed;
    cout<<"Enter speed limit -> ";
    cin>>speed_limit;



    excess_speed = speed -speed_limit;

    if (excess_speed <= 30 && excess_speed > 0)
    {
        cout<<"The excess speed is "<<excess_speed<<endl<<" The levied fine is Ksh. 2500";
    }
    else if (excess_speed > 30 )
    {
        cout<<"The over speed is "<<excess_speed<<endl<<" The levied fine is Ksh. 4000";
    }
    else
    {
        cout<<"You have not exceeded the speed limit"<<endl<<"No fine";
    }
    cout<<"\n\n";
    return 0;
}
