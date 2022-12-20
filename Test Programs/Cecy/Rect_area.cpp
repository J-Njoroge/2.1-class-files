#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length,width;
    float area,perimeter;
public:
    Rectangle();//Default Constructor
    Rectangle(double leng, double wid);//constructor
    void input(),compute(),output();
};
int main()
{
    Rectangle  rect1(12, 8), rect2;

    cout<<"Data entry for the rectangle is:"
        <<"\n--------------------------------\n";
    /*rect1.input();*/

    rect1.compute();
    rect2.compute();
    cout<<endl<<"Data analysis for the rectangle is:"
        <<"\n-----------------------------------\n";
    rect1.output();

    cout<<"\n-----Data analysis for the second rectangle is:-----";
    rect2.output();

    cout<<endl;
    return 0;
}
Rectangle::Rectangle()
{
    length = 4;
    width = 2;
}
Rectangle::Rectangle(double leng, double wid)//Constructor
{
    length = leng;
    width = wid;
}
void Rectangle::input()
{
    cout<<"\nEnter the length and width -> ";
    cin>>length>>width;
}
void Rectangle::compute()
{
     area = length * width;
     perimeter = 2 * (length + width);
}

void Rectangle::output()
{
    cout<<"\nThe area of the rectangle is "<<area<<endl;
    cout<<"\nThe perimeter of the rectangle is "<<perimeter<<endl;
}

