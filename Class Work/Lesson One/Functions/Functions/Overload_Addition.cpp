#include<iostream.h>
double add(double a,double b);
double add(double a,double b,double c);
double add(double a,double b,double c,double d);
int main() 
{
	double x,y,z,q;
	
	cout<<"Enter four numbers: ";
	cin>>x>>y>>z>>q;
	
	cout<<"\n"<<x<<" + "<<y<<" = "<<add(x,y);
	cout<<"\n"<<x<<" + "<<y<<" + "<<z <<" = "<<add(x,y,z);
	cout<<"\n"<<x<<" + "<<y<<" + "<<z <<" + "<< q <<" = "<<add(x,y,z,q);
	
	cout<<"\n\n";
	return 0;
}
double add(double a, double b)
{
	double sum;
	sum = a + b;
	return sum;
}

double add(double a, double b, double c)
{
	double sum;
	sum = a + b + c;
	return sum;
}

double add(double a, double b, double c, double d)
{
	double sum;
	sum = a + b + c + d;
	return sum;
}
