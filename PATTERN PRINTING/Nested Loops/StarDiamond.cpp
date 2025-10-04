#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // BY RAGHAV SIR=====
    int nst = 1;
    int nsp = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // SPACES===
        for (int j = 1; j <= nsp; j++)
        {
            cout << "   ";
        }
        if (i < n)
            nsp--;
        else
            nsp++;
        // STARS===
        for (int k = 1; k <= nst; k++)
        {
            cout << "*  ";
        }
        if (i < n)
            nst += 2;
        else
            nst -= 2;
        cout << endl;
    }

    // FIRST TRY ====

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 1; k <= 2 * i - 1; k++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int l = 1; l <= n - 1; l++)
    // {
    //     for (int q = 1; q <= l; q++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int r = 1; r <= (n + 2 - l); r--)
    //     {
    //         cout << "* ";
    //         n--;
    //     }
    //     cout << endl;
    // }

    // SECOND TRY====

    // for (int i = 1; i <= 2 * n - 1; i++)
    // {

    //     if (i <= n)
    //     {
    //         for (int k = 1; k <= n - i; k++)
    //         {
    //             cout << "  ";
    //         }
    //         for (int m = 1; m <= 2 * i - 1; m++)
    //         {
    //             cout << "* ";
    //         }

    //         cout << endl;
    //     }
    //     else
    //     {
    //         // int z = n;
    //         for (int j = 1; j <= i - n; j++)
    //         {
    //             cout << "  ";
    //         }
    //         int z = n;
    //         for (int p = 1; p <= 2 * z - 3; p++)
    //         {
    //             cout << "* ";
    //         }
    //             z--;

    //         cout << endl;
    //     }
    // }
}
