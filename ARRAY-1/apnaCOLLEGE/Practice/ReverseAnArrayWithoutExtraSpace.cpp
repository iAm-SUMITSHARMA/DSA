// #include <iostream>
// using namespace std;
// int main()
// {
//     // WITH O(1) TIME COMPLEXITY
//     // 2 POINTER APPROACH------ (WITHOUT EXTRA SPACE )
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int n = sizeof(arr) / sizeof(int);
//     int temp;
//     int start = 0, end = n - 1;
//     while (start < end)
//     {
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     // PRINT
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << ",";
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = sizeof(arr) / sizeof(int);
    int temp;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    // PRINT
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}