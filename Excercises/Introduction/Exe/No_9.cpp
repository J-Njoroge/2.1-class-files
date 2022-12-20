#include <iostream>
using namespace std;
int main ()
{
    double gms, kgs, packs;

    cout<<"Enter the weight of a package in grams -> ";
    cin>>gms;

    kgs = gms / 1000;
    packs = ((1000)/ gms * 1);

    cout<<"The weight of the package is "<<kgs<<" It takes "<<packs<<" such packages to form one kilogram"<<"\n\n";

    return 0;

}
