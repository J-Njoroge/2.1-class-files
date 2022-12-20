#include<iostream>
using namespace std;
double rect_area(double width, double length);//function prototype
int main ()
{
    double wid, leng, ar;

    cout<<"Enter the width and length -> ";
    cin>>wid>>leng;
    cout<<endl;

    ar = rect_area(wid, leng);

    cout<<"The area is "<<ar<<endl;

    return 0;
}
double rect_area(double width, double length)
{
   double area;

    area = width * length;

    return area;
}
