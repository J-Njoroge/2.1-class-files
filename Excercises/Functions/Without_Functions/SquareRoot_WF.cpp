#include<iostream>
using namespace std;
int main ()
{
    int sqrt, number, countx;

    cout<<"Enter a number-> ";
    cin>>number;
    cout<<endl;

    for(countx = 1; countx <= number/2; countx++)
    {
        if( number == countx * countx)
        {
            cout<<"The square root of "<<number<<" is "<<countx<<endl;
            goto ending;
        }
    }

        cout<<"The square root of "<<number<<" is not a whole number "<<endl;
         ending:

        return 0;
}




