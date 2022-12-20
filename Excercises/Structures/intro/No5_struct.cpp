#include<iostream>
using namespace std;
struct Meters
{
    int cm, m;
};

int main ()
{
    Meters conv1;

    cout<<"Enter measurements in cm -> ";
    cin>>conv1.cm;
    cout<<endl;

     conv1.m = conv1.cm / 100;

    cout<<"The measurements in meters is "<<conv1.m<<"\n\n";
    return 0;
}
