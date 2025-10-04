// Question 1 : Write a recursive function to perform Binary Search.
// Input : arr[ ] = {1, 2, 3, 4, 5, 6, 7}, n = 7, key = 5
// Output : 4 (index of key)
// *Use the starting index & ending index logic used in rotated, sorted array Qs.

#include <iostream>
using namespace std;
// int binSearch(int *arr, int n, int key) // linear search
// {
//     if (n < 0)
//     {
//         return -1;
//     }
//     if (arr[n] == key)
//         return n;
//     return binSearch(arr, n - 1, key);
// }
int binSearch(int *arr, int start, int end, int key) // binary search
{
    if (start > end)
        return -1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; // prevents overflow
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return binSearch(arr, mid + 1, end, key);
    else
        return binSearch(arr, start, mid - 1, key);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << binSearch(arr, 0, n - 1, 4) << endl; // binary search
    // cout << binSearch(arr, n - 1, 5) << endl; // linear search
}