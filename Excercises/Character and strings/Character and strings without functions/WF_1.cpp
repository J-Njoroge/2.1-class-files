#include<iostream>
using namespace std;
int main ()
{
    char ch;
     cout<<"Enter a character -> ";
     cin>>ch;
     cout<<endl;

    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        cout<<"The character is a letter: ";
    }

    else if(ch >= '0' || ch <= '9')
    {
        cout<<"The character is a digit: ";
    }

    else
        cout<<"The character is a special character: ";

    cout<<endl;
    return 0;
}
