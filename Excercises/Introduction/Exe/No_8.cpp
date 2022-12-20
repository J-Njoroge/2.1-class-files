#include<iostream>
using namespace std;
int main()
{
    double km, m;

    cout<<"Enter measurements in kilo meters -> ";
    cin>>km;

    m = km * 1000;

    cout<<"The measurements of "<<km<<" kilo meters "<<" = "<<m<<" meters"<<"\n\n";

    return 0;
}
