#include<iostream>
using namespace std;
int main ()
{
    int area, heig, wid;

    cout<<"Enter the height and width of the right angled triangle -> ";
    cin>>heig>>wid;

    area = 0.5 * heig * wid;

    cout<<"The area of the right angled triangle is "<<area<<"\n\n";

    return 0;
}
