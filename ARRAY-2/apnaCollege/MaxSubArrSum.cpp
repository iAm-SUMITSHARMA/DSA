#include <iostream>
#include <climits>
using namespace std;

// SELF======

// int sum(int arr[], int n)
// {
//     int mxsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             mxsum += arr[i] * (-1);
//         }
//         else
//             mxsum += arr[i];
//     }
//     return mxsum;
// }
// int main()
// {
//     int arr[] = {2, -3, 6, -5, 4, 2};
//     int n = sizeof(arr) / sizeof(int);
//     cout << sum(arr, n);
// }

// BRUTE FORCE=== WITH TIME COMPLEXITY O(n cube)
// void maxSubArraySum1(int *arr, int n)
// {
//     int maxSum = INT_MIN;
//     for (int start = 0; start < n; start++)
//     {
//         for (int end = start; end < n; end++)
//         {
//             int sum = 0;
//             for (int i = start; i <= end; i++)
//             {
//                 sum += arr[i];
//             }
//             cout << sum << ",";
//             maxSum = max(maxSum, sum);
//         }
//         cout << endl;
//     }

//     cout << "maximum no. among all is : " << maxSum << endl;
// }

// int main()
// {
//     int arr[] = {2, -3, 6, -5, 4, 2};
//     int n = sizeof(arr) / sizeof(int);
//     maxSubArraySum1(arr, n);
// }
// BRUTE FORCE=== WITH TIME COMPLEXITY O(n square)
void maxSubArraySum1(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int sum = 0;
        for (int i = start; i < n; i++)
        {
            sum += arr[i];
            cout << sum << ",";
            maxSum = max(maxSum, sum);
        }
        cout << endl;
    }

    cout << "maximum no. among all is : " << maxSum << endl;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArraySum1(arr, n);
}