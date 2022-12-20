#include<iostream>
using namespace std;
int main ()
{
    int wid, leng, area, perim;

    cout<<"Enter the width and length of a rectangle -> ";
    cin>>wid>>leng;

    area = wid * leng;
    perim = 2 * (wid + leng);

    cout<<"The area of the rectangle is "<<area<<" and the perimeter is "<<perim<<"\n\n";

    return 0;
}
