#include<iostream.h>
class Rectangle
{
private:
	double width, length, area, perim;
public:
	Rectangle(double wid, double len);//Parameterized Constructor.
	Rectangle();//Default Constructor.
	void input(), compute(), output();
};
int main()
{
	Rectangle rect1(10,5),rect2;

	cout<<"Output for the first rectangle [First Time]:\n"
		<<"----------------------------------------------------------\n";
	rect1.compute();
	rect1.output();

	cout<<"\n\nOutput for the second rectangle [First Time]:\n"
		<<"----------------------------------------------------------\n";
	rect2.compute();
	rect2.output();

	cout<<"\n\nData entry for the first rectangle:\n"
		<<"----------------------------------------------------------\n";
	rect1.input();
	rect1.compute();

	cout<<"\n\nData entry for the second rectangle:\n"
		<<"----------------------------------------------------------\n";
	rect2.input();
	rect2.compute();

	cout<<"\n\nOutput for the first rectangle [Second Time]:\n"
		<<"----------------------------------------------------------\n";
	rect1.output();

	cout<<"\n\nOutput for the second rectangle [Second Time]:\n"
		<<"----------------------------------------------------------\n";
	rect2.output();

	cout<<"\n\n";
	return 0;
}

Rectangle::Rectangle (double wid, double len)
{
	width = wid;
	length = len;
}

Rectangle::Rectangle()
{
	width = 0;
	length = 0;
}

void Rectangle::input()
{
	cout<<"Enter the width and length of the rectangle: ";
	cin>>width>>length;
}

void Rectangle::compute()
{
	area = length * width;
	perim = 2 * (length + width);
}

void Rectangle::output()
{
	cout<<"Width = "<<width
		<<"\nLength = "<<length
		<<"\nArea = "<<area
		<<"\nPerimeter = "<<perim;
}
