#include<iostream>
using namespace std;
int main()
 {
    int n, term_1 = 0, term_2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;
    cout<<endl;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << term_1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << term_2 << ", ";
            continue;
        }
        nextTerm = term_1 + term_2;
        term_1 = term_2;
        term_2 = nextTerm;

        cout << nextTerm << ", ";
    }
    cout<<endl;
    return 0;
}
