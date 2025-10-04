// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;

//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             int a = i;
//             int b = j;
//             if (a > n)
//                 a = 2 * n - i;
//             if (b > n)
//                 b = 2 * n - j;
//             // cout << max((n-a+1), (n-b+1)) << " ";
//             int x= min(a,b);
//             cout<<n-x+1<<" ";
//         }
//         cout << endl;
//     }
// }

// REVISION===========

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            int b = j;
            if (a > n || b > n)
            {
                cout << max((a - n + 1), (b - n + 1)) << " ";
            }
            else
            {
                cout << max((n - a + 1), (n - b + 1)) << " ";
            }
        }
        cout << endl;
    }
}