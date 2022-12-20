#include <iostream>
using namespace std;
struct Conversion
{
    double gms, kgs, packs;
};

int main ()
{
    Conversion conv1;

    cout<<"Enter the weight of a package in grams -> ";
    cin>>conv1.gms;
    cout<<endl;

    conv1.kgs = conv1.gms / 1000;
    conv1.packs = ((1000)/ conv1.gms * 1);

    cout<<"The weight of the package is "<<conv1.kgs<<" It takes "<<conv1.packs<<" such packages to form one kilogram"<<"\n\n";

    return 0;

}
