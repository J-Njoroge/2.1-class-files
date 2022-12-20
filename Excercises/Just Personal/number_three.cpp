 #include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"The numbers divisible by 8 between 1 and 200 are: ";

    for(num = 1; num <= 200; num++)
    {
        if(num % 8 == 0)
        {
            cout<<"\n"<<num;
        }
    }
    cout<<"\n\n";
    return 0;
}
