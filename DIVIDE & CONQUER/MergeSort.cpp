#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(int *arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= end)
        temp.push_back(arr[j++]);
    // Copy vector -> original array..
    for (int i = start, x = 0; i <= end; i++)
    {
        arr[i] = temp[x++];
    }
}
void mergeSort(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (start >= end)
        return;
    mergeSort(arr, start, mid);   // left half
    mergeSort(arr, mid + 1, end); // right half

    merge(arr, start, mid, end); // conquer wlaa step
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// time complexity for this solution is O(nlogn)
int main()
{
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}