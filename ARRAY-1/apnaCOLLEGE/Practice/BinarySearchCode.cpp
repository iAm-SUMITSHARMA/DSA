// #include <iostream>
// using namespace std;
// int binSearch(int *arr, int n, int key)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
//     int n = sizeof(arr) / sizeof(int);
//     int key; // key
//     cout << "Enter your key: " << endl;
//     cin >> key;
//     cout << binSearch(arr, n, key) << endl;
// }

#include <iostream>
using namespace std;
int binSearch(int *arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    bool found = false;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << mid;
            found = true;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    if (!found)
    {
        cout << "key not found..." << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = sizeof(arr) / sizeof(int);
    int key = 5;
    binSearch(arr, n, key);
}