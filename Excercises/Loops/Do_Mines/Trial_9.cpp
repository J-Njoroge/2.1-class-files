#include <iostream>

using namespace std;

int main()
{
    int i;

    cout << "Alphabets from (A-Z) are:\n";

    // ASCII value of A=65 and Z=90
     i = 64;

     do
    {
        i++;
        cout << (char)i << " ";
    }while( i <= 90);
    return 0;
}
