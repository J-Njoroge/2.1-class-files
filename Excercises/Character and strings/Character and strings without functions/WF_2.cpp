#include<iostream>
using namespace std;
int main ()
{
    char character;

    cout<<"Enter character -> ";
    cin>>character;
    cout<<endl;

    if(character >= 'A' && character <= 'Z')
    {
        cout<<"The character is uppercase:";
    }
    else if(character >= 'a' && character <= 'z')
    {
        cout<<"The character is lowercase:";
    }
    else
        cout<<character<<" is not a letter";

    cout<<endl;
    return 0;
}
