
#include<iostream>
using namespace std;

int main() 
{
    
    for(int X_rows = 8; X_rows >= 1; X_rows--)
    {
        for(int y_columns = 1; y_columns <= X_rows; y_columns++)
        {
            cout << y_columns << " ";
        }
        cout <<"\n";
    }
    return 0;
}