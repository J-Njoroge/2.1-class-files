#include <iostream>
using namespace std;
class Conversion
{
private:
    double gms, kgs, packs;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
    Conversion conv1;

    conv1.input();
    conv1.compute();
    conv1.output();

    return 0;
}
void Conversion::input()
{
    cout<<"Enter the weight of a package in grams -> ";
    cin>>gms;
    cout<<endl;
}
void Conversion::compute()
{
    kgs = gms / 1000;
    packs = ((1000)/ gms * 1);
}
void Conversion::output()
{
   cout<<"The weight of the package is "<<kgs<<" It takes "<<packs
       <<" such packages to form one kilogram"<<"\n\n";
}

