// #include <iostream>
// using namespace std;
// BY SHRADDHA KHAPRA========
// bool check(int *arr, int n, int i)
// {
//     if (i == n - 1) // base case
//     {
//         return true;
//     }
//     if (arr[i] > arr[i + 1])
//     {
//         return false;
//     }
//     return check(arr, n, i + 1);
// }
// int main()
// {
//     // int arr[] = {1, 2, 3, 4, 5};
//     int arr[] = {1, 2, 4, 3, 5};
//     int n = sizeof(arr) / sizeof(int);
//     int i = 0;
//     cout << check(arr, n, i) << endl;
//     ;
//     return 0;
// }

// BY SUMIT SHARMA===========
// bool check(int *arr, int n)
// {
//     if (n == 1) // base case
//     {
//         return true;
//     }
//     if (arr[n - 1] < arr[n - 2])
//     {
//         return false;
//     }
//     return check(arr, n - 1);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     // int arr[] = {1, 2, 4, 3, 5};
//     int n = sizeof(arr) / sizeof(int);
//     cout << check(arr, n) << endl;
//     return 0;
// }

// REVISION========== SELF
// #include <iostream>
// using namespace std;
// bool check(int *arr, int n)
// {
//     // base case
//     // inner function
//     // kaam

//     //self==========
//     if (n == 1)
//     {
//         return true;
//     }
//     if (arr[n - 1] < arr[n - 2])
//         return false;
//     return check(arr, n - 1);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     // int arr[] = {1,2,3,4,6,5};
//     int n = sizeof(arr) / sizeof(int);
//     cout << check(arr, n) << endl;
//     return 0;
// }

// REVISION========== SHRADHA KHAPRA
// #include <iostream>
// using namespace std;
// bool check(int *arr, int n, int i)
// {
//     // base case
//     // inner function
//     // kaam

//     // Shradha  khapra==========
//     if (i == (n - 1))
//         return true;
//     if (arr[i] > arr[i + 1])
//         return false;
//     return check(arr,  n,  i + 1);
// }
// int main()
// {
//     // int arr[] = {1, 2, 3, 4, 5};
//     int arr[] = {1,2,3,4,6,5};
//     int n = sizeof(arr) / sizeof(int);
//     cout << check(arr, n, 0) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
bool check(int *arr, int n)
{
    if (n <= 0)
    {
        return true;
    }
    if (arr[n - 1] < arr[n - 2])
        return false;

    return check(arr, n - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // int arr[] = {1, 2, 3, 4, 6, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << check(arr, n) << endl;
}