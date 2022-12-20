#include<iostream>
using namespace std;
struct Triangle
{
    int area, heig, wid;
};

int main ()
{
    Triangle  tri1;

    cout<<"Enter the height and width of the right angled triangle -> ";
    cin>>tri1.heig>>tri1.wid;
    cout<<"\n";

    tri1.area = 0.5 * tri1.heig * tri1.wid;

    cout<<"The area of the right angled triangle is "<<tri1.area<<"\n\n";

    return 0;
}
