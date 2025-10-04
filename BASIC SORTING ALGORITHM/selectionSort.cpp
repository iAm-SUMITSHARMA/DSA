#include <iostream>
#include <climits>
using namespace std;
// TIME COMPLEXITY FOR SELECTION SORTING IS O(n*logn)
// And time complexity of O(n*logn) is better than O(n^2)
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i; 
        // LOOP TO FIND MIN INDEX
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
            swap(arr[i], arr[minIdx]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
}