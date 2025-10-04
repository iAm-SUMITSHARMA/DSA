#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // SELF===
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    // METHOD - 1 : USING EXTRA VARIABLE====

    // SELF===
    // int z = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //             cout << z << " ";
    //         else
    //             cout << z - 1 << " ";
    //     }
    //     cout << endl;
    // }

    // By RAGHAV SIR=====
    // int a = 5;
    // for (int i = 1; i <= n; i++)
    // {

    //     if (i % 2 != 0) // row no. odd
    //         a = 1;
    //     else // row no. even
    //         a = 0;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << a << " ";
    //         // flipping===
    //         if (a == 1)
    //             a = 0;
    //         else
    //             a = 1;
    //     }
    //     cout << endl;
    // }
}

// Revision :

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:" << endl;
//     cin >> n;
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     for (int j = 1; j <= i; j++)
//     //     {
//     //         if ((i + j) % 2 == 0)
//     //         {
//     //             cout << 1 << " ";
//     //         }
//     //         else
//     //             cout << 0 << " ";
//     //     }
//     //     cout << endl;
//     // }

//     // METHOD - 2 : USING EXTRA VARIABLE================

//     int a = 999;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//                 a = 1;
//             else
//                 a = 0;
//             cout << a << " ";
//             // flipping
//             if (a == 1)
//                 a = 0;
//             else
//                 a = 1;
//         }
//         cout << endl;
//     }
// }