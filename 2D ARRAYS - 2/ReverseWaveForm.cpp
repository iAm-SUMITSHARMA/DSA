// #include <iostream>
// using namespace std;
// int main()
// {
//     int m, n;
//     cout << "Enter the row and column of the matrix: " << endl;
//     cin >> m >> n;
//     int a[m][n];
//     cout << "Enter elements of matrix: " << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << "Here is your wave form matrix: " << endl;
//     for (int i = 0; i < m; i++)
//     {
//         if (i % 2 == 0)
//         {
//             for (int k = n - 1; k >= 0; k--)
//             {
//                 cout << a[i][k] << " ";
//             }
//         }
//         else
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << a[i][j] << " ";
//             }
//         }
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the row and column of the matrix: " << endl;
    cin >> m >> n;
    int a[m][n];
    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Here is your wave form matrix: " << endl;
    // 1 2 3
    // 4 5 6
    // 7 8 9         =>          7 8 9 6 5 4 1 2 3

    for (int i = m - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << a[i][j] << " ";
            }
        }
    }

    // for (int i = m - 1; i >= 0; i--)
    // {
    //     if (i % 2 == 0)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout << a[i][j] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (int k = n - 1; k >= 0; k--)
    //         {
    //             cout << a[i][k] << " ";
    //         }
    //     }
    // }
}