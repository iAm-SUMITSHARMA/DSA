// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     // SELF====
//      for (int i = 1; i <= n; i++)
//      {
//          for(int j =1; j<=2*n-1; j++)
//          {
//              if ((i+j)>=(n+2) && j<=(n + i -2))
//              cout<<"  ";
//              else
//              cout<<j<<" ";
//          }
//          cout << endl;
//      }

//     // BY RAGHAV SIR===

//     // FIRST LINE STARS = 2N -1===
//     // for (int i = 1; i <= 2 * n - 1; i++)
//     // {
//     //     cout << i << " ";
//     // }
//     // cout << endl;
//     // int m = n - 1;
//     // int nsp = 1;
//     // for (int i = 1; i <= m; i++)
//     // {
//     //     // numbers
//     //     int a = 1;
//     //     for (int j = 1; j <= m + 1 - i; j++)
//     //     {
//     //         cout << a << " ";
//     //         a++;
//     //     }
//     //     // spaces
//     //     for (int k = 1; k <= nsp; k++)
//     //     {
//     //         cout << "  ";
//     //         a++;
//     //     }
//     //     nsp += 2;
//     //     // numbers
//     //     for (int j = 1; j <= m+1-i; j++)
//     //     {
//     //         cout << a << " ";
//     //         a++;
//     //     }
//     //     cout << endl;
//     // }
// }

// REVISION ===============

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n: " << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < 2 * n; j++)
//         {
//             if (((n + 2 - i) <= j && j <= (n + i - 2)))
//             {

//                 cout << " " << " "; // j = n + 2 - i       n + i - 2
//             }
//             else
//             {
//                 cout << j << " ";
//             }
//         }
//         cout << endl;
//     }

// }

// METHOD - 2: nsp - no. of space

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    int nsp = 1;
    // Numbers in first line = 2*n - 1
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    // Loop from second lines====================
    int m = n - 1;
    for (int i = 1; i <= m; i++)
    {
        // numbers====
        int a = 1;
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << a << " ";
            a++;
        }
        // cout << endl;
        // spaces=============
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
            a++;
        }
        nsp += 2;
        // cout << endl;
        // Again numbers==========
        for (int l = 1; l <= m + 1 - i; l++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}
