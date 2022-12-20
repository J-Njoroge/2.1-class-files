#include<iostream>
using namespace std;
int main()
{
    int num, sqr, cube;

    cout<<"Number\t"<<"Square\t"<<"Cube"<<endl;

    for(num = 2; num <= 10; num++)
    {
        sqr = num * num;
        cube = num * num * num;

        cout<<num<<"\t"<<sqr<<"\t"<<cube<<endl;
    }
    cout<<"\n\n";
}
