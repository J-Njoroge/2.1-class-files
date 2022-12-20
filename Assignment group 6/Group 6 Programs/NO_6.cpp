#include <iostream>
using namespace std;

int main()
{
    int i, j, a, num, number[30];

    cout<<"\n Enter the numbers you want to enter : ";
    cin>>num;

    cout<<"\n Enter the numbers : "; //data input for the array//

  for (i = 0; i < num; ++i)
   {
    cin>>number[i];
   }
   cout<<" \n\t The initial array is : ";
    for(i = 0; i < num;i++)
    {
        cout<<number[i];
    }

     for (i = 0; i < num; ++i)
   {
      for (j = i + 1; j < num; ++j)
     {
       if (number[i] > number[j])
        {
          a =  number[i];
          number[i] = number[j];
          number[j] = a;

        }

     }
  }
    cout<<"\n\t The numbers arranged in ascending order are : ";
    for (i = 0; i < num; ++i)
    {
      cout<<number[i];
    }
    cout<<"\n\n";

    return 0;
}
