// #include <iostream>
// using namespace std;
// int main()
// {
//     int m, n;
//     cout << "Enter rows and columns:" << endl;
//     cin >> m >> n;
//     int a[m][n];
//     cout << "Enter a[i][j]:" << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << "Your 2D-array:" << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Transpose of 2D-array:" << endl;
//     int b[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             // cout << a[j][i] << " ";
//             b[i][j] = a[j][i];
//             cout << b[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// REVISION ==============
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter rows and columns of the matrix: " << endl;
    cin >> m >> n;
    int a[m][n];
    cout << "Enter the elements of your matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Here is your matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // Transpose============
    cout << "Transpose of your matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}