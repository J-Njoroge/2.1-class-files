#include<iostream>
using namespace std;
class Meters_conv
{
private:
    double km, m;
public:
    void input();
    void compute();
    void output();
};

int main()
{
   Meters_conv mtr1;

    mtr1.input();
    mtr1.compute();
    mtr1.output();

    return 0;
}
void Meters_conv::input()
{
    cout<<"Enter measurements in kilo meters -> ";
    cin>>km;
}
void Meters_conv::compute()
{
    m = km * 1000;
}
void Meters_conv::output()
{
  cout<<"The measurements of "<<km<<" kilo meters "
      <<" = "<<m<<" meters"<<"\n\n";
}
