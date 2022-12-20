#include<iostream>
using namespace std;
struct Figures
{
    int area, perim, rad, choice, wid, leng, base, heig, hyp;
};

int main ()
{
    Figures fig1;

    cout<<"** Choose from menu **"<<endl;
    cout<<"1.Rectangle                 "<<endl;
    cout<<"2.Right angled Triangle     "<<endl;
    cout<<"3.Circle                    "<<endl;
    cout<<endl;

    cout<<"Enter your option -> ";
    cin>>fig1.choice;

    if (fig1.choice == 1)
    {
        cout<<"Enter the dimensions of the rectangle-> ";
        cin>>fig1.wid>>fig1.leng;

        fig1.area = fig1.leng * fig1.wid;
        fig1.perim = 2 * (fig1.leng + fig1.wid);

        cout<<"The area is "<<fig1.area<<" and the perimeter is "<<fig1.perim<<endl;
    }
    else if (fig1.choice == 2)
    {
        cout<<"Enter the dimensions of the right angled triangle -> ";
        cin>>fig1.base>>fig1.heig>>fig1.hyp;

        fig1.area = 0.5 * fig1.base * fig1.heig;
        fig1.perim = fig1.base + fig1.heig + fig1.hyp;

        cout<<"The area is "<<fig1.area<<" and the perimeter is "<<fig1.perim<<endl;
    }
    else if (fig1.choice == 3)
    {
        cout<<"Enter the radius of the circle -> ";
        cin>>fig1.rad;

        fig1.area = 22.0/7 * fig1.rad * fig1.rad;
        fig1.perim = 22.0/7 * (fig1.rad + fig1.rad);

         cout<<"The area is "<<fig1.area<<" and the perimeter is "<<fig1.perim<<endl;
    }
    cout<<"\n\n";
    return 0;
}
