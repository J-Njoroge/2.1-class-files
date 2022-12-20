#include<iostream>
using namespace std;
class Distance
{
private:
    double mins, hrs, m, km, spd;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
    Distance dist1;

    dist1.input();
    dist1.compute();
    dist1.output();
    return 0;
}
void Distance::input()
{
    cout<<"Distance traveled in meters -> ";
    cin>>m;
    cout<<"Time taken in minutes -> ";
    cin>>mins;
}
void Distance::compute()
{
    km = m / 1000;
    hrs = mins / 60;
    spd = km / hrs;
}
void Distance::output()
{
    cout<<"The speed is "<<spd<<" km/hr"<<"\n\n";
}
