#include<iostream>
using namespace std;
class Speeding
{
private:
    int speed, excess_speed, speed_limit;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
    Speeding spd1;

    spd1.input();
    spd1.compute();
    spd1.output();

    return 0;
}
void Speeding::input()
{
    cout<<"Enter speed of the vehicle -> ";
    cin>>speed;
    cout<<"Enter speed limit -> ";
    cin>>speed_limit;
}
void Speeding::compute()
{
    excess_speed = speed -speed_limit;
}
void Speeding::output()
{
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
}
