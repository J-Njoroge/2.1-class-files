#include<iostream>
using namespace std;
main ()
{
	double num_one, num_two, total;
	
	cout<< "Enter the first number -> ";
	cin>> num_one;
	cout<< "Enter the second number -> ";
	cin>> num_two;
	
	total = num_one + num_two;
	
	cout<< "\nThe sum of " <<num_one <<" and " <<num_two <<" is " <<total<<"\n\n";
	
	return 0;
}
