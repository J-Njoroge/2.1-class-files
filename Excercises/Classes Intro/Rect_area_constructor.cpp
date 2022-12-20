#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length,width;
    float area,perimeter;
public:
    Rectangle(int leng, int wid, float ar, float perim);
    Rectangle(int leng, int wid);
    Rectangle();
    void input(),compute(),output();

};

int main()
{
    Rectangle  rect1;

    /*cout<<"Data entry for the rectangle is:"
        <<"\n--------------------------------\n";
    rect1.input();*/

    rect1.compute();
    cout<<endl<<"Data analysis for the rectangle is:"
        <<"\n-----------------------------------\n";
    rect1.output();
    cout<<endl;

    return 0;
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

