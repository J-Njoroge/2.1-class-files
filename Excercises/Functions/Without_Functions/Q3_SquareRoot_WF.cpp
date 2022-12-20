#include<iostream>
using namespace std;
int main()
{
    float i, number;

    cout<<"Enter a Number: ";
    cin>>number;
    cout<<endl<<"The square root is : ";

    for(i = 1;i <= (number/2); i = i + 0.0001)
    {

       if(i * i >= number)
       {
            cout<<i;
        break;
       }

    }
    cout<<"\n\n";
    return 0;
}
