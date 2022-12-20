#include<iostream>
#include<cstdio>
using namespace  std;

int main(){

    char group_id;

    cout<<"\n Enter your group Category : ";
    cin>>group_id;

switch(group_id)
{
    case 'G':
        cout<<"\nGold member";
        break;
    case 'S':
        cout<<"\n Silver Member";
        break;
    case 'B':
        cout<<"\n Bronze Member";
    case 'X':
        cout<<"\n Ordinary Member";
        break;
     default:
        cout<<"\n Group" <<group_id<<" is not a recognized group";
}

    return 0;
}
