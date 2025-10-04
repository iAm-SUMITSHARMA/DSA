#include <iostream>
#include <climits>
using namespace std;
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// void bbsort(int *arr, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool isSwap = false;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 isSwap = true;
//             }
//         }

//         if (!isSwap)
//         {
//             return;
//         }
//     }
// }

// void selectionSort(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int minIdx = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[minIdx] < arr[j])
//             {
//                 minIdx = j;
//             }
//         }
//         swap(arr[i], arr[minIdx]);
//     }
// }

// void insertionSort(int *arr, int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int curr = arr[i];
//         int prev = i - 1;
//         while (prev >= 0 && arr[prev] < curr)
//         {
//             swap(arr[prev], arr[prev + 1]);
//             prev--;
//         }
//         arr[prev + 1] = curr;
//     }
// }

void countSort(int *arr, int n)
{
    int freq[100000] = {0};
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]] = freq[arr[i]] + 1;
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
    }
    for (int i = maxValue, j = 0; i >= minValue; i--)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
}
int main()
{
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    // bbsort(arr, n);
    // selectionSort(arr, n);
    // insertionSort(arr, n);
    countSort(arr, n);
    print(arr, n);
}