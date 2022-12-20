#include<iostream>
using namespace std;
int main ()
{
    int sum, num;

    cout<<"Enter integer -> ";
    cin>>num;

    sum = 0;
    do
    {
        sum = sum + num % 10;
        num = num / 10;
    }while(num !=0);
    cout << "\nThe sum of the digits : "<< sum<<endl;

    return 0;
}
