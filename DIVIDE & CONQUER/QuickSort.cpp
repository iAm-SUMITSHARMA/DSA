#include <iostream>
#include <vector>
using namespace std;
int partition(int *arr, int start, int end)
{
    int i = start - 1, pivot = arr[end];
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end]);
    // pivotIdx = i
    return i;
}
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int pivotIdx = partition(arr, start, end);
    quickSort(arr, start, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, end);
}
void printArr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}