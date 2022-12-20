#include<iostream>
using namespace std;
int main ()
{
    int area, perim, rad, choice, wid, leng, base, heig, hyp;

    cout<<"** Choose from menu **"<<endl;
    cout<<"1.Rectangle                 "<<endl;
    cout<<"2.Right angled Triangle     "<<endl;
    cout<<"3.Circle                    "<<endl;
    cout<<endl;

    cout<<"Enter your option -> ";
    cin>>choice;

    if (choice == 1)
    {
        cout<<"Enter the dimensions of the rectangle-> ";
        cin>>wid>>leng;

        area = leng * wid;
        perim = 2 * (leng + wid);

        cout<<"The area is "<<area<<" and the perimeter is "<<perim<<endl;
    }
    else if (choice == 2)
    {
        cout<<"Enter the dimensions of the right angled triangle -> ";
        cin>>base>>heig>>hyp;

        area = 0.5 * base * heig;
        perim = base + heig + hyp;

        cout<<"The area is "<<area<<" and the perimeter is "<<perim<<endl;
    }
    else if (choice == 3)
    {
        cout<<"Enter the radius of the circle -> ";
        cin>>rad;

        area = 22.0/7 * rad * rad;
        perim = 22.0/7 * (rad + rad);

         cout<<"The area is "<<area<<" and the perimeter is "<<perim<<endl;
    }
    cout<<"\n\n";
    return 0;
}
