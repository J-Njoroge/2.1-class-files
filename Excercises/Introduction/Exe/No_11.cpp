#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double num, sqr, sqroot, cb, cbroot;

    cout<<"Enter a number -> ";
    cin>>num;

    sqr = num * num;
    cb = num * num * num;
    sqroot = sqrt(num);
    cbroot = cbrt(num);

    cout<<"The square of the number = "<<sqr<<", cube = "<<cb<<", square root = "<<sqroot<<", and cube root = "<<cbroot<<"\n\n";

    return 0;
}
