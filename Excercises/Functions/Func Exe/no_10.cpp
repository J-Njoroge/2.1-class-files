#include<iostream>
using namespace std;

double temp_conv(double fahr);

int main ()
{
    double temp, cel;

    cel = temp_conv(temp);
    cout<<cel;

    cout<<endl;
    return 0;
}
double temp_conv(double fahr)
{
    int result;

    for(fahr = 30; fahr <=300; fahr++)
    {
        result = (fahr * (5/9) - 32);
        return(result);
    }
    return 0;
}
