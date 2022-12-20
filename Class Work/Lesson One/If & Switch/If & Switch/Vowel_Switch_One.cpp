#include<iostream.h>
int main( )
{
	char letter;
	 
	cout<<"Enter a character : ";
	cin>>letter;

	switch (letter)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': cout<<"\nThe character "<<letter<<" is a vowel";
		 break;
	default: cout<<"\nThe character "<<letter<<" is not a vowel";
	}
	cout<<"\n\n";
	return 0;
}