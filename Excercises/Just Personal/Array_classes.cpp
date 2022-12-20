#include<iostream>
using namespace std;
class Rectangle
{
private:
    double area, perim, length, width;
public:
    void input(), compute(), output();

};

int main ()
{
    Rectangle rect[100];
    int i, lim;

    cout<<"\nHow many rectangles do you want to work with? ";
    cin>>lim;

    cout<<"\n**********Data Entry***********";
    for(i = 0; i< lim; i++)
    {
      cout<<"\nData entry for of the rectangle "<<i+1<<": \n";
      rect[i].input();

      rect[i].compute();
    }
    cout<<"\n**********Data Output***********";
    for(i = 0; i< lim; i++)
    {
      cout<<"\nRectangles"<<i+1<<": \n";
      rect[i].output();
    }
    return 0;
}
void Rectangle::input()
{
cout<<"Enter the length and width of the rectangle: ";
cin>>width>>length;
}
void Rectangle::compute()
{
area = length * width;
perim = 2 * (width + length);
}
void Rectangle::output()
{
cout<<"\nWidth = "<<width<<"\nLength = "<<length;
cout<<"\nArea = "<<area<<"\nPerimeter = "<<perim;
cout<<endl;
}
