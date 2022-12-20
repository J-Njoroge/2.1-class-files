#include<iostream>
using namespace std;
class Figures
{
private:
    int area, perim, rad, choice, wid, leng, base, heig, hyp;
public:
    void input();
    void compute();
    void output();
};

int main ()
{
    Figures fig1, fig2, fig3;

    fig1.input();
    fig1.compute();
    fig1.output();

    fig2.input();
    fig2.compute();
    fig2.output();

    fig3.input();
    fig3.compute();
    fig3.output();

    cout<<"\n\n";
    return 0;
}
void Figures::input()
{
    cout<<"Enter your option -> ";
    cin>>choice;

    if (choice == 1)
    {
       cout<<"Enter the dimensions of the rectangle-> ";
       cin>>wid>>leng;
    }
   else if (choice == 2)
    {
       cout<<"Enter the dimensions of the right angled triangle -> ";
       cin>>base>>heig>>hyp;
    }
   else if (choice == 3)
    {
       cout<<"Enter the radius of the circle -> ";
       cin>>rad;
    }

}
void Figures::compute()
{
   if (choice == 1)
   {
      area = leng * wid;
      perim = 2 * (leng + wid);
   }
  else if (choice == 2)
   {
      area = 0.5 * base * heig;
      perim = base + heig + hyp;
   }
  else if (choice == 3)
   {
       area = 22.0/7 * rad * rad;
       perim = 22.0/7 * (rad + rad);
   }
}
void Figures::output()
{
    cout<<"The area is "<<area<<" and the perimeter is "<<perim<<endl;
}
