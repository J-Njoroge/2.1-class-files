#include<iostream>
using namespace std;
int main ()
{
    int va1,va2 ;

    cout<<"Enter two numbers -> ";
    cin>>va1>>va2;

    if(va1 > va2)
     {
         cout<<"The quotient is "<<va1 / va2<<endl;
     }
     else if (va2 > va1)
     {
         cout<<"The quotient is "<<va2 / va1<<endl;
     }
     else if (va1 == 0 || va2 == 0)
     {
         cout<<"Enter a valid value"<<endl;
     }
     cout<<endl;
     return 0;

}
