#include<iostream>
using namespace std;
int main()
{
  int original_number, reversed_number = 0, remainder;

  cout << "Enter an integer: ";
  cin >> original_number;
  cout<<endl;

  do
  {
    remainder = original_number % 10;
    reversed_number = reversed_number * 10 + remainder;
    original_number /= 10;
  }while(original_number != 0);

  cout << "Reversed Number = " << reversed_number<<endl;

  return 0;
}




