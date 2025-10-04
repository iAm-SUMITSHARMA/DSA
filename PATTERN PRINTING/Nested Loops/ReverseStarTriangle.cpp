#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // SELF=====
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // PW======
    for (int i = 1; i <= n; i++)
    { // No. of stars in a row =  [n + 1 - i  ]
        for (int j = 1; j <= (n + 1 - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}