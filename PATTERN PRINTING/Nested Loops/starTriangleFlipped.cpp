#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // SELF PART -1====
    //******APPLICABLE ONLY FOR CERTAIN CASES===

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if ((i + j) >= (n + 1))
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }

    // SELF PART -2 WITH thE HELP Of RAGHAV SIR====
    // TWO LOOPS INSIDE ONE LOOP==

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {

    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
}