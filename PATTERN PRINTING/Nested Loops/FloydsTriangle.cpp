// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int z = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << z << " ";
//             z++;
//         }
//         cout << endl;
//     }
// }

// REVISION=======

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    int z = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << z << " ";
            z++;
        }
        cout << endl;
    }
}