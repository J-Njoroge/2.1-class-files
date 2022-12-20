#include<iostream>
using namespace std;
int main()
{
    int sum, num, odd,even,remainder, sum_even, sum_odd;

    cout<<"Enter a number of choice -> ";
    cin>>num;
    cout<<endl;

    sum = 0;
    sum_even = 0;
    sum_odd = 0;

    while(num > 0)
    {
        remainder = num % 10;
        sum = sum + remainder;

        if(num %2 == 0)

           sum_even = sum_even + remainder;

        else
            sum_odd = sum_odd + remainder;

            num = num / 10;

    }
    cout<<"The sum of even digits is "<<sum_even<<endl<<"The sum of odd digits is "<<sum_odd<<endl
    <<"The sum of all digits is "<<sum<<endl;

	return 0;
}
