#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // WAY NO. - 1====

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= (n - i); j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int l = 1; l <= (i - 1); l++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // WAY NO. - 2==== THE BETTER ONE===

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= (n - i); j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 1; k <= (2 * i - 1); k++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // METHOD NO. - 2 BY RAGHAV SIR AND HIS TEACHER - SUMIT=== (METHOD= nst & nsp)
    // nst = no. of stars  || nsp = no. of spaces
    int nst = 1;
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        nsp--;
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        nst += 2;
        cout << endl;
    }
}