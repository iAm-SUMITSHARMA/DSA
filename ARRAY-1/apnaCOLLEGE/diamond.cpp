// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n: " << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             cout << "  ";
//         }
//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "  ";
//         }
//         for (int k = 0; k < 2 * (n - i) - 1; k++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your n: " << endl;
    cin >> n;
    // triangle
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = n - 1 - i; j > 0; j--)
        {
            cout << " " << " ";
        }
        // for stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    // Inverted triangle
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " " << " ";
        }
        // for stars
        for (int j = 0; j < (2 * n - 2 * i - 1); j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}