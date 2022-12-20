//NB: This program doesn't have a default constructor.
//If you have constructors in your program, you MUST have a default constructor.

#include<iostream.h>
class Rectangle
{
public:
	Rectangle(double wid, double len);//Parameterized Constructor.
	void input(), compute(), output();
private:
	double width, length, area, perim;
};
int main()
{
	Rectangle rect(10,5);

	rect.compute();

	cout<<"Output for the rectangle [First Time]:\n"
		<<"----------------------------------------------------------\n";
	rect.output();

	rect = Rectangle(20,10);
	rect.compute();

	cout<<"\n\nOutput for the rectangle [Second Time]:\n"
		<<"----------------------------------------------------------\n";
	rect.output();
	
	cout<<"\n\nData entry for the rectangle:\n"
		<<"----------------------------------------------------------\n";
	rect.input();
	rect.compute();

	cout<<"\n\nOutput for the rectangle [Third Time]:\n"
		<<"----------------------------------------------------------\n";
	rect.output();

	cout<<"\n\n";
	return 0;
}

Rectangle::Rectangle (double wid, double len)
{
	width = wid;
	length = len;
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
	cout<<"The area of the rectangle = "<<area
		<<"\nPerimeter = "<<perim;
}
