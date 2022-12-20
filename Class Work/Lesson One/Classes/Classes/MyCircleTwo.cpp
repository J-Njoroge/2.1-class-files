#include<iostream.h>
class MyCircle
{
private:
	double radius, circum, area;
public:
	void calculate(),input(),output();
};

int main()
{
	MyCircle circle1,circle2;

	cout<<"Data entry for circle 1:\n"
		<<"-------------------------------------\n";
	circle1.input();
	circle1.calculate();

	cout<<"\nData entry for circle 2:\n"
		<<"-------------------------------------\n";
	circle2.input();
	circle2.calculate();

	cout<<"\n\nOutput for circle 1:\n"
		<<"-------------------------------------";
	circle1.output();

	cout<<"\n\nOutput for circle 2:\n"
		<<"-------------------------------------";
	circle2.output();

	cout<<"\n\n";

	return 0;
}

void MyCircle::input()
{
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
}

void MyCircle::output()
{
	cout<<"\nThe area = "<<area<<"\nCircumference = "<<circum;
}

void MyCircle::calculate()
{
	circum = 22.0 / 7 * radius * 2;
	area = 22.0 / 7 * radius * radius;
}
