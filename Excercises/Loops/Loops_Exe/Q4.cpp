#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    double num, rec;


    cout<<"Enter a number -> ";
    cin>>num;

    if(num == 0)
    {
        cout<<"Enter the number again";
    }
    else
        {
            rec = 1 / num;

     cout.setf(ios::fixed);
     cout.setf(ios::showpoint);
     cout.precision(3);

     cout<<"The reciprocal of "<<num<<" is "<<rec;
        }


}
