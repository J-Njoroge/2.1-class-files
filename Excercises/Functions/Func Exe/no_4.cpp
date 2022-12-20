#include<iostream>
using namespace std;

 int even( int num);

 int main()
 {
     int number, func;

     cout<<"Enter an integer -> ";
     cin>>number;
     cout<<endl;

     func = even(number);

     cout<<" "<<func<<endl;

     return 0;
 }
 int even( int num)
 {
    if (num %2 == 0)
    {
        return(1);
    }
    else
        return(0);
 }
