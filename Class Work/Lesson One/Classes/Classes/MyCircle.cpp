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
	MyCircle circle1;

	circle1.input();
	circle1.calculate();
	circle1.output();

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
