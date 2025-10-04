// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
//     int n = sizeof(arr) / sizeof(int);
//     int key = 12; // KEY
//     int start = 0;
//     int end = n - 1;
//     int mid = (start + end) / 2;
//     if (arr[mid] == key)
//         return mid;
//     else if (arr[mid] < key)
//         start = mid + 1;
//     else if (arr[mid] > key)
//         end = mid - 1;
//     for (int i = start; i <= end; i++)
//     {
//         if (arr[i] == key)
//             cout << i;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int n = sizeof(arr) / sizeof(int);
    int key = 10;
    int start = 0;
    int end = n - 1;
    bool found = false;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << "index number found.. index number is " << mid;
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
        cout << "Key not found..." << endl;
    }
    return 0;
}