#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length,width;
    float area,perimeter;
public:
    void get_values ();
    void calculate ();
    void show_values();
};
int main()
{
    struct Rectangle  rect1;
    cout<<"Data entry for the rectangle:"
		<<"\n------------------------------------------------------------";
    rect1.get_values();

    rect1.calculate();
     cout<<"\n\nAnalysis for the rectangle:"
		<<"\n------------------------------------------------------------";

    rect1.show_values();

   cout<<"\n\n";
	return 0;
}
void Rectangle::get_values ()
{
   cout<<"\nEnter the length and width ->";
    cin>>length>>width;
}
void Rectangle::calculate ()
{
   perimeter = 2*( length + width);
    area = length * width;
}
void Rectangle::show_values()
{
   cout<<"\nThe perimeter is "<<perimeter;
    cout<<"\nThe area is "<<area;
}
