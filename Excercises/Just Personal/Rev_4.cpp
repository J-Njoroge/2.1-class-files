#include<iostream>
using namespace std;
int main()
{
    char option;

    cout<<"**Category       Name**\n";
    cout<<"1.G             Gold Member\n";
    cout<<"2.S             Silver Member\n";
    cout<<"3.B             Bronze Member\n";
    cout<<"4.X             Ordinary Member\n";

    cout<<"Enter your Category : ";
    cin>>option;
    cout<<endl;

    switch(option)
    {
    case 'G':
        cout<<"Gold Member";
        break;
    case 'S':
        cout<<"Silver Member";
        break;
    case 'B':
        cout<<"Bronze Member";
        break;
    case 'X':
        cout<<"Ordinary Member";
        break;
    default:
        cout<<"Category is invalid";
    }
    cout<<"\n\n";
    return 0;
}
