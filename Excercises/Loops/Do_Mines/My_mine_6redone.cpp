#include<iostream>
using namespace std;
int main ()
{
    int remainder, num, sum;

    cout<<"Enter a number -> ";
    cin>>num;

    sum = 0;

    while(num != 0)
    {
        remainder = num % 10;//separating each digit in the number by getting remainder value
        sum = sum + remainder;//adding the current remainder value to our variable sum
        num = num / 10;//getting the remaining quotient value so long as it's not =0 or > than zero the loop
        /*continues to get the rem values which will be stored in num at (rem=num%10)*/

    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}
