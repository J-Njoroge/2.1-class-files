#include<iostream>
using namespace std;
int sum(int num);
int main ()
{
    int ans, number;
     cout<<"Enter a number -> ";
     cin>>number;

      ans = sum(number);
      cout<<"The sum of the digits in "<<number<<" is "<<ans;

      return 0;
}
      int sum(int num)
      {
          int total_sum;
          sum = 0;
          do
           {
             total_sum = sum + num % 10;
             num = num / 10;
           }while(num !=0);
            return total_sum;
      }

