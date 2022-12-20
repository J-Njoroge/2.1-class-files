#include<iostream>
using namespace std;
int main ()
{
    int intg, sum = 0, sqr;
    intg = 1;

    while(intg <= 15)
    {
        sqr = intg * intg;
        sum = sum + sqr;
        intg++;
    }
     cout<<"The sum of the first 15 -> "<<sum<<endl;
    return 0;
}
