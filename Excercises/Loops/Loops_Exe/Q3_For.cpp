#include<iostream>
using namespace std;
int main ()
{
    int intg, sum = 0, sqr;

    for( intg = 1; intg <= 15; intg++)
    {
        sqr = intg * intg;
        sum = sum + sqr;
    }
     cout<<"The sum of the first 15 -> "<<sum<<endl;
    return 0;
}

