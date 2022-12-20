#include<iostream.h>
double get_sum(double x, double y, double z);
double get_prod(double x, double y, double z);
int main()
{
	double a, b, c, total, prod;

	cout<<"Enter three numbers: ";
	cin>>a>>b >>c;

	total = get_sum(a,b,c);
	prod = get_prod(a,b,c);

	cout<<endl<<a<<" + "<<b<<" + "<<c <<" = "<<total;
	cout<<endl<<a <<" * "<<b <<" * "<<c <<" = "<<prod;

	cout<<"\n\n";
	return 0;
}

double get_sum (double x, double y, double z)
{
	double sum;
	sum = x + y + z;
	return sum;
}

double get_prod (double x, double y, double z)
{
	double product;
	product = x * y * z;
	return product;
}
