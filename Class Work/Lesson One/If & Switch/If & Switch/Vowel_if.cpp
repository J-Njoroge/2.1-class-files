#include<iostream.h>
int main( )
{
	char letter;
	 
	cout<<"Enter a character : ";
	cin>>letter;

	if (letter == 'a' || letter == 'A')
		cout<<"\nThe character "<<letter<<" is a vowel";
	else if (letter == 'e' || letter == 'E')
		cout<<"\nThe character is a vowel";
	else if (letter == 'i' || letter =='I') 
		cout<<"\nThe character "<<letter<<" is a vowel";
	else if (letter == 'o' || letter =='O')
		cout<<"\nThe character "<<letter<<" is a vowel";
	else if (letter == 'u' || letter == 'U')
		cout<<"\nThe character "<<letter<<" is a vowel";
	else
		cout<<"\nThe character "<<letter<<" is not a vowel";

	cout<<"\n\n";
	return 0;
}