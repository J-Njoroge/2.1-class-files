#include<iostream>
using namespace std;

struct Rectangle
{
    int length,width;
    float area,perimeter;
};

int main()
{
    Rectangle  rect1;

    cout<<"\nEnter the length and width -> ";
    cin>>rect1.length>>rect1.width;

    rect1.area = rect1.length * rect1.width;
    rect1.perimeter = 2 * (rect1.length + rect1.width);

    cout<<"\nThe area of the rectangle is "<<rect1.area<<endl;
    cout<<"\nThe perimeter of the rectangle is "<<rect1.perimeter<<endl;

    return 0;
}


