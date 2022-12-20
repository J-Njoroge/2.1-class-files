#include<iostream>
using namespace std;
int main()
{
    int num, sqr, cube;

    cout<<"Number \t"<<"Square \t"<<"Cube"<<endl;

    num = 2;
    do{
        sqr = num * num;
        cube = num * num * num;

        cout<<num<<"\t"<<sqr<<"\t"<<cube<<endl;

        num++;
        }while(num <= 10);

        cout<<"\n\n";
        return 0;
}
