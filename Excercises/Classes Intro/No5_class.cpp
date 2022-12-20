#include<iostream>
using namespace std;
class Meters
{
private:
    int cm, m;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
    Meters conv1;

    conv1.input();
    conv1.compute();
    conv1.output();

    return 0;
}
void Meters::input()
{
    cout<<"Enter measurements in cm -> ";
    cin>>cm;
    cout<<endl;
}
void Meters::compute()
{
   m = cm / 100;
}
void Meters::output()
{
  cout<<"The measurements in meters is "<<m<<"\n\n";
}
