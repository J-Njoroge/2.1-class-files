#include<iostream>
using namespace std;

int calc_total(int integers);

int main ()
{
    int intg, total;

     total = calc_total(intg);

     cout<<"The total sum is "<<total<<endl;

     return 0;
}
int calc_total(int integers)
{
    int sum = 0;

     integers = 20;

    do
    {
        sum += integers;

        integers++;
    }while(integers <= 70);
    return(sum);
}

