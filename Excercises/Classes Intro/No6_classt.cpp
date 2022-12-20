#include<iostream>
using namespace std;
class Temperature
{
private:
    int temp, fah;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
   Temperature temp1;

    temp1.input();
    temp1.compute();
    temp1.output();

    return 0;
}
void Temperature::input()
{
    cout<<"Enter temperature in degrees Celsius -> ";
    cin>>temp;
    cout<<endl;
}
void Temperature::compute()
{
    fah = (temp * 9/5) + 32;
}
void Temperature::output()
{
    cout<<"The temperature in degrees Fahrenheit is "<<fah<<"\n\n";
}
