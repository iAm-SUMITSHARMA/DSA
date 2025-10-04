// #include <iostream>
// using namespace std;
// int main()
// {
//     // WITH EXTRA SPACE------

//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int n = sizeof(a) / sizeof(int);
//     // reverse(a, n);

//     int copyArr[n]; // THIS IS AN EXTRA SPACE

//     for (int i = 0; i < n; i++)
//     {
//         int j = n - 1 - i;
//         copyArr[i] = a[j];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << copyArr[i] << " ";
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int copyArr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;
        copyArr[i] = arr[j];
    }
    for (int i = 0; i < n; i++)
    {
        cout << copyArr[i] << " ";
    }
}