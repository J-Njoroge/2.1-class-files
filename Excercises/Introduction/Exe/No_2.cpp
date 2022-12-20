#include<iostream>
using namespace std;
int main ()
{
    int rad,area,circm;

    cout<<"Enter the radius -> ";
    cin>>rad;

    area = 22.0/7 * rad * rad;
    circm = 22.0/7 * (rad + rad);

    cout<<"The area of the circle is "<<area<<" and circumference is "<<circm<<"\n\n";

    return 0;
}
